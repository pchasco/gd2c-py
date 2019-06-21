from __future__ import annotations
from typing import List, Optional, Union, Iterable, Tuple, Set, Dict
from gd2c.bytecode import GDScriptOp, JumpGDScriptOp, JumpIfGDScriptOp, JumpIfNotGDScriptOp, JumpToDefaultArgumentGDScriptOp, ReturnGDScriptOp, EndGDScriptOp
from gd2c.gdscriptclass import GDScriptFunction

class BasicBlock:
    def __init__(self):
        self._ops: List[GDScriptOp] = []
        self._locked = False

    @property
    def ops(self) -> Iterable[GDScriptOp]:
        return list(self._ops)

    @property
    def last_op(self) -> Optional[GDScriptOp]:
        if any(self._ops):
            return self._ops[-1]
        
        return None

    @property
    def locked(self):
        """Indicates that no changes that could alter control flow may be added"""
        return self._locked

    def lock(self):
        """Lock the BasicBlock so that instructions that may alter control flow cannot be added"""
        self._locked = True

    def append_op(self, op: GDScriptOp):
        """Appends operation to the end of the block. If the block is locked, inserting
        a branch instruction will raise an error."""

        if self._locked and isinstance(op, (JumpGDScriptOp, JumpIfGDScriptOp, JumpIfNotGDScriptOp, ReturnGDScriptOp)):
            raise Exception("Cannot insert instruction that would alter control flow")

        self._ops.append(op)
    
    def insert_ops_before(self, insert_before: Union[GDScriptOp], ops: Iterable[GDScriptOp]):
        """Insert a sequence of ops into the block before GDScriptOp insert_before.

        Attempting to insert a branch instruction will raise an exception if the block is locked. 
        If a branch operation is to be inserted, you must split the block and insert new 
        nodes into the control flow graph.

        Args:
        insert_before (GDScriptOp): Existing op to insert new ops before.
        ops (Iterable[GDScriptOp]): Sequence of ops to insert in order.
        """
        index = self._ops.index(insert_before)
        for op in ops:
            if self._locked and isinstance(op, (JumpGDScriptOp, JumpIfGDScriptOp, JumpIfNotGDScriptOp, ReturnGDScriptOp)):
                raise Exception("Cannot insert instruction that would alter control flow")
            self._ops.insert(index, op)
            index += 1

    def replace_branch_address(self, old_addr: int, new_addr: int):
        """Change any instance of old_addr in a branch to new_addr"""
        for op in self._ops:
            if self._locked and isinstance(op, (JumpGDScriptOp, JumpIfGDScriptOp, JumpIfNotGDScriptOp)):
                if op.fallthrough == old_addr:
                    op.fallthrough = new_addr
                if op.branch == old_addr:
                    op.branch = new_addr

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
        self._nodes: Dict[str, ControlFlowGraphNode] = {}
        self._edges: Dict[Tuple[ControlFlowGraphNode, ControlFlowGraphNode], Edge] = {}
        self._entry_node: Optional[ControlFlowGraphNode] = None
        self._exit_node: Optional[ControlFlowGraphNode] = None

    def add_edge(self, edge: Edge):
        if (edge.source, edge.dest) in self._edges:
            return

        self._edges[(edge.source, edge.dest)] = edge        

    def add_node(self, node: ControlFlowGraphNode):
        self._nodes[node.label] = node

    def find_edge(self, source: ControlFlowGraphNode, dest: ControlFlowGraphNode) -> Optional[Edge]:
        return self._edges.get((source, dest), None)

    def find_source_edges(self, source: Union[ControlFlowGraphNode, BasicBlock]) -> Iterable[Edge]:
        if isinstance(source, ControlFlowGraphNode):
            for edge in self._edges.values():
                if edge.source == source:
                    yield edge
        elif isinstance(source, BasicBlock):
            for edge in self._edges.values():
                if edge.source.block == source:
                    yield edge
        else:
            raise "source must be ControlFlowGraphNode or BasicBlock"

    def find_dest_edges(self, dest: Union[ControlFlowGraphNode, BasicBlock]) -> Iterable[Edge]:
        if isinstance(dest, ControlFlowGraphNode):
            for edge in self._edges.values():
                if edge.dest == dest:
                    yield edge
        elif isinstance(dest, BasicBlock):
            for edge in self._edges.values():
                if edge.dest.block == dest:
                    yield edge
        else:
            raise "dest must be ControlFlowGraphNode or BasicBlock"

    def preds(self, node: ControlFlowGraphNode) -> Set[ControlFlowGraphNode]:
        return set(map(lambda e: e.source, filter(lambda e: e.dest == node, list(self._edges.values()))))

    def succs(self, node: ControlFlowGraphNode) -> Set[ControlFlowGraphNode]:
        return set(map(lambda e: e.dest, filter(lambda e: e.source == node, list(self._edges.values()))))

    @property
    def entry_node(self) -> Optional[ControlFlowGraphNode]:
        return self._entry_node
    
    @property
    def exit_node(self) -> Optional[ControlFlowGraphNode]:
        return self._exit_node

    def nodes(self) -> Iterable[ControlFlowGraphNode]:
        return self._nodes.values()

    def pretty_print(self):
        worklist = [self._entry_node]
        visited = set()
        while any(worklist):
            node = worklist.pop()
            if node in visited:
                continue

            visited.add(node)

            if ('0' in self._nodes) and isinstance(node.block.last_op, (JumpGDScriptOp, JumpIfNotGDScriptOp)):
                # Here we assume nodes are labeled with the address of the block that created them
                worklist.append(self._nodes[str(node.block.last_op.branch)])
                worklist.append(self._nodes[str(node.block.last_op.fallthrough)])
            elif ('0' in self._nodes) and isinstance(node.block.last_op, JumpIfGDScriptOp):
                # Here we assume nodes are labeled with the address of the block that created them
                worklist.append(self._nodes[str(node.block.last_op.fallthrough)])                
                worklist.append(self._nodes[str(node.block.last_op.branch)])
            else:
                worklist.extend(self.succs(node))

            print(f"  Block: {node.label}")
            print(f"  Preds: {', '.join(map(lambda n: n.label, self.preds(node)))}")
            print(f"  Succs: {', '.join(map(lambda n: n.label, self.succs(node)))}")
            print(f"  Ops:")
            for op in node.block.ops:
                print(f"    {str(op)}")

            print("")
        
        print("")


def build_control_flow_graph(func: GDScriptFunction):
    nodes: Dict[int, ControlFlowGraphNode] = {}
    entry_node = ControlFlowGraphNode('__entry', BasicBlock())
    entry_node.block.ops.append(JumpGDScriptOp(0))
    exit_node = ControlFlowGraphNode('__exit', BasicBlock())

    # Identify jump targets which always begin new blocks

    jump_targets: Set[int] = set()
    for ip, op in func.ops():
        if isinstance(op, (JumpGDScriptOp, JumpIfGDScriptOp, JumpIfNotGDScriptOp)):
            jump_targets = jump_targets | set((op.branch, op.fallthrough))

    # find blocks and create nodes

    block: Block = None # type: ignore
    new_block_flag = True
    for ip, op in func.ops():
        if new_block_flag or (ip in jump_targets):
            if block:
                # For simplicity we want all blocks to end in a branch instruction
                # to the beginning of the next block or a return
                if not isinstance(block.last_op, (ReturnGDScriptOp, JumpGDScriptOp, JumpIfGDScriptOp, JumpIfNotGDScriptOp)):
                    block.append_op(JumpGDScriptOp(ip))

            block = BasicBlock()
            node = ControlFlowGraphNode(str(ip), block)
            nodes[ip] = node
            new_block_flag = False

        block.append_op(op)

        if isinstance(op, (ReturnGDScriptOp, JumpGDScriptOp, JumpIfGDScriptOp, JumpIfNotGDScriptOp)):
            new_block_flag = True

    for node in nodes.values():
        node.block.lock()            

    # create edges
    cfg = ControlFlowGraph()
    cfg.add_edge(Edge(entry_node, nodes[0]))
    for node in nodes.values():
        last_op = node.block.last_op
        if isinstance(last_op, (JumpGDScriptOp, JumpIfGDScriptOp, JumpIfNotGDScriptOp)):
            cfg.add_edge(Edge(node, nodes[last_op.branch]))
            cfg.add_edge(Edge(node, nodes[last_op.fallthrough]))
        elif isinstance(last_op, (ReturnGDScriptOp, EndGDScriptOp)):
            cfg.add_edge(Edge(node, exit_node))

    cfg._entry_node = entry_node
    cfg.add_node(entry_node)
    cfg._exit_node = exit_node
    cfg.add_node(exit_node)

    return cfg







                

  