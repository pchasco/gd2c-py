from __future__ import annotations
from typing import TYPE_CHECKING, Set
import itertools
from gd2c.domtree import build_domtree_naive
from gd2c.bytecode import ParameterGDScriptOp, PhiGDScriptOp

if TYPE_CHECKING:
    from gd2c.controlflow import ControlFlowGraph, Block
    from gd2c.gdscriptclass import GDScriptFunction
    from gd2c.domtree import DomTree

def to_ssa_form(cfg: ControlFlowGraph, func: GDScriptFunction):
    _insert_phi_ops(cfg, func)
    _rename_variables(cfg)

def _insert_phi_ops(cfg: ControlFlowGraph, func: GDScriptFunction):
    assert cfg.entry_node

    parameter_ops = [ParameterGDScriptOp(p) for p in func.parameters()]

    if cfg.entry_node.first_op:
        cfg.entry_node.insert_ops_before(cfg.entry_node.first_op, parameter_ops)
    else:
        for p in parameter_ops:
            cfg.entry_node.append_op(p)

    cfg.live_variable_analysis()
    dom = build_domtree_naive(cfg)

    defs: Set[int] = set()
    for block in cfg.nodes():
        defs = defs | block.defs
    
    for variable in defs:
        worklist = set([block for block in cfg.nodes() if variable in block.defs])
        has_phi: Set[Block] = set()        
        was_on_worklist = set(worklist)

        while any(worklist):
            block = worklist.pop()
            assert block.first_op
            for d in dom.frontier(block):
                if d not in has_phi:
                    phi = PhiGDScriptOp(variable)
                    if d.first_op:
                        d.insert_ops_before(d.first_op, [phi])
                    else:
                        d.append_op(phi)

                    has_phi.add(d)
                    if d not in was_on_worklist:
                        worklist.add(d)
                        was_on_worklist.add(d)

def _rename_variables(cfg: ControlFlowGraph):
    pass
            
