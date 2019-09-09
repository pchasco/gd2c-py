from __future__ import annotations
from typing import TYPE_CHECKING, Dict
from gd2c.address import GDScriptAddress, ADDRESS_MODE_PARAMETER, ADDRESS_MODE_SELF, ADDRESS_MODE_STACKVARIABLE, ADDRESS_MODE_STACK
from gd2c.bytecode import CallGDScriptOp, CallReturnGDScriptOp, \
    CallSelfBaseGDScriptOp, CallBuiltinGDScriptOp, YieldGDScriptOp, \
    YieldSignalGDScriptOp

if TYPE_CHECKING:
    from project import Project
    from gdscriptclass import GDScriptFunction, GDScriptClass

DONT_PROPAGATE = True

def annotate_coroutines(project: Project) -> None:
    """Analizes all functions in the project for the yield/yield signal instruction."""

    for cls in project.classes():
        for func in cls.functions():
            yields = False
            for op in func.ops:
                if isinstance(op, (YieldGDScriptOp, YieldSignalGDScriptOp)):
                    yields = True
                    break

            func.yields = yields


def annotate_assigned_parameters(project: Project) -> None:
    """Analyzes the project and marks function parameters as const in methods 
    where they are not modified, and not passed to functions that may modify
    them.

    This is used to optimize entry into functions. GDNative functions take
    pointers to arguments, so the function may alter the value. However GDScript
    passes arguments by value which requires a copy. We can eliminate the copy
    if we know that there is no chance the value will be modified.
    """
    
    changed = False

    def visit_func(cls: GDScriptClass, func: GDScriptFunction):
        nonlocal changed
        def visit(node):
            nonlocal changed

            # First is a simple check to see if the value is set in the node.
            # if so then the parameter is assigned
            for p in func.parameters():
                if p.is_assigned:
                    continue

                addr = GDScriptAddress.calc_address(ADDRESS_MODE_STACK, p.index)
                if addr in node.block.defs:
                    p.is_assigned = True
                    changed = True
                else:
                    addr = GDScriptAddress.calc_address(ADDRESS_MODE_STACKVARIABLE, p.index)
                    if addr in node.block.defs:
                        p.is_assigned = True
                        changed = True

            if DONT_PROPAGATE:
                return

            # Second check is to see if the parameter is passed to any function
            # that may assign the value
            for op in node.block.ops:
                callee: Union[GDScriptFunction, None] = None
                args: Union[FrozenSet[int], None] = None
                is_call = False

                if isinstance(op, CallGDScriptOp) \
                or isinstance(op, CallReturnGDScriptOp):
                    is_call = True
                    if GDScriptAddress(op.receiver).mode == ADDRESS_MODE_SELF:
                        # At this time we only know facts about the callee if
                        # we are calling self.callee (or base, below). If not
                        # self we have no analysis that can help us know
                        # what we are actually calling because we don't know
                        # the type of the receiver
                        args = frozenset(op.args)
                        callee = cls.function(func.global_names[op.name_index])

                elif isinstance(op, CallSelfBaseGDScriptOp):
                    is_call = True
                    args = frozenset(op.args)
                    assert cls.base
                    callee = cls.base.function(func.global_names[op.name_index])
                elif isinstance(op, CallBuiltinGDScriptOp):
                    is_call = True

                if is_call:
                    if callee:
                        # We know about the target so we can check for assignment
                        # for all arguments to callee which are parameters to this
                        # function. Mark the parameter to this function if the
                        # callee may write to it.
                        for i, addr in enumerate(args):
                            pa = GDScriptAddress(addr)
                            if pa.mode == ADDRESS_MODE_STACK or pa.mode == ADDRESS_MODE_STACKVARIABLE and pa.offset < func.len_parameters:
                                tp = callee.parameter(i)
                                if not tp.is_assigned:
                                    func.parameter(pa.offset).is_assigned = True  
                                    changed = True                          
                    else:
                        # We cannot determine the callee, so we must
                        # assume the callee will assign everything
                        for p in func.parameters():
                            if not p.is_assigned:
                                p.is_assigned = True
                                changed = True

        assert func.cfg
        func.cfg.visit_nodes(visit)

    def visit_class(cls, depth):
        for func in cls.functions():
            visit_func(cls, func)

    for cls in project.classes():
        for func in cls.functions():
            func.cfg.live_variable_analysis()
            for parameter in func.parameters():
                parameter.is_assigned = False

    if DONT_PROPAGATE:
        project.visit_classes_in_dependency_order(visit_class)  
    else:
        while True:
            changed = False
            project.visit_classes_in_dependency_order(visit_class)  
            if not changed:
                break