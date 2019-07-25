from gd2c.project import Project
from gd2c.domtree import build_domtree_naive

project = Project("./example/source")
project.load_classes()

from gd2c.targets.gdnative import GDNativeCodeGen
codegen = GDNativeCodeGen(project, "./example/out")
codegen.transpile()

def print_stuff():
    from gd2c.controlflow import build_control_flow_graph
    for cls in project.classes():
        print(f"---------------------------------------------")
        print(f"Class: {cls.name}")
        print(f"---------------------------------------------")
        for func in cls.functions():
            print(f"-----------------------------------")
            print(f"Function {func.name}")
            print(f"-----------------------------------")
            func.pretty_print()

            print(f"-----------------------------------")
            print(f"Control Flow Graph {func.name}")
            print(f"-----------------------------------")
            cfg = build_control_flow_graph(func)
            cfg.live_variable_analysis()
            cfg.pretty_print()

            tree = build_domtree_naive(cfg)
            print("-- DOMTREE ---------------------------------")
            tree.pretty_print()

        print("")


