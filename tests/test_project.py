import unittest
from gd2c.project import Project
from gd2c.gdscriptclass import GDScriptClass
from os import path
from pathlib import PurePath

class to_rooted_path(unittest.TestCase):
    def test_will_return_absoulte_path_when_relative_path_is_in_root(self):
        p = Project(path.join(path.sep, "path", "to", "project"))
        assert p.to_rooted_path("file") == PurePath("/path/to/project/file")

    def test_will_return_absolute_path_when_relative_path_is_in_subdirectory(self):
        p = Project(path.join("/", "path", "to", "project"))
        assert p.to_rooted_path("sub/file") == PurePath("/path/to/project/sub/file")

    def test_will_return_absolute_path_when_absolute_path(self):
        p = Project(path.join("/", "path", "to", "project"))
        assert p.to_rooted_path("/path/to/project/file") == PurePath("/path/to/project/file")

    def test_will_return_absolute_path_when_absolute_path_is_in_subdirectory(self):
        p = Project(path.join("/", "path", "to", "project"))
        assert p.to_rooted_path("/path/to/project/sub/file") == PurePath("/path/to/project/sub/file")

class to_resource_path(unittest.TestCase):
    def test_will_return_resource_path_when_relative_file_is_in_project_root(self):
        p = Project(path.join("/", "project"))
        assert p.to_resource_path("file") == "res://file"

    def test_will_return_resource_path_when_absolute_file_is_in_project_root(self):
        p = Project(path.join("/", "project"))
        assert p.to_resource_path("/project/file") == "res://file"

    def test_will_return_resource_path_when_absolute_file_is_in_project_subdir(self):
        p = Project(path.join("/", "project"))
        assert p.to_resource_path("/project/sub/file") == "res://sub/file"

class get_class(unittest.TestCase):
    def setUp(self):
        self.project = Project("/project")
        self.class0 = GDScriptClass("res://class0", "class0", 0)
        self.project.add_class(self.class0)

    def test_will_return_class_when_arg_is_type_id(self):
        self.assertEqual(self.project.get_class(0), self.class0)

    def test_will_return_class_when_arg_is_class_name(self):
        self.assertEqual(self.project.get_class("class0"), self.class0)

    def test_will_return_class_when_arg_is_resource_path(self):
        self.assertEqual(self.project.get_class("res://class0"), self.class0)
    
    def test_will_raise_exception_when_arg_is_not_str_or_int(self):
        with self.assertRaises(Exception) as e:
            self.project.get_class(0.0)

class add_class(unittest.TestCase):
    def setUp(self):
        self.project = Project("/project")
        self.class0 = GDScriptClass("res://class0", "class0", 0)
        self.project.add_class(self.class0)
        self.class1 = GDScriptClass("res://class1", "class1", 1)
        self.project.add_class(self.class1)

    def test_will_raise_exception_when_class_with_name_already_added(self):
        with self.assertRaises(Exception) as e:
            cls = GDScriptClass("res://class9", "class0", 9)
            self.project.add_class(cls)

    def test_will_raise_exception_when_class_with_resource_path_already_added(self):
        with self.assertRaises(Exception) as e:
            cls = GDScriptClass("res://class0", "class9", 9)
            self.project.add_class(cls)

    def test_will_raise_exception_when_class_with_type_id_already_added(self):
        with self.assertRaises(Exception) as e:
            cls = GDScriptClass("res://class9", "class9", 0)
            self.project.add_class(cls)

    def test_will_add_class(self):
        cls = GDScriptClass("res://class9", "class9", 9)
        self.project.add_class(cls)
        self.assertEquals(self.project.get_class(9), cls)

class delete_class(unittest.TestCase):
    def setUp(self):
        self.project = Project("/project")
        self.class0 = GDScriptClass("res://class0", "class0", 0)
        self.project.add_class(self.class0)

    def test_will_delete_class_when_given_type_id(self):
        self.project.remove_class(0)
        with self.assertRaises(Exception) as e:
            self.project.get_class(0)            

    def test_will_delete_class_when_given_name(self):
        self.project.remove_class("class0")
        with self.assertRaises(Exception) as e:
            self.project.get_class(0)            

    def test_will_delete_class_when_given_resource_path(self):
        self.project.remove_class("res://class0")
        with self.assertRaises(Exception) as e:
            self.project.get_class(0)            



    




    
