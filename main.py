from gd2c.project import Project

project = Project("./example/source")
project.load_classes()

from gd2c.controlflow import build_control_flow_graph

for cls in project.classes():
    print(f"---------------------------------------------")
    print(f"Class: {cls.name}")
    print(f"---------------------------------------------")
    for func in cls.functions():
        func.pretty_print()
        cfg = build_control_flow_graph(func)
        cfg.pretty_print()
    print("")

