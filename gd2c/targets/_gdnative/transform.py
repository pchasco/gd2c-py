from __future__ import annotations
from typing import TYPE_CHECKING, Dict
from gd2c.targets._gdnative.variable import *

if TYPE_CHECKING:
    from gdnative import FunctionContext

def map_variables_transformation(func_context: FunctionContext):
    variables: Dict[int, AbstractVariable] = {}

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