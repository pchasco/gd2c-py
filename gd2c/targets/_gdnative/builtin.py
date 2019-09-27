from __future__ import annotations
from typing import TYPE_CHECKING
from gd2c.targets._gdnative.context import FunctionContext
from gd2c.bytecode import CallBuiltinGDScriptOp
from gd2c import builtin as BI
from gd2c.address import GDScriptAddress
from gd2c import variant

if TYPE_CHECKING:
    from typing import IO

def call_builtin(function_context: FunctionContext, op: CallBuiltinGDScriptOp, file: IO) -> None:
    if op.function_index == BI.TYPE_CONVERT:
        type_convert(function_context, op, file)

def type_convert(function_context: FunctionContext, op: CallBuiltinGDScriptOp, file: IO) -> None:
    source = function_context.variables[op.args[0]]
    dest = function_context.variables[op.dest]
    vtype = function_context.variables[op.args[1]]
    file.write(f"""\
        {{
            int t = api10->godot_variant_as_int({vtype.address_of()});
            godot_variant_call_error err;
            godot_variant *args[] = {{ {source.address_of()} }};
            gd2c10->variant_convert({dest.address_of()}, t, (const godot_variant **)args, 1, &err);
        }}
        """)
    