from __future__ import annotations
from typing import Set, List, Dict, Optional, Iterable
from gd2c.controlflow import BasicBlock, ControlFlowGraph, ControlFlowGraphNode

class DomTreeNode:
    def __init__(self, block: BasicBlock):
        self._block = block
        self._children: Set['DomTreeNode'] = set()
        self._parent: Optional['DomTreeNode'] = self
        self.id = -1

    def add_child(self, node: 'DomTreeNode'):
        self._children.add(node)
        node._parent = self
    
    def remove_child(self, child: 'DomTreeNode'):
        self._children.remove(child)

    def children(self) -> Iterable['DomTreeNode']:
        return self._children

class DomTree:
    def __init__(self, root: DomTreeNode, nodes: Iterable[DomTreeNode]):
        self._root = root
        self._nodes = dict(map(lambda n: (n._block, n), nodes))

    @property
    def root(self):
        return self._root

def build_domtree_naive(cfg: ControlFlowGraph) -> DomTreeNode:

    # First assign dfs numbers
    nodes: List[DomTreeNode] = []
    visited: Set[ControlFlowGraphNode] = set()
    dfs = 0
    stack = [cfg.entry_node]
    while any(stack):
        cfg_node = stack.pop()
        assert cfg_node

        if cfg_node in visited:
            continue
        
        visited.add(cfg_node)

        if not cfg_node.block:
            raise Exception("ControlFlowGraph nodes must have the block property populated")

        dom_node = DomTreeNode(cfg_node.block)
        dom_node.id = dfs
        nodes.append(dom_node)
        dfs += 1

        stack.extend(cfg.succs(cfg_node))

    # find dominators
    dominators: Dict[int, int] = {}
    dominators[0] = 0

    iteration = 0

    for node in nodes:
        _mark_dominators(cfg, nodes, node)

def _find_reachable(cfg: ControlFlowGraph, nodes: Iterable[DomTreeNode], node: DomTreeNode):
    stack = [cfg.entry_node]
    visited: Set[ControlFlowGraphNode] = set()
    while any(stack):
        n = stack.pop()
        assert n

        if n is node or n in visited:
            continue

        visited.add(n)

        stack.extend(cfg.succs(n))

    return visited


