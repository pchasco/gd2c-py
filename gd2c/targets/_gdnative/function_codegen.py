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

        # Initialize function local constants if first time function was called
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

                godot_variant stack[{self.function_context.func.len_stack_array}];
            """)

        self._transpile_nodes(file)

        file.write("""
            }
        """)

    def _transpile_nodes(self, file: IO):
        cfg = self.function_context.cfg
        worklist = [cfg.entry_node]
        visited: Set[ControlFlowGraphNode] = set()
        while any(worklist):
            node = cast(ControlFlowGraphNode, worklist.pop())
            if node in visited:
                continue

            visited.add(node)
            worklist.extend(cfg.succs(node))

            file.write(f"{node.label}:\n")
            for op in node.block.ops:
                self._transpile_op(node, op, file)

    def _transpile_op(self, node: ControlFlowGraphNode, op: GDScriptOp, file: IO):
        def opcode_jump(op: JumpGDScriptOp):
            branch = self.function_context.cfg.node_from_address(op.branch)
            assert branch
            file.write(f"goto {branch.label};\n")

        def opcode_jumpif(op: JumpIfGDScriptOp):
            branch = self.function_context.cfg.node_from_address(op.branch)
            assert branch
            fallthrough = self.function_context.cfg.node_from_address(op.fallthrough)
            assert fallthrough
            file.write(f"""
                __flag = api10->godot_variant_as_bool({node.variable(op.condition).address_of()});
                if (__flag) goto {branch.label};
                goto {fallthrough.label};
            """)

        def opcode_jumpifnot(op: JumpIfNotGDScriptOp):
            branch = self.function_context.cfg.node_from_address(op.branch)
            assert branch
            fallthrough = self.function_context.cfg.node_from_address(op.fallthrough)
            assert fallthrough
            file.write(f"""
                __flag = api10->godot_variant_as_bool({node.variable(op.condition).address_of()});
                if (!__flag) goto {branch.label};
                goto {fallthrough.label};
            """)     

        def opcode_line(op: LineGDScriptOp):
            # Ignore  
            pass

        def opcode_assign(op: AssignGDScriptOp):
            file.write(f"""
                api10->godot_variant_new_copy({node.variable(op.dest).address_of()}, {node.variable(op.source).address_of()});
            """)

        def opcode_operator(op: OperatorGDScriptOp):
            file.write(f"""
                api11->godot_variant_evaluate({op.op}, 
                    {node.variable(op.operand1).address_of()}, 
                    {node.variable(op.operand2).address_of()}, 
                    {node.variable(op.dest).address_of()}, 
                    &__flag);
            """)

        def opcode_return(op: ReturnGDScriptOp):
            file.write(f"""
                api10->godot_variant_new_copy(&__return_value, {node.variable(op.source).address_of()});
                // next statement should be a goto __exit;            
            """)

        def opcode_destroy(op: DestroyGDScriptOp):
            file.write(f"""
                api10->godot_variant_destroy({node.variable(op.address).address_of()});
            """)

        def opcode_initialize(op: InitializeyGDScriptOp):
            file.write(f"""
                api10->godot_variant_new_nil({node.variable(op.address).address_of()});
            """)

        def opcode_real_return(op: RealReturnGDScriptOp):
            file.write(f"""
                return __return_value;
            """)
                
        if op.opcode == OPCODE_JUMP:
            opcode_jump(op) # type: ignore
        elif op.opcode == OPCODE_JUMPIF:
            opcode_jumpif(op) # type: ignore
        elif op.opcode == OPCODE_JUMPIFNOT:
            opcode_jumpifnot(op) # type: ignore
        elif op.opcode == OPCODE_LINE:
            opcode_line(op) # type: ignore
        elif op.opcode == OPCODE_ASSIGN:
            opcode_assign(op) # type: ignore
        elif op.opcode == OPCODE_OPERATOR:
            opcode_operator(op) # type: ignore
        elif op.opcode == OPCODE_RETURN:
            opcode_return(op) # type: ignore
        elif op.opcode == OPCODE_DESTROY:
            opcode_destroy(op) # type: ignore
        elif op.opcode == OPCODE_INITIALIZE:
            opcode_initialize(op) # type: ignore
        elif op.opcode == OPCODE_REAL_RETURN:
            opcode_real_return(op) # type: ignore
        else:
            file.write(f"// {str(op)};\n")

    
