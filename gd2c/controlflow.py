from __future__ import annotations
from typing import List, Optional, Union, Iterable, Tuple, Set
from gd2c.bytecode import GDScriptOp, JumpGDScriptOp, JumpIfGDScriptOp, JumpIfNotGDScriptOp, JumpToDefaultArgumentGDScriptOp, ReturnGDScriptOp, EndGDScriptOp
from gd2c.gdscriptclass import GDScriptFunction

class BasicBlock:
    def __init__(self):
        self.ops: List[GDScriptOp] = []

    def __hash__(self):
        return hash(label)

    def __eq__(self, other):
        return other and self._label == other._label

class ControlFlowGraphNode:
    def __init__(self, label: str, block: BasicBlock):
        self._block = block
        self._label = label

    @property
    def block(self):
        return self._block

    @property
    def label(self):
        return self._label

class Edge:
    def __init__(self, source: ControlFlowGraphNode, dest: ControlFlowGraphNode):
        self._source = source
        self._dest = dest

    @property
    def source(self) -> ControlFlowGraphNode:
        return self._source

    @property
    def dest(self) -> ControlFlowGraphNode:
        return self._dest

    def __hash__(self):
        return hash((self._source, self._dest))

    def __eq__(self, other) -> bool:
        return other and self.source == other.source and self.dest == other.dest

class ControlFlowGraph:
    def __init__(self):
        self._nodes: Set[ControlFlowGraphNode] = set()
        self._edges: Dict[Tuple[ControlFlowGraphNode, ControlFlowGraphNode], Edge] = {}
        self._entry_node: Optional[ControlFlowGraphNode] = None
        self._exit_node: Optional[ControlFlowGraphNode] = None

    def add_edge(self, edge: Edge):
        if edge in self._edges:
            return

        self._edges[(edge.source, edge.dest)] = edge

    def find_edge(self, source: ControlFlowGraphNode, dest: ControlFlowGraphNode) -> Optional[ControlFlowGraphNode]:
        return self._edges.get((source, dest), None)

    def find_source_edges(self, source: Union[ControlFlowGraphNode, BasicBlock]) -> Iterable[ControlFlowGraphNode]:
        if isinstance(source, ControlFlowGraphNode):
            for edge in self._edges:
                if edge.source == source:
                    yield edge
        elif isinstance(source, BasicBlock):
            for edge in self._edges:
                if edge.source.block == source:
                    yield edge
        else:
            raise "source must be ControlFlowGraphNode or BasicBlock"

    def find_dest_edges(self, dest: Union[ControlFlowGraphNode, BasicBlock]) -> Iterable[ControlFlowGraphNode]:
        if isinstance(dest, ControlFlowGraphNode):
            for edge in self._edges:
                if edge.dest == dest:
                    yield edge
        elif isinstance(dest, BasicBlock):
            for edge in self._edges:
                if edge.dest.block == dest:
                    yield edge
        else:
            raise "dest must be ControlFlowGraphNode or BasicBlock"


def build_control_flow_graph(func: GDScriptFunction):
    cfg = ControlFlowGraph()

    nodes: Set[ControlFlowGraphNode] = set()
    entry_node = ControlFlowGraphNode('__entry', BasicBlock())
    exit_node = ControlFlowGraphNode('__exit', BasicBlock())

    jump_targets: Set[int] = set()
    for ip, op in func.ops():
        if isinstance(op, (JumpGDScriptOp, JumpIfGDScriptOp, JumpIfNotGDScriptOp)):
            jump_targets = jump_targets | set((op.branch, op.fallthrough))

    block: Block = None # type: ignore
    new_block_flag = True
    for ip, op in func.ops():
        if new_block_flag or ip in jump_targets:
            block = BasicBlock()
            node = ControlFlowGraphNode(str(ip), block)
            nodes.add(node)
            return_flag = False

        block.add_op(op)

        if isinstance(op, (ReturnGDScriptOp,)):
            new_block_flag = True




                

  