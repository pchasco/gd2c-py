from __future__ import annotations
from typing import List
from gd2c.project import Project
from gd2c.gdscriptclass import GDScriptFunction
from gd2c.controlflow import build_control_flow_graph, Block
from gd2c.bytecode import OPCODE_BREAKPOINT, OPCODE_LINE, GDScriptOp
 
def remove_debug_ops(func: GDScriptFunction):
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
