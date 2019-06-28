from __future__ import annotations
from typing import TYPE_CHECKING, IO, Set
from gd2c.address import GDScriptAddress, ADDRESS_MODE_LOCALCONSTANT
from gd2c.variant import VariantType
import * from gd2c.bytecode

if TYPE_CHECKING:
    from gd2c.targets.gdnative import FunctionContext
    from gd2c.controlflow import ControlFlowGraphNode

class FunctionCodegen:
    def __init__(self, function_context: FunctionContext):
        self.function_context = function_context
    
    def transpile(self, file: IO):
        file.write(f"""
            godot_variant {self.function_context.function_identifier}(
                godot_object* p_instance,
                void* p_method_data,
                struct {self.function_context.class_context.struct_tag}* p_user_data,
                int p_num_args,
                godot_variant** p_args)
            {{   
                godot_bool __flag;   
        """)

        if self.function_context.func.len_constants > 0:
            file.write(f"""
                if (0 == {self.function_context.constants_initialized_identifier}) {{
            """)

            for const in self.function_context.func.constants():
                file.write(f"""\
                    {{
                        uint8_t data[] = {{ {','.join(map(lambda b: str(b), const.data))} }};
                        gd2c->godot_variant_decode(&{self.function_context.constants_array_identifier}[{const.index}], data, {len(const.data)}, {const.vtype.value}, true);
                    }}
                """)

            file.write(f"""
                    {self.function_context.constants_initialized_identifier} = 1;            
                }}
            """)

        if self.function_context.func.stack_size > 0:
            file.write(f"""
                godot_variant stack[{self.function_context.func.stack_size}];
            """)
            for i in range(self.function_context.func.stack_size):
                file.write(f"""\
                    api10->godot_variant_new_nil(&stack[{i}]);
                """)

        self._transpile_ops(file)

        if self.function_context.func.stack_size > 0:
            for i in range(self.function_context.func.stack_size):
                file.write(f"""\
                    api10->godot_variant_destroy(&stack[{i}]);
                """)                

        file.write("""
            }
        """)

    def _transpile_ops(self, file: IO):
        cfg = self.function_context.cfg
        worklist = [cfg.entry_node]
        visited: Set[ControlFlowGraphNode] = set()
        while any(worklist):
            node = worklist.pop()
            if node in visited:
                continue

            visited.add(node)
            worklist.extend(cfg.succs(node))

            file.write(f"{node.label}:\n")
            for op in node.block.ops:
                self._transpile_op(op, file)

    def _transpile_op(self, op: GDScriptOp, file: IO):
        if op is JumpGDScriptOp:
            branch = self.function_context.cfg.node_from_address(op.branch)
            file.write(f"goto {branch.label};\n")
        elif op is JumpIfGDScriptOp:
            fallthrough = self.function_context.cfg.node_from_address(op.branch)
        else:
            file.write(f"{str(op)};\n")

    
