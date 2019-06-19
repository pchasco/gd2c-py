from gd2c.project import Project

project = Project("./example/source")
project.load_classes()
print("\n".join(list(map(lambda x: x.resource_path, project.classes()))))