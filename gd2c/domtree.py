from __future__ import annotations
from typing import Set, List, Dict, Optional, Iterable, Tuple, cast
from gd2c.controlflow import BasicBlock, ControlFlowGraph, ControlFlowGraphNode

class DomTreeNode:
    def __init__(self, block: BasicBlock, dfs: int):
        self._block = block
        self._children: Set['DomTreeNode'] = set()
        self._parent: Optional['DomTreeNode'] = self
        self.dfs_number = dfs

    def add_child(self, node: 'DomTreeNode'):
        node._parent = self
        if node is not self:
            self._children.add(node)
    
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

    def pretty_print(self):
        def iterate(node, depth):
            print(f"{''.ljust(depth)}{node.dfs_number}")
            for child in node.children():
                if child is not node:
                    iterate(child, depth + 1)
                else:
                    print(f"{''.ljust(depth + 1)}{child.dfs_number}")

        iterate(self._root, 0)


class Temp:
    def __init__(self, node: ControlFlowGraphNode, dfs: int):
        self.node = node
        self.dfs = dfs
        self.dom = -1
        self.flag = -1


def _assign_dfs_numbers(cfg: ControlFlowGraph) -> Dict[ControlFlowGraphNode, Temp]:
    nodes: Dict[ControlFlowGraphNode, Temp] = {}
    visited: Set[ControlFlowGraphNode] = set()
    stack = [cfg.entry_node]
    dfs = 0
    while any(stack):
        cfg_node = cast(ControlFlowGraphNode, stack.pop())
        if cfg_node in visited:
            continue
        
        visited.add(cfg_node)
        nodes[cfg_node] = Temp(cfg_node, dfs)
        dfs += 1
        stack.extend(cfg.succs(cfg_node))

    return nodes

def _mark_dominators(cfg: ControlFlowGraph, reachable: Dict[ControlFlowGraphNode, Temp], node: ControlFlowGraphNode):
    assert cfg.entry_node
    
    visited: Set[ControlFlowGraphNode] = set()
    stack = [cfg.entry_node]
    dfs = reachable[node].dfs

    # Test which nodes are reachable without passing through node
    while any(stack):
        n = cast(ControlFlowGraphNode, stack.pop())
        if (n is node) or (n in visited):
            continue
        visited.add(n)
        reachable[n].flag = dfs
        stack.extend(cfg.succs(n))

    # Each node that is not reachable, set node as its dominator
    for n, t in reachable.items():
        if t.flag != dfs and t.dom < 0:
            reachable[n].dom = dfs

def _make_tree(reachable: Dict[ControlFlowGraphNode, Temp]) -> DomTree:
    nodes = dict(map(lambda n: (n.node, DomTreeNode(n.node.block, n.dfs)), reachable.values()))
    dfs = dict(map(lambda nn: (nn.dfs_number, nn), nodes.values()))

    for nnn in reachable.values():
        child = nodes[nnn.node]
        parent = dfs[nnn.dom]
        parent.add_child(child)

    return DomTree(dfs[0], nodes.values())

def build_domtree_naive(cfg: ControlFlowGraph) -> DomTree:
    dfs_numbers = _assign_dfs_numbers(cfg)    
    for t in sorted(dfs_numbers.values(), key=lambda n: n.dfs):
        _mark_dominators(cfg, dfs_numbers, t.node)
    return _make_tree(dfs_numbers)


