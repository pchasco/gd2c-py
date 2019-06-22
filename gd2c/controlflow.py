from __future__ import annotations
from typing import List, Optional, Union, Iterable, Tuple, Set, Dict, FrozenSet
from gd2c.bytecode import GDScriptAddressMode, GDScriptAddress, GDScriptOp, JumpGDScriptOp, JumpIfGDScriptOp, JumpIfNotGDScriptOp, JumpToDefaultArgumentGDScriptOp, ReturnGDScriptOp, EndGDScriptOp
from gd2c.gdscriptclass import GDScriptFunction

class BasicBlock:
    def __init__(self):
        self._ops: List[GDScriptOp] = []
        self._locked = False
        self._defs: FrozenSet[int] = frozenset()
        self._uses: FrozenSet[int] = frozenset()

    @property
    def ops(self) -> Iterable[GDScriptOp]:
        return list(self._ops)

    @property
    def last_op(self) -> Optional[GDScriptOp]:
        if any(self._ops):
            return self._ops[-1]
        
        return None

    @property
    def defs(self) -> FrozenSet[int]:
        return self._defs

    @defs.setter
    def defs(self, value: Iterable[int]):
        self._defs = frozenset(value)
    
    @property
    def uses(self) -> FrozenSet[int]:
        return self._uses

    @uses.setter
    def uses(self, value: Iterable[int]):
        self._uses = frozenset(value)

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

    def update_def_use(self):
        defs = set()
        uses = set()

        for op in self._ops:
            uses.update(op.reads - defs)
            defs.update(op.writes)

        self._defs = frozenset(defs)
        self._uses = frozenset(uses)

class ControlFlowGraphNode:
    def __init__(self, label: str, block: BasicBlock):
        self._block = block
        self._label = label
        self._ins: FrozenSet[int] = frozenset([])
        self._outs: FrozenSet[int] = frozenset([])

    @property
    def block(self):
        return self._block

    @property
    def label(self):
        return self._label

    @property
    def ins(self) -> FrozenSet[int]:
        return self._ins
    
    @ins.setter
    def ins(self, value: Iterable[int]):
        self._ins = frozenset(value)

    @property
    def outs(self) -> FrozenSet[int]:
        return self._outs
    
    @outs.setter
    def outs(self, value: Iterable[int]):
        self._outs = frozenset(value)  

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

    def preds(self, node: ControlFlowGraphNode) -> Set[ControlFlowGraphNode]:
        return set(map(lambda e: e.source, filter(lambda e: e.dest == node, self._edges.values())))

    def succs(self, node: ControlFlowGraphNode) -> Set[ControlFlowGraphNode]:
        return set(map(lambda e: e.dest, filter(lambda e: e.source == node, self._edges.values())))

    def back_edges(self, node: ControlFlowGraphNode) -> Set[Edge]:
        return set(filter(lambda e: e.source == node, list(self._edges.values())))

    def forward_edges(self, node: ControlFlowGraphNode) -> Set[Edge]:
        return set(filter(lambda e: e.dest == node, list(self._edges.values())))

    def remove_edge(self, edge: Edge):
        del self._edges[(edge.source, edge.dest)]

    def remove_node(self, node: ControlFlowGraphNode):
        if any(self.preds(node)) or any(self.succs(node)):
            raise Exception("Cannot delete node with edges. Remove and resolve edges first.")

        del self._nodes[node.label]

    @property
    def entry_node(self) -> Optional[ControlFlowGraphNode]:
        return self._entry_node
    
    @property
    def exit_node(self) -> Optional[ControlFlowGraphNode]:
        return self._exit_node

    def nodes(self) -> Iterable[ControlFlowGraphNode]:
        return self._nodes.values()

    def live_variable_analysis(self):
        class def_use:
            def __init__(self):
                self.ins = set()
                self.outs = set()
                self.defs = set()
                self.uses = set()

        defuses = {}
        for node in self.nodes():
            # update def-use
            # make exception for entry node because it has been
            # populated with all members, constants and parameters.
            # update_def_use will clear them as there is no code 
            # in the entry node
            # TODO: create phi instructions or something to create defs for constants
            if not node is self.entry_node:
                node.block.update_def_use()

            du = def_use()
            du.defs = node.block.defs
            du.ins = set(node.block.uses)
            defuses[node] = du
        
        worklist: List[ControlFlowGraphNode] = [self.exit_node]
        done = True
        
        # propagate live variables througout the CFG. May take
        # multiple iterations. We're done when we complete an
        # iteration that makes no changes
        while True:
            done = True
            visited: Set[ControlFlowGraphNode] = set()

            while any(worklist):
                node = worklist.pop()
                assert node
                if node in visited:
                    continue

                du = defuses[node]
                pre_ins_count = len(du.ins)
                pre_outs_count = len(du.outs)

                for succ in self.succs(node):
                    du.outs.update(defuses[succ].ins)
                du.ins.update(du.outs - du.defs)

                # see if we made any changes. We only need to check counts on
                # sets because liveness analysis only ever grows the sets.
                if len(du.outs) > pre_outs_count or len(du.ins) > pre_ins_count:
                    done = False

                visited.add(node)
                worklist.extend(self.preds(node))

            if done:
                break

        # update cfg nodes with results of liveness analysis
        for node in self.nodes():
            du = defuses[node]
            node.ins = du.ins
            node.outs = du.outs

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
            print(f"   Defs: {', '.join(map(lambda a: str(a), node.block.defs))}")
            print(f"   Uses: {', '.join(map(lambda a: str(a), node.block.uses))}")
            print(f"    Ins: {', '.join(map(lambda a: str(a), node.ins))}")
            print(f"   Outs: {', '.join(map(lambda a: str(a), node.outs))}")
            print(f"  Ops:")
            for op in node.block.ops:
                print(f"    {str(op)}")

            print("")
        
        print("")


def build_control_flow_graph(func: GDScriptFunction):
    nodes: Dict[int, ControlFlowGraphNode] = {}
    
    entry_node = ControlFlowGraphNode('__entry', BasicBlock())
    #TODO: Also need to include class members, constants, and global constants as in vars
    #      We can add only those that are used anywhere in the function
    defs = set(map(lambda c: GDScriptAddress.calc_address(GDScriptAddressMode.LocalConstant, c.index), func.constants()))
    # Include function parameters. GDScript uses the StackVariable addressing mode to address them.
    defs.update(map(lambda p: GDScriptAddress.calc_address(GDScriptAddressMode.StackVariable, p.index), func.parameters()))
    entry_node.block.defs = defs
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

        if isinstance(op, (EndGDScriptOp, ReturnGDScriptOp, JumpGDScriptOp, JumpIfGDScriptOp, JumpIfNotGDScriptOp)):
            new_block_flag = True

    for node in nodes.values():
        node.block.lock()            

    # create edges
    cfg = ControlFlowGraph()
    cfg.add_edge(Edge(entry_node, nodes[0]))
    for node in nodes.values():
        cfg.add_node(node)
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

    # Prune non-reachable nodes
    remove_nodes = []
    for node in cfg.nodes():
        if node is not cfg.entry_node and not any(cfg.preds(node)):
            edges = cfg.back_edges(node)
            for edge in edges:
                cfg.remove_edge(edge)
            remove_nodes.append(node)

    for node in remove_nodes:
        cfg.remove_node(node)

    return cfg







                

  