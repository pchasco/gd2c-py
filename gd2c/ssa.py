from __future__ import annotations
from typing import TYPE_CHECKING, Set, List, Dict
import itertools
from gd2c.domtree import build_domtree_naive, DomTree
from gd2c.bytecode import ParameterGDScriptOp, PhiGDScriptOp, DefineGDScriptOp
from gd2c.controlflow import Value, Block
from gd2c.address import *

if TYPE_CHECKING:
    from gd2c.controlflow import ControlFlowGraph, Block
    from gd2c.gdscriptclass import GDScriptFunction
    from gd2c.domtree import DomTree

def to_ssa_form(func: GDScriptFunction):
    assert func
    assert func.cfg

    func.cfg.live_variable_analysis()

    _insert_phi_ops(func)
    _rename_variables(func)

def _insert_phi_ops(func: GDScriptFunction):
    assert func.cfg
    assert func.cfg.entry_node
    cfg = func.cfg

    # insert parameter ops for all parameters. Parameter ops create
    # a definition to satisfy SSA
    parameter_ops = [ParameterGDScriptOp(p) for p in func.parameters()]

    # Insert empty defs for all values referenced that are defined outside
    # the function to satisfy SSA
    parameter_addresses = set([GDScriptAddress.calc_address(ADDRESS_MODE_STACKVARIABLE, p.index) for p in func.parameters()])
    define_ops = [DefineGDScriptOp(a) for a in cfg.entry_node.ins - parameter_addresses]

    if cfg.entry_node.first_op:
        first_op = cfg.entry_node.first_op
        cfg.entry_node.insert_ops_before(first_op, parameter_ops)
        cfg.entry_node.insert_ops_before(first_op, define_ops)
    else:
        for p in parameter_ops:
            cfg.entry_node.append_op(p)
        for dd in define_ops:
            cfg.entry_node.append_op(dd)

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

def _rename_variables(func: GDScriptFunction):
    assert func
    assert func.cfg
    cfg = func.cfg
    assert cfg.entry_node

    visited: Set[Block] = set()
    stacks: Dict[int, List[int]] = {}
    values: Dict[int, List[Value]] = {}

    dom = build_domtree_naive(cfg)

    def new_value(address: int):
        nonlocal visited
        nonlocal stacks
        nonlocal values

        if address not in values:
            value = Value(address, 0)
            stacks[address] = [0]
            values[address] = [value]
            return value
        else:
            addrvalues = values[address]
            value = Value(address, len(addrvalues))
            stacks[address].append(value.version)
            addrvalues.append(value)
            return value

    def _rename_func_variables(block: Block):
        nonlocal visited
        nonlocal stacks
        nonlocal values
        nonlocal dom
        nonlocal cfg

        if block in visited:
            return

        visited.add(block)

        for op in block.ops:
            if isinstance(op, PhiGDScriptOp):
                value = new_value(op.address)
                op.ssa_dest = value
        
        for op in block.ops:
            for addr in op.reads:
                op.set_rhs_ssa(addr, values[addr][stacks[addr][-1]])
            for addr in op.writes:
                value = new_value(addr)
                op.set_lhs_ssa(addr, value)

        for succ in cfg.succs(block):
            for op in succ.ops:
                if isinstance(op, PhiGDScriptOp):
                    value = values[op.address][stacks[op.address][-1]]
                    op.ssa_values[block.label] = value

        for dn in dom.node(block).children():
            _rename_func_variables(dn.block)

        for op in block.ops:
            for addr in op.writes:
                stacks[addr].pop()


    _rename_func_variables(cfg.entry_node)
