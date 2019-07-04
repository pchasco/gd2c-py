from __future__ import annotations
from typing import TYPE_CHECKING, IO, Set
from gd2c.address import GDScriptAddress, ADDRESS_MODE_LOCALCONSTANT
from gd2c.variant import VariantType
from gd2c.bytecode import *
from gd2c.controlflow import ControlFlowGraphNode
if TYPE_CHECKING:
    from gd2c.targets.gdnative import FunctionContext

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
                godot_variant __return_value;
                api10->godot_variant_new_nil(&__return_value);
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

        stack_array_size = self.function_context.func.stack_size - self.function_context.func.len_parameters

        if stack_array_size > 0:
            file.write(f"""
                godot_variant stack[{stack_array_size}];
            """)
            for i in range(stack_array_size):
                file.write(f"""\
                    api10->godot_variant_new_nil(&stack[{i}]);
                """)

        self._transpile_ops(file)

        # Function teardown
        file.write("""
            __return:        
        """)

        if self.function_context.func.stack_size > 0:
            for i in range(stack_array_size):
                file.write(f"""\
                    api10->godot_variant_destroy(&stack[{i}]);
                """)       

        file.write("""
                return __return_value;
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
                self._transpile_op(node, op, file)

    def _transpile_op(self, node: ControlFlowGraphNode, op: GDScriptOp, file: IO):
        if op.opcode == OPCODE_JUMP:
            branch = self.function_context.cfg.node_from_address(op.branch)
            file.write(f"goto {branch.label};\n")

        elif op.opcode == OPCODE_JUMPIF:
            branch = self.function_context.cfg.node_from_address(op.branch)
            fallthrough = self.function_context.cfg.node_from_address(op.fallthrough)
            file.write(f"""
                __flag = api10->godot_variant_as_bool({node.variable(op.condition).address_of()});
                if (__flag) goto {branch.label};
                goto {fallthrough.label};
            """)

        elif op.opcode == OPCODE_JUMPIFNOT:
            branch = self.function_context.cfg.node_from_address(op.branch)
            fallthrough = self.function_context.cfg.node_from_address(op.fallthrough)
            file.write(f"""
                __flag = api10->godot_variant_as_bool({node.variable(op.condition).address_of()});
                if (!__flag) goto {branch.label};
                goto {fallthrough.label};
            """)     

        elif op.opcode == OPCODE_LINE:
            # Ignore  
            pass

        elif op.opcode == OPCODE_ASSIGN:
            file.write(f"""
                api10->godot_variant_new_copy({node.variable(op.dest).address_of()}, {node.variable(op.source).address_of()});
            """)

        elif op.opcode == OPCODE_OPERATOR:
            file.write(f"""
                api11->godot_variant_evaluate({op.op}, 
                    {node.variable(op.operand1).address_of()}, 
                    {node.variable(op.operand2).address_of()}, 
                    {node.variable(op.dest).address_of()}, 
                    __flag);
            """)

        elif op.opcode == OPCODE_RETURN:
            file.write(f"""
                api10->godot_variant_new_copy(&__return_value, {node.variable(op.source).address_of()});
                goto __return;            
            """)
                
        else:
            file.write(f"// {str(op)};\n")

    
