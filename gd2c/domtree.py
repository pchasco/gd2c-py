from __future__ import annotations
from typing import Set, List, Dict, Optional, Iterable, Tuple, cast, FrozenSet, Union
from gd2c.controlflow import BasicBlock, ControlFlowGraph, ControlFlowGraphNode

class DomTreeNode:
    def __init__(self, block: BasicBlock, dfs: int, label: Optional[str] = None):
        self._block = block
        self._children: Set['DomTreeNode'] = set()
        self._parent: Optional['DomTreeNode'] = self
        self.dfs_number = dfs
        self.label = label or str(dfs)

    def add_child(self, node: 'DomTreeNode'):
        node._parent = self
        if node is not self:
            self._children.add(node)
    
    def remove_child(self, child: 'DomTreeNode'):
        self._children.remove(child)

    def children(self) -> Iterable['DomTreeNode']:
        return self._children

    @property
    def block(self) -> BasicBlock:
        return self._block

class DomTree:
    def __init__(self, cfg: ControlFlowGraph, root: DomTreeNode, nodes: Iterable[DomTreeNode]):
        self._root = root
        self._nodes: Dict[BasicBlock, DomTreeNode] = dict(map(lambda n: (n._block, n), nodes))
        self._frontiers: Dict[BasicBlock, FrozenSet[DomTreeNode]] = {}
        self._cfg = cfg

        # TODO: Not sure about this in the constructor, but domtree not valid without it
        self.calc_dominance_frontiers()

    def nodes(self) -> Iterable[DomTreeNode]:
        return self._nodes.values()

    def node(self, what: Union[str, BasicBlock, DomTreeNode]) -> DomTreeNode:
        if isinstance(what, str):
            c = self._cfg.node(what)
            assert c
            return self._nodes[c.block]
        elif isinstance(what, BasicBlock):
            return self._nodes[what]
        elif isinstance(what, DomTreeNode):
            return self._nodes[what.block]

        raise Exception("what must be str, BasicBlock, or DomTreeNode")        
    
    def frontier(self, what: Union[str, BasicBlock, DomTreeNode]) -> FrozenSet[DomTreeNode]:
        if isinstance(what, str):
            c = self._cfg.node(what)
            assert c
            return self._frontiers[c.block]
        elif isinstance(what, BasicBlock):
            return self._frontiers[what]
        elif isinstance(what, DomTreeNode):
            return self._frontiers[what.block]

        raise Exception("what must be str, BasicBlock, or DomTreeNode")

    @property
    def root(self):
        return self._root

    def pretty_print(self):
        def iterate(node, depth):
            df = self._frontiers[node._block]
            print(f"{''.ljust(depth)}{node.dfs_number} '{node.label}' Frontiers: {', '.join(list(map(lambda it: it.label, self._frontiers[node._block])))}")
            for child in node.children():
                if child is not node:
                    iterate(child, depth + 1)
                else:
                    print(f"{''.ljust(depth + 1)}{child.dfs_number} '{child.label}' Frontiers: {', '.join(list(map(lambda it: it.label, self._frontiers[child._block])))}")

        iterate(self._root, 0)

    def calc_dominance_frontiers(self):
        frontiers: Dict[BasicBlock, Set[ControlFlowGraphNode]] = {}
        for node in self._cfg.nodes():
            frontiers[node.block] = set([])

        for b in self._cfg.nodes():
            preds = self._cfg.preds(b)
            if len(preds) > 1:
                for p in preds:
                    runner = p
                    bdom = self._nodes[b.block]
                    while runner.block != bdom._parent._block:
                        frontiers[runner.block].add(b)
                        runner = self._cfg.node(self._nodes[runner._block]._parent._block)

        self._frontiers = dict(map(lambda k: (k, frozenset(frontiers[k])), frontiers))

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
        if (n is not node) and t.flag != dfs and t.dom < 0:
            reachable[n].dom = dfs

def _make_tree(cfg: ControlFlowGraph, reachable: Dict[ControlFlowGraphNode, Temp]) -> DomTree:
    nodes = dict(map(lambda n: (n.node, DomTreeNode(n.node.block, n.dfs, n.node.label)), reachable.values()))
    dfs = dict(map(lambda nn: (nn.dfs_number, nn), nodes.values()))

    for nnn in reachable.values():
        child = nodes[nnn.node]
        parent = dfs[nnn.dom]
        parent.add_child(child)

    return DomTree(cfg, dfs[0], nodes.values())

def build_domtree_naive(cfg: ControlFlowGraph) -> DomTree:
    dfs_numbers = _assign_dfs_numbers(cfg)  
    for t in sorted(dfs_numbers.values(), key=lambda n: n.dfs, reverse=True):
        _mark_dominators(cfg, dfs_numbers, t.node)
    dfs_numbers[cfg.entry_node].dom = dfs_numbers[cfg.entry_node].dfs # type: ignore
    
    return _make_tree(cfg, dfs_numbers)


