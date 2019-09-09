from __future__ import annotations
from typing import List
from gd2c.project import Project
from gd2c.gdscriptclass import GDScriptFunction
from gd2c.controlflow import build_control_flow_graph, Block
from gd2c.bytecode import OPCODE_BREAKPOINT, OPCODE_LINE, GDScriptOp
 
def strip_debug(func: GDScriptFunction):
    """Strips debug instructions from bytecode.
    
    Arguments:
    func -- the function to strip. The function must have its control-flow graph set.
    """
    assert func
    assert func.cfg

    def visitor(block: Block):
        remove: List[GDScriptOp] = []
        for op in block.ops:
            if op.opcode in (OPCODE_BREAKPOINT, OPCODE_LINE):
                remove.append(op)

        for op in remove:
            print(f"Removing from {block.label} {op}")
            block.remove_op(op)

    func.cfg.visit_nodes(visitor)

def make_coroutine(func: GDScriptFunction):
    """Transforms the function into a coroutine that can be yielded and
    resumed. The transformed function will return a coroutine script class
    instance which may or may not be completed when control is passed back 
    to the caller.

    Any functions that yield must be transformed into a coroutine in order
    for yield/resume to work correctly.

    Arguments:
    func -- Any function that yields or that calls a function that yields.
    """
    assert func

    raise NotImplementedError()

def expand_jump_to_default_arg(func: GDScriptFunction):
    """Expands the jump to default argument GDScript instruction
    into step-by-step bytecode. The CFG will be altered by inserting
    blocks for branches to the default argument assignments.

    The reason for expanding the jump to default arguments instruction
    is so that each assignment is visible to the optimizer and code
    generator, with the opportunity to optimize away unneeded assignments.
    """
    assert func

    print("expand_jump_to_default_arg not implemented")

def substitute_intrinsics(func: GDScriptFunction):
    """Identifies calls and/or sequences of operations that can be
    substituted with more optimized versions. These intrinsics are
    target-agnostic. Specific targets may implement their own
    set of intrinsic operations.
    """
    assert func

    print("substitute_intrinsics not implemented")

def promote_typed_arithmetic(func: GDScriptFunction):
    """Evaluates arithmetic operations for opportunities to promote
    to typed arithmetic over using variant arithmetic. Type annotations
    from GDScript are assumed to be accurate. When identified, assignments
    and arithmetic operations are converted to native ones. Unboxing and
    boxing operations are inserted where necessary.

    An operation will be promoted to typed arithmetic if it meets the
    following criteria:
    1. The type of all operands is known
    2. The operation is a basic arithmetic operation (+, -, *, /, etc.)
    3. The result of the operation can be reused at least once before
       being boxed back into a variant.

    An example of an operation that would not be promoted to typed
    arithmetic could be as follows:

    func mul(a: int, b: int):
        return a * b

    It may seem that the expression a * b is a perfect candidate for
    promotion because both operands are of known type, however to
    to do typed arithmetic may incur additional cost.

    (GDNative output)

    int a = gdnative->godot_variant_as_int(p_arg[0]);
    int b = gdnative->godot_variant_as_int(p_arg[1]);
    int ri = a * b
    godot_variant rv;
    gdnative->godot_variant_new_int(&rv, ri);
    return rv;

    In the above case continuing to use variants may be more
    efficient because it requires fewer calls into the gdnative api.

    godot_variant rv;
    bool valid;
    gdnative->godot_variant_evaluate(8, p_arg[0], p_arg[1], &rv, &valid);
    return rv;
    """
    assert func
    print("promote_typed_arithmetic not implemented")

