import unittest
from gd2c.controlflow import ControlFlowGraph, ControlFlowGraphNode, Edge, BasicBlock
from gd2c.gdscriptclass import GDScriptClass
from gd2c.domtree import build_domtree_naive


def build_cfg_1():
    """
                      0   
                      |
                      v
              +-----  1  -----+
              |       ^       |
              v       |       |
        +---+ 2 +--+  |       |
        |          |  |       |
        v          v  |       v
        3          4  +-----+ 5  
        |          |          |
        +-->+ 6 +--+          |
              |               |
              +---->  7  <----+
                      |
                      v
                      8  

    """
    nodes = [ControlFlowGraphNode(str(i), BasicBlock()) for i in range(9)]
    cfg = ControlFlowGraph()
    for n in nodes:
        cfg.add_node(n)
    cfg.entry_node = nodes[0]
    cfg.exit_node = nodes[1]
    cfg.add_edge(Edge(nodes[0], nodes[1]))
    cfg.add_edge(Edge(nodes[1], nodes[2]))
    cfg.add_edge(Edge(nodes[2], nodes[3]))
    cfg.add_edge(Edge(nodes[2], nodes[4]))
    cfg.add_edge(Edge(nodes[3], nodes[6]))
    cfg.add_edge(Edge(nodes[4], nodes[6]))
    cfg.add_edge(Edge(nodes[6], nodes[7]))
    cfg.add_edge(Edge(nodes[7], nodes[8]))
    cfg.add_edge(Edge(nodes[1], nodes[5]))
    cfg.add_edge(Edge(nodes[5], nodes[1]))
    cfg.add_edge(Edge(nodes[5], nodes[7]))
    return cfg

class calc_dominance_frontiers(unittest.TestCase):
    def test_will_calculate_dominance_frontiers_for_cfg_1(self):
        cfg = build_cfg_1()
        dom = build_domtree_naive(cfg)
        assert dom.frontier('0') == set([])
        assert dom.frontier('1') == set([cfg.node('1')])
        assert dom.frontier('2') == set([cfg.node('7')])
        assert dom.frontier('3') == set([cfg.node('6')])
        assert dom.frontier('4') == set([cfg.node('6')])
        assert dom.frontier('5') == set([cfg.node('1'), cfg.node('7')])
        assert dom.frontier('6') == set([cfg.node('7')])
        assert dom.frontier('7') == set([])
