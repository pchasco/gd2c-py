from __future__ import annotations
from typing import List, Optional, Union, Iterable, Tuple, Set, Dict, FrozenSet, Any, Callable
from gd2c.bytecode import GDScriptOp, DefineGDScriptOp, ParameterGDScriptOp, JumpGDScriptOp, JumpIfGDScriptOp, JumpIfNotGDScriptOp, JumpToDefaultArgumentGDScriptOp, ReturnGDScriptOp, EndGDScriptOp, RealReturnGDScriptOp
from gd2c.address import *
from gd2c.gdscriptclass import GDScriptFunction
from gd2c.variant import VariantType

EXIT_NODE_ADDRESS = 2_147_483_646

BLOCK_TYPE_NORMAL = 0
BLOCK_TYPE_BRANCH = 1
BLOCK_TYPE_RETURN = 2
BLOCK_TYPE_EXIT = 3

class Value:
    # identifies the source address of the value
    name: int
    # identifies the unique definition of the value
    version: int
    # type of value
    vtype: VariantType

    def __init__(self, name: int, version: int):
        self.name = name
        self.version = version

    def __str__(self):
        return f"{self.name}_{self.version}"

class Block:
    def __init__(self, label: str):
        self.edges: List['Edge'] = []
        self.control_value: Union[None, Value] = None
        self.control_address: Union[None, int] = None
        self.block_type: int = BLOCK_TYPE_NORMAL
        self._label = label
        self._ops: List[GDScriptOp] = []
        self._locked = False
        self._defs: FrozenSet[int] = frozenset()
        self._uses: FrozenSet[int] = frozenset()
        self._ins: FrozenSet[int] = frozenset([])
        self._outs: FrozenSet[int] = frozenset([])

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

    @property
    def ops(self) -> Iterable[GDScriptOp]:
        return list(self._ops)

    @property
    def last_op(self) -> Optional[GDScriptOp]:
        if any(self._ops):
            return self._ops[-1]
        
        return None

    @property
    def first_op(self) -> Optional[GDScriptOp]:
        if any(self._ops):
            return self._ops[0]

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
        """Lock the Block so that instructions that may alter control flow cannot be added"""
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

    def replace_op(self, existing_op: GDScriptOp, replacement_op: GDScriptOp):
        """Replaces the specified op with a new op"""
        self.insert_ops_before(existing_op, [replacement_op])

    def remove_op(self, existing_op: GDScriptOp):
        """Removes the specified op"""
        self._ops.remove(existing_op)

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

        # defs are any variables that are written to within block
        # uses are any variables that are read prior to being written to within the block
        for op in self._ops:
            uses.update(op.reads - defs)
            defs.update(op.writes)

        self._defs = frozenset(defs)
        self._uses = frozenset(uses)

class Edge:
    def __init__(self, source: Block, dest: Block):
        self._source = source
        self._dest = dest

    @property
    def source(self) -> Block:
        return self._source

    @property
    def dest(self) -> Block:
        return self._dest

    def __hash__(self):
        return hash((self._source, self._dest))

    def __eq__(self, other) -> bool:
        return other and self.source == other.source and self.dest == other.dest

class ControlFlowGraph:
    def __init__(self):
        self._nodes: Dict[str, Block] = {}
        self._edges: Dict[Tuple[Block, Block], Edge] = {}
        self._entry_node: Optional[Block] = None
        self._exit_node: Optional[Block] = None
        self._value_version = 0

    def new_value(self, address: int, vtype: VariantType) -> Value:
        v = Value(address, self._value_version)
        v.vtype = vtype
        self._value_version += 1
        return v

    def add_edge(self, edge: Edge):
        if (edge.source, edge.dest) in self._edges:
            return

        self._edges[(edge.source, edge.dest)] = edge        

    def add_node(self, node: Block):
        self._nodes[node.label] = node

    def find_edge(self, source: Block, dest: Block) -> Optional[Edge]:
        return self._edges.get((source, dest), None)

    def preds(self, node: Block) -> Set[Block]:
        return set(map(lambda e: e.source, filter(lambda e: e.dest == node, self._edges.values())))

    def succs(self, node: Block) -> Set[Block]:
        return set(map(lambda e: e.dest, filter(lambda e: e.source == node, self._edges.values())))

    def back_edges(self, node: Block) -> Set[Edge]:
        return set(filter(lambda e: e.source == node, list(self._edges.values())))

    def forward_edges(self, node: Block) -> Set[Edge]:
        return set(filter(lambda e: e.dest == node, list(self._edges.values())))

    def remove_edge(self, edge: Edge):
        del self._edges[(edge.source, edge.dest)]

    def remove_node(self, node: Block):
        if any(self.preds(node)) or any(self.succs(node)):
            raise Exception("Cannot delete node with edges. Remove and resolve edges first.")

        del self._nodes[node.label]

    @property
    def entry_node(self) -> Optional[Block]:
        return self._entry_node
    @entry_node.setter
    def entry_node(self, value: Block):
        self._entry_node = value
    
    @property
    def exit_node(self) -> Optional[Block]:
        return self._exit_node
    @exit_node.setter
    def exit_node(self, value: Block):
        self._exit_node = value

    def nodes(self) -> Iterable[Block]:
        return self._nodes.values()

    def node(self, label: str) -> Optional[Block]:
        return self._nodes.get(label, None)
        
    def visit_nodes(self, visitor: Callable[[Block], None]):
        assert self.entry_node

        worklist: List[Block] = [self.entry_node]
        visited: Set[Block] = set([])
        while any(worklist):
            node = worklist.pop()
            if node in visited:
                continue
                
            visitor(node)

            visited.add(node)
            worklist.extend(self.succs(node))


    def live_variable_analysis(self):
        class def_use:
            def __init__(self):
                self.ins = set()
                self.outs = set()
                self.defs = set()
                self.uses = set()

        defuses = {}
        for node in self.nodes():
            node.update_def_use()

            du = def_use()
            du.defs = node.defs
            du.ins = set(node.uses)
            defuses[node] = du
        
        # propagate live variables througout the CFG. May take
        # multiple iterations. We're done when we complete an
        # iteration that makes no changes
        while True:
            worklist: List[ControlFlowGraphNode] = [self.exit_node]
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

    def pretty_print(self, print_def_use: bool = True, print_in_out: bool = True):
        worklist = [self._entry_node]
        visited: Set[Block] = set()
        while any(worklist):
            node = worklist.pop()
            assert node
            if node in visited:
                continue

            visited.add(node)

            if ('0' in self._nodes) and isinstance(node.last_op, (JumpGDScriptOp, JumpIfNotGDScriptOp)):
                # Here we assume nodes are labeled with the address of the block that created them
                worklist.append(self._nodes[str(node.last_op.branch)])
                worklist.append(self._nodes[str(node.last_op.fallthrough)])
            elif ('0' in self._nodes) and isinstance(node.last_op, JumpIfGDScriptOp):
                # Here we assume nodes are labeled with the address of the block that created them
                worklist.append(self._nodes[str(node.last_op.fallthrough)])                
                worklist.append(self._nodes[str(node.last_op.branch)])
            else:
                worklist.extend(self.succs(node))

            succs = [n.dest.label for n in node.edges]

            print(f"+------------------------------------------------")
            print(f"| Block: {node.label} : Type: {['Normal', 'If', 'Return', 'Exit'][node.block_type]}")
            print(f"| Preds: {', '.join(map(lambda n: n.label, self.preds(node)))} : Succs: {', '.join(succs)}")
            print(f"|------------------------------------------------")
            if print_def_use:
                print(f"| Defs: {', '.join(map(lambda a: str(a), node.defs))}")
                print(f"| Uses: {', '.join(map(lambda a: str(a), node.uses))}")
            if print_in_out:
                print(f"| Ins: {', '.join(map(lambda a: str(a), node.ins))}")
                print(f"| Outs: {', '.join(map(lambda a: str(a), node.outs))}")
            if print_def_use or print_in_out:
                print(f"|------------------------------------------------")

            if any(node.ops):
                for op in node.ops:
                    print(f"|    {str(op)}")
            else:
                print(f"|    EMPTY BLOCK")

            print("")
        
        print("")

def build_control_flow_graph(func: GDScriptFunction) -> ControlFlowGraph:
    blocks: Dict[str, Block] = {}
    block_labels: Dict[int, str] = {
        EXIT_NODE_ADDRESS: "_exit"
    }
    block_edges: Dict[Block, List[int]] = {}
    
    # Build entry node.
    entry_node = Block('_entry')
    blocks[entry_node.label] = entry_node
    # insert parameter ops for all parameters. Parameter ops create
    # a definition to satisfy SSA
    parameter_ops = [ParameterGDScriptOp(p) for p in func.parameters()]
    # Insert empty defs for all values referenced that are defined outside
    # the function to satisfy SSA
    parameter_addresses = set([p.address.address for p in func.parameters()])
    define_ops = [DefineGDScriptOp(c.address.address) for c in func.constants()]
    for p in parameter_ops:
        entry_node.append_op(p)
    for dd in define_ops:
        entry_node.append_op(dd)

    # Build exit node
    exit_node = Block(block_labels[EXIT_NODE_ADDRESS])
    exit_node.block_type = BLOCK_TYPE_EXIT
    blocks[exit_node.label] = exit_node
    block_edges[exit_node] = []

    # Identify jump targets which always begin new blocks

    jump_targets: Set[int] = set()
    for ip, op in func.ops():
        if isinstance(op, (JumpGDScriptOp, JumpIfGDScriptOp, JumpIfNotGDScriptOp)):
            jump_targets = jump_targets | set((op.branch, op.fallthrough))

    # find blocks and create nodes

    block: Block = None # type: ignore
    new_block_flag = True
    is_block_closed = False

    for ip, op in func.ops():
        if new_block_flag or (ip in jump_targets):
            if block and not new_block_flag:
                # We need to manually "close" the block by inserting an edge.
                block.block_type = BLOCK_TYPE_NORMAL
                block_edges[block] = [ip]
                jumpop = JumpGDScriptOp(ip)
                block.append_op(op)

            block_labels[ip] = f'_{str(ip)}'
            block = Block(block_labels[ip])
            blocks[block.label] = block
            new_block_flag = False

        if isinstance(op, (EndGDScriptOp, ReturnGDScriptOp)):
            new_block_flag = True
            block.block_type = BLOCK_TYPE_NORMAL
            block_edges[block] = [EXIT_NODE_ADDRESS]
            block.append_op(op)
        elif isinstance(op, JumpIfGDScriptOp):
            new_block_flag = True
            block.block_type = BLOCK_TYPE_BRANCH
            block.control_address = op.condition
            block_edges[block] = [op.branch, op.fallthrough]
            block.append_op(op)
        elif isinstance(op, JumpIfNotGDScriptOp):
            new_block_flag = True
            block.block_type = BLOCK_TYPE_BRANCH
            block.control_address = op.condition
            # For if not we swap the fallthrough and branch to keep things simple by keeping only one type
            # of branch block 
            block_edges[block] = [op.fallthrough, op.branch]
            ifop = JumpIfGDScriptOp(op.fallthrough, op.condition, op.branch)
            block.append_op(ifop)
        elif isinstance(op, JumpGDScriptOp):
            new_block_flag = True
            # Even though this block ends with a jump, we consider it a normal block because
            # the jump is unconditional and doesn't require a control value
            block.block_type = BLOCK_TYPE_NORMAL
            block_edges[block] = [op.branch, op.fallthrough]
            block.append_op(op)
        else:
            block.append_op(op)
            is_block_closed = False

    cfg = ControlFlowGraph()
    cfg._entry_node = entry_node
    cfg._exit_node = exit_node

    # create edges
    for block in blocks.values():
        cfg.add_node(block)
        if block is entry_node:
            block.edges = [Edge(block, blocks[block_labels[0]])]
        elif block.block_type == BLOCK_TYPE_NORMAL:
            # Normal block has only one edge
            block.edges = [Edge(block, blocks[block_labels[block_edges[block][0]]])]
        elif block.block_type == BLOCK_TYPE_BRANCH:
            # Branch block has two edges, [0] is for control == True, [1] control == False
            block.edges = [
                Edge(block, blocks[block_labels[block_edges[block][0]]]),
                Edge(block, blocks[block_labels[block_edges[block][1]]])]
        elif block.block_type == BLOCK_TYPE_RETURN:
            # Return always links to exit node
            block.edges = [Edge(block, blocks[block_labels[EXIT_NODE_ADDRESS]])]

        for edge in block.edges:
            cfg.add_edge(edge)

    prune(cfg)

    for node in blocks.values():
        node.lock()

    return cfg

def prune(cfg: ControlFlowGraph):
    remove_nodes = []
    for node in cfg.nodes():
        if node is not cfg.entry_node and not any(cfg.preds(node)):
            edges = cfg.back_edges(node)
            for edge in edges:
                cfg.remove_edge(edge)
            remove_nodes.append(node)

    for node in remove_nodes:
        cfg.remove_node(node)









                

  