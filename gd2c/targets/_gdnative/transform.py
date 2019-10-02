from __future__ import annotations
from typing import TYPE_CHECKING, Dict, List, Set, Tuple
from gd2c.controlflow import Block
from gd2c.bytecode import OPCODE_BREAKPOINT, OPCODE_LINE, GDScriptOp
from gd2c.gdscriptclass import GDScriptFunction
from gd2c.address import *
    
def insert_initializers_transformation(func: GDScriptFunction):
    """Inserts Initialize ops for all implicit stack variables."""
    from gd2c.bytecode import InitializeGDScriptOp

    assert func.cfg
    assert func.cfg.entry_node

    all_addr: Set[int] = set()
    for block in func.cfg.nodes():
        all_addr.update(block.defs)

    initialize_ops: List[GDScriptOp] = []

    for addr in all_addr:
        address = GDScriptAddress(addr)
        if address.mode in (ADDRESS_MODE_STACK, ADDRESS_MODE_STACKVARIABLE):
            if address.offset >= func.len_parameters:
                initialize_ops.append(InitializeGDScriptOp(addr))

    node = func.cfg.entry_node
    node.insert_ops_before(node.last_op, initialize_ops)  

def insert_destructors_transformation(func: GDScriptFunction):
    """Inserts destructor calls for variants that were created in the
    function.
    """
    from gd2c.bytecode import DestroyGDScriptOp

    assert func.cfg
    assert func.cfg.exit_node

    all_addr: Set[int] = set()
    for block in func.cfg.nodes():
        all_addr.update(block.defs)

    ops: List[GDScriptOp] = []

    for addr in all_addr:
        address = GDScriptAddress(addr)
        if address.mode == ADDRESS_MODE_STACKVARIABLE or address.mode == ADDRESS_MODE_STACK:
            if address.offset >= func.len_parameters:
                ops.append(DestroyGDScriptOp(addr))

    node = func.cfg.exit_node
    if node.last_op:
        node.insert_ops_before(node.last_op, ops)  
    else:
        node.append_ops(ops)

def replace_init_calls_with_noop_transformation(func: GDScriptFunction):
    """Eliminates calls to _init. The GDScript engine ignores these calls,
    so we should do the same.
    """
    from gd2c.bytecode import CallGDScriptOp, CallSelfBaseGDScriptOp, NoopGDScriptOp

    def visit(node):
        remove: List[GDScriptOp] = []
        for op in node.ops:
            name = ""
            if isinstance(op, CallGDScriptOp):
                name = func_context.global_names[op.name_index]
            elif isinstance(op, CallSelfBaseGDScriptOp):
                name = func_context.func.global_names[op.name_index]
            
            if name == "_init":
                remove.append(op)

        for op in remove:
            node.block.remove_op(op)

    assert func
    assert func.cfg
    func.cfg.visit_nodes(visit)     
