from gd2c.project import Project

project = Project("./example/source")
project.load_classes()

for cls in project.classes():
    print(f"---------------------------------------------")
    print(f"Class: {cls.name}")
    print(f"---------------------------------------------")
    for func in cls.functions():
        func.pretty_print()
    print("")