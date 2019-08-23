from gd2c.project import Project
from gd2c.domtree import build_domtree_naive

def print_stuff(print_bytecode, print_cfg, print_domtree):
    from gd2c.controlflow import build_control_flow_graph
    for cls in project.classes():
        print(f"---------------------------------------------")
        print(f"Class: {cls.name}")
        print(f"---------------------------------------------")
        for func in cls.functions():
            cfg = build_control_flow_graph(func)
            cfg.live_variable_analysis()
            tree = build_domtree_naive(cfg)

            print(f"-----------------------------------")
            func.pretty_print(print_bytecode)

            if print_cfg:
                print(f"-----------------------------------")
                cfg.pretty_print()

            if print_domtree:
                print("-- DOMTREE ---------------------------------")
                tree.pretty_print()

        print("\n")

project = Project("./example/source")
#TODO: Not sure if it is useful to have load method on class itself. Should probably just have a
#      project.load() function on the module that returns a project instance
project.load_classes()

from gd2c.targets.gdnative import GDNativeCodeGen
#TODO same here. Should probably just have a factory function at module level
codegen = GDNativeCodeGen(project, "./example/out")
codegen.transpile()
print_stuff(False, False, False)


