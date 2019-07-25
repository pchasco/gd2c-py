from __future__ import annotations
from typing import TYPE_CHECKING, IO, Set, Union
from gd2c.address import GDScriptAddress, ADDRESS_MODE_LOCALCONSTANT, ADDRESS_MODE_SELF
from gd2c.variant import VariantType
from gd2c.bytecode import *
from gd2c.controlflow import ControlFlowGraphNode
if TYPE_CHECKING:
    from gd2c.targets.gdnative import FunctionContext

def __transpile_signature(function_context: FunctionContext) -> str:
    return f"""\
        godot_variant {function_context.function_identifier}(
            godot_object* p_instance,
            void* p_method_data,
            void* _p_user_data,
            int p_num_args,
            godot_variant** p_args)"""

def transpile_signature(function_context: FunctionContext, file: IO):
    file.write(__transpile_signature(function_context))
    file.write(";\n")   

def transpile_function(function_context: FunctionContext, file: IO):
    file.write(__transpile_signature(function_context))
    file.write(f"""\
        {{   
            struct {function_context.class_context.struct_tag} *p_user_data = (struct {function_context.class_context.struct_tag}*)_p_user_data;
            godot_bool __flag;   
            godot_variant_call_error __error;
            godot_variant __return_value;
            api10->godot_variant_new_nil(&__return_value);
        """)

    # Initialize function local constants if first time function was called
    if function_context.func.len_constants > 0:
        file.write(f"""\
            if (0 == {function_context.constants_initialized_identifier}) {{
        """) 

        for const in function_context.func.constants():
            file.write(f"""\
                {{
                    uint8_t data[] = {{ {','.join(map(lambda b: str(b), const.data))} }};
                    gd2c->godot_variant_decode(&{function_context.constants_array_identifier}[{const.index}], data, {len(const.data)}, {const.vtype.value}, true);
                }}
            """) 

        file.write(f"""\
                {function_context.constants_initialized_identifier} = 1;            
            }}
        """)

    if function_context.func.len_stack_array > 0:
        file.write(f"""\
            godot_variant stack[{function_context.func.len_stack_array}];
        """)

    __transpile_nodes(function_context, file)

    file.write(f"""\
        }}
    """)

def __transpile_nodes(function_context: FunctionContext, file: IO):
    cfg = function_context.cfg
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
            __transpile_op(function_context, node, op, file)

def __transpile_op(function_context: FunctionContext, node: ControlFlowGraphNode, op: GDScriptOp, file: IO):
    def opcode_jump(op: JumpGDScriptOp):
        branch = function_context.cfg.node_from_address(op.branch)
        assert branch
        file.write(f"goto {branch.label};\n")

    def opcode_jumpif(op: JumpIfGDScriptOp):
        branch = function_context.cfg.node_from_address(op.branch)
        assert branch
        fallthrough = function_context.cfg.node_from_address(op.fallthrough)
        assert fallthrough
        file.write(f"""\
            __flag = api10->godot_variant_as_bool({node.variable(op.condition).address_of()});
            if (__flag) goto {branch.label};
            goto {fallthrough.label};
        """)

    def opcode_jumpifnot(op: JumpIfNotGDScriptOp):
        branch = function_context.cfg.node_from_address(op.branch)
        assert branch
        fallthrough = function_context.cfg.node_from_address(op.fallthrough)
        assert fallthrough
        file.write(f"""\
            __flag = api10->godot_variant_as_bool({node.variable(op.condition).address_of()});
            if (!__flag) goto {branch.label};
            goto {fallthrough.label};
        """)     

    def opcode_line(op: LineGDScriptOp):
        # Ignore  
        pass

    def opcode_assign(op: AssignGDScriptOp):
        file.write(f"""\
            api10->godot_variant_new_copy({node.variable(op.dest).address_of()}, {node.variable(op.source).address_of()});
        """)

    def opcode_assigntrue(op: AssignTrueGDScriptOp):
        file.write(f"""\
            api10->godot_variant_new_bool({node.variable(op.dest).address_of()}, true);
        """)

    def opcode_assignfalse(op: AssignFalseGDScriptOp):
        file.write(f"""\
            api10->godot_variant_new_bool({node.variable(op.dest).address_of()}, false);
        """)

    def opcode_operator(op: OperatorGDScriptOp):
        file.write(\
            f"api11->godot_variant_evaluate({op.op}, " \
                f"{node.variable(op.operand1).address_of()}, " \
                f"{node.variable(op.operand2).address_of()}, " \
                f"{node.variable(op.dest).address_of()}, " \
                f"&__flag);\n")

    def opcode_return(op: ReturnGDScriptOp):
        file.write(f"""\
            api10->godot_variant_new_copy(&__return_value, {node.variable(op.source).address_of()});        
        """)

    def opcode_destroy(op: DestroyGDScriptOp):
        file.write(f"""\
            api10->godot_variant_destroy({node.variable(op.address).address_of()});
        """)

    def opcode_initialize(op: InitializeGDScriptOp):
        file.write(f"""\
            api10->godot_variant_new_nil({node.variable(op.address).address_of()});
        """)

    def opcode_real_return(op: RealReturnGDScriptOp):
        file.write(f"""\
            return __return_value;
        """)

    def opcode_call(op: Union[CallGDScriptOp, CallReturnGDScriptOp, CallSelfBaseGDScriptOp]):
        call_base = isinstance(op, CallSelfBaseGDScriptOp)
        call_return = isinstance(op, (CallReturnGDScriptOp, CallSelfBaseGDScriptOp)) and op.dest is not None

        # use local scope for args[]
        file.write(f"""\
            {{
        """)           

        # args array if necessary, otherwise just use a null ptr
        if op.arg_count > 0:
            file.write(f"""\
                godot_variant *args[] = {{ {", ".join([
                    node.variable(addr).address_of() for addr in op.args
                ])} }};
            """)     
            args = "args"        
        else:
            args = "(void*)0"

        if call_base:
            receiver = "p_user_data->__self"
            try_vtable = True
        else:
            receiver_address = GDScriptAddress(op.receiver) # type: ignore
            receiver = node.variable(receiver_address.address).address_of()
            try_vtable = receiver_address.mode == ADDRESS_MODE_SELF

        if try_vtable:
            method_name = function_context.func.global_names[op.name_index]
            ctx = function_context.class_context.base_context if call_base else function_context.class_context
            assert ctx
            vtable_entry = ctx.get_member_vtable_entry(method_name)

        # if method is in vtable we can call with function pointer,
        # otherwise we will have to call with godot_variant_call
        if call_return:
            file.write(f"{node.variable(op.dest).value()} = ") # type: ignore

        if vtable_entry:                
            base_chain = "base->" if call_base else ""
            file.write(\
                f"p_user_data->__vtable->{base_chain}methods[{vtable_entry.index}](" \
                    f"p_instance, " \
                    f"p_method_data, " \
                    f"p_user_data, " \
                    f"{op.arg_count}, " \
                    f"{args});\n")
        else:
            file.write(\
                f"api10->godot_variant_call(" \
                    f"{receiver}, " \
                    f"{function_context.global_names_identifier}[{op.name_index}], " \
                    f"{args}, " \
                    f"{op.arg_count}, " \
                    f"&__error);\n")

        file.write(f"""}}\n""")

    if op.opcode == OPCODE_OPERATOR:
        opcode_operator(op) # type: ignore     
    elif op.opcode == OPCODE_EXTENDSTEST:
        file.write(f"""// OPCODE_EXTENDSTEST\n""")
    elif op.opcode == OPCODE_ISBUILTIN:
        file.write(f"""// OPCODE_ISBUILTIN\n""")
    elif op.opcode == OPCODE_SET:
        file.write(f"""// OPCODE_SET\n""")
    elif op.opcode == OPCODE_GET:
        file.write(f"""// OPCODE_GET\n""")
    elif op.opcode == OPCODE_SETNAMED:
        file.write(f"""// OPCODE_SETNAMED\n""")
    elif op.opcode == OPCODE_GETNAMED:
        file.write(f"""// OPCODE_GETNAMED\n""")
    elif op.opcode == OPCODE_SETMEMBER:
        file.write(f"""// OPCODE_SETMEMBER\n""")
    elif op.opcode == OPCODE_GETMEMBER:
        file.write(f"""// OPCODE_GETMEMBER\n""")
    elif op.opcode == OPCODE_ASSIGN:
        opcode_assign(op) # type: ignore
    elif op.opcode == OPCODE_ASSIGNTRUE:
        opcode_assigntrue(op) # type: ignore
    elif op.opcode == OPCODE_ASSIGNFALSE:
        opcode_assignfalse(op) # type: ignore
    elif op.opcode == OPCODE_ASSIGNTYPEDBUILTIN:
        file.write(f"""// OPCODE_ASSIGNTYPEDBUILTIN\n""")
    elif op.opcode == OPCODE_ASSIGNTYPEDNATIVE:
        file.write(f"""// OPCODE_ASSIGNTYPEDNATIVE\n""")
    elif op.opcode == OPCODE_ASSIGNTYPEDSCRIPT:
        file.write(f"""// OPCODE_ASSIGNTYPEDSCRIPT\n""")
    elif op.opcode == OPCODE_CASTTOBUILTIN:
        file.write(f"""// OPCODE_CASTTOBUILTIN\n""")
    elif op.opcode == OPCODE_CASTTONATIVE:
        file.write(f"""// OPCODE_CASTTONATIVE\n""")
    elif op.opcode == OPCODE_CASTTOSCRIPT:
        file.write(f"""// OPCODE_CASTTOSCRIPT\n""")
    elif op.opcode == OPCODE_CONSTRUCT:
        file.write(f"""// OPCODE_CONSTRUCT\n""")
    elif op.opcode == OPCODE_CONSTRUCTARRAY:
        file.write(f"""// OPCODE_CONSTRUCTARRAY\n""")
    elif op.opcode == OPCODE_CONSTRUCTDICTIONARY:
        file.write(f"""// OPCODE_CONSTRUCTDICTIONARY\n""")
    elif op.opcode == OPCODE_CALL:
        opcode_call(op) # type: ignore
    elif op.opcode == OPCODE_CALLRETURN:
        opcode_call(op) # type: ignore
    elif op.opcode == OPCODE_CALLBUILTIN:
        file.write(f"""// OPCODE_CALLBUILTIN\n""")
    elif op.opcode == OPCODE_CALLSELF:
        file.write(f"""// OPCODE_CALLSELF\n""")
    elif op.opcode == OPCODE_CALLSELFBASE:
        opcode_call(op) # type: ignore
    elif op.opcode == OPCODE_YIELD:
        file.write(f"""// OPCODE_YIELD\n""")
    elif op.opcode == OPCODE_YIELDSIGNAL:
        file.write(f"""// OPCODE_YIELDSIGNAL\n""")
    elif op.opcode == OPCODE_YIELDRESUME:
        file.write(f"""// OPCODE_YIELDRESUME\n""")
    elif op.opcode == OPCODE_JUMP:
        opcode_jump(op) # type: ignore
    elif op.opcode == OPCODE_JUMPIF:
        opcode_jumpif(op) # type: ignore
    elif op.opcode == OPCODE_JUMPIFNOT:
        opcode_jumpifnot(op) # type: ignore
    elif op.opcode == OPCODE_JUMPTODEFAULTARGUMENT:
        file.write(f"""// OPCODE_JUMPTODEFAULTARGUMENT\n""")
    elif op.opcode == OPCODE_RETURN:
        opcode_return(op) # type: ignore
    elif op.opcode == OPCODE_ITERATEBEGIN:
        file.write(f"""// OPCODE_ITERATEBEGIN\n""")
    elif op.opcode == OPCODE_ITERATE:
        file.write(f"""// OPCODE_ITERATE\n""")
    elif op.opcode == OPCODE_ASSERT:
        file.write(f"""// OPCODE_ASSERT\n""")
    elif op.opcode == OPCODE_BREAKPOINT:
        file.write(f"""// OPCODE_BREAKPOINT\n""")
    elif op.opcode == OPCODE_LINE:
        opcode_line(op) # type: ignore
    elif op.opcode == OPCODE_END:
        file.write(f"""// OPCODE_END\n""")
    elif op.opcode == OPCODE_DESTROY:
        opcode_destroy(op) # type: ignore
    elif op.opcode == OPCODE_INITIALIZE:
        opcode_initialize(op) # type: ignore
    elif op.opcode == OPCODE_REAL_RETURN:
        opcode_real_return(op) # type: ignore
    else:
        file.write(f"// {str(op)};\n")

    
