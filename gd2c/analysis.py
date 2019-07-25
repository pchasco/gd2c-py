from __future__ import annotations
from typing import TYPE_CHECKING, Dict

if TYPE_CHECKING:
    from project import Project
    from gdscriptclass import GDScriptFunction, GDScriptClass

def mark_const_parameters(project: Project) -> None:
    """Analyzes the project and marks function parameters as const in methods 
    where they are not modified, and not passed to functions that may modify
    them.
    """
    def visit_func(func: GDScriptFunction):
        def visit(node):
            for op in node.block.ops:
                for addr in op.reads | op.writes:
                    var = variables.get(addr, None)
                    if not var:
                        var = GDNativeLocalVariable(func_context, addr)
                        variables[addr] = var

                    node.map_address_to_variable(addr, var)

        func_context.cfg.live_variable_analysis()
        func_context.cfg.visit_nodes(visit)

    def visit_class(cls, depth):
        class_context = codegen.class_contexts[cls.type_id]
        for func_context in class_context.function_contexts.values():
            visit_func(func_context)

    project.visit_classes_in_dependency_order(visit_class)  