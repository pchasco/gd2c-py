from __future__ import annotations
from typing import TYPE_CHECKING, Dict
from gd2c.targets._gdnative.variable import *

if TYPE_CHECKING:
    from gd2c.targets.gdnative import GDNativeCodeGen, FunctionContext

def update_mutated_parameter_flags(codegen: GDNativeCodeGen):
    from gd2c.analysis import mark_assigned_parameters
    mark_assigned_parameters(codegen.project)

def map_variables_transformation(codegen: GDNativeCodeGen):
    def transform_func(func_context: FunctionContext):
        variables: Dict[int, AbstractVariable] = {}

        def visit(node):
            for op in node.block.ops:
                for addr in op.reads | op.writes:
                    var = variables.get(addr, None)
                    if not var:
                        var = GDNativeLocalVariable(func_context, addr)
                        variables[addr] = var

                    node.map_address_to_variable(addr, var)

        assert func_context.func.cfg
        func_context.func.cfg.live_variable_analysis()
        func_context.func.cfg.visit_nodes(visit)

    def transform_class(cls, depth):
        class_context = codegen.class_contexts[cls.type_id]
        for func_context in class_context.function_contexts.values():
            transform_func(func_context)

    codegen.project.visit_classes_in_dependency_order(transform_class)     

def insert_initializers_transformation(codegen: GDNativeCodeGen):
    from gd2c.bytecode import InitializeGDScriptOp

    def transform_func(func_context: FunctionContext):
        assert func_context.func.cfg
        assert func_context.func.cfg.entry_node
        node = func_context.func.cfg.entry_node
        ops = [
            InitializeGDScriptOp(GDScriptAddress.calc_address(ADDRESS_MODE_STACKVARIABLE, i + func_context.func.len_parameters)) 
            for i in range(func_context.func.len_stack_array)
        ]
        node.block.insert_ops_before(node.block.last_op, ops)

    def transform_class(cls, depth):
        class_context = codegen.class_contexts[cls.type_id]
        for func_context in class_context.function_contexts.values():
            transform_func(func_context)

    codegen.project.visit_classes_in_dependency_order(transform_class)    

def insert_destructors_transformation(codegen: GDNativeCodeGen):
    from gd2c.bytecode import DestroyGDScriptOp

    def transform_func(func_context: FunctionContext):
        assert func_context.func.cfg
        assert func_context.func.cfg.exit_node
        node = func_context.func.cfg.exit_node
        for i in range(func_context.func.len_stack_array):
            node.block.insert_ops_before(node.block.last_op, [DestroyGDScriptOp(GDScriptAddress.calc_address(ADDRESS_MODE_STACKVARIABLE, i + func_context.func.len_parameters))])

    def transform_class(cls, depth):
        class_context = codegen.class_contexts[cls.type_id]
        for func_context in class_context.function_contexts.values():
            transform_func(func_context)

    codegen.project.visit_classes_in_dependency_order(transform_class)    

def replace_init_calls_with_noop_transformation(codegen: GDNativeCodeGen):
    from gd2c.bytecode import CallGDScriptOp, CallSelfBaseGDScriptOp, NoopGDScriptOp

    def transform_func(func_context: FunctionContext):
        def visit(node):
            remove: List[GDScriptOp] = []
            for op in node.block.ops:
                name = ""
                if isinstance(op, CallGDScriptOp):
                    name = func_context.global_names[op.name_index]
                elif isinstance(op, CallSelfBaseGDScriptOp):
                    name = func_context.func.global_names[op.name_index]
                
                if name == "_init":
                    remove.append(op)

            for op in remove:
                node.block.remove_op(op)

        assert func_context.func
        assert func_context.func.cfg
        func_context.func.cfg.visit_nodes(visit)

    def transform_class(cls, depth):
        class_context = codegen.class_contexts[cls.type_id]
        for func_context in class_context.function_contexts.values():
            transform_func(func_context)

    codegen.project.visit_classes_in_dependency_order(transform_class)       
