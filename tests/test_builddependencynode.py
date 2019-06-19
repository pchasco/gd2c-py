import unittest
from gd2c.project import Project, BuildDependencyNode
from gd2c.gdscriptclass import GDScriptClass

class build_dependency_node(unittest.TestCase):
    def setUp(self):
        self.class0 = GDScriptClass("res://class0", "class0", 0)

    def test_will_set_cls(self):
        n = BuildDependencyNode(self.class0)
        self.assertEquals(n.cls, self.class0)

    def test_will_have_no_children(self):
        n = BuildDependencyNode(self.class0)
        self.assertCountEqual(n.children, [])

class find(unittest.TestCase):
    def setUp(self):
        self.class0 = GDScriptClass("res://class0", "class0", 0)
        self.class1 = GDScriptClass("res://class1", "class1", 1)

    def test_will_find_itself_by_resource_path(self):
        n = BuildDependencyNode(self.class0)
        self.assertIs(n.find(n.cls.resource_path), n)

    def test_will_find_itself_by_name(self):
        n = BuildDependencyNode(self.class0)
        self.assertIs(n.find(n.cls.name), n)

    def test_will_find_itself_by_type_id(self):
        n = BuildDependencyNode(self.class0)
        self.assertIs(n.find(n.cls.type_id), n)

    def test_will_find_child_by_name(self):
        n0 = BuildDependencyNode(self.class0)
        n1 = BuildDependencyNode(self.class1)
        n0.add_child(n1)

        self.assertIs(n0.find(n1.cls.name), n1)

    def test_will_find_child_by_type_id(self):
        n0 = BuildDependencyNode(self.class0)
        n1 = BuildDependencyNode(self.class1)
        n0.add_child(n1)

        self.assertIs(n0.find(n1.cls.type_id), n1)

    def test_will_find_child_by_resource_path(self):
        n0 = BuildDependencyNode(self.class0)
        n1 = BuildDependencyNode(self.class1)
        n0.add_child(n1)

        self.assertIs(n0.find(n1.cls.resource_path), n1)

class add_child(unittest.TestCase):
    def setUp(self):
        self.class0 = GDScriptClass("res://class0", "class0", 0)
        self.class1 = GDScriptClass("res://class1", "class1", 1)

    def test_will_add_child(self):
        n0 = BuildDependencyNode(self.class0)
        n1 = BuildDependencyNode(self.class1)
        n0.add_child(n1)

        self.assertIn(n1, n0.children)

class get_own_child(unittest.TestCase):
    def setUp(self):
        self.class0 = GDScriptClass("res://class0", "class0", 0)
        self.class1 = GDScriptClass("res://class1", "class1", 1)

    def test_will_return_child_if_present_when_given_build_dependency_node(self):
        n0 = BuildDependencyNode(self.class0)
        n1 = BuildDependencyNode(self.class1)
        n0.add_child(n1)

        c = n0.get_own_child(n1)
        self.assertIs(c, n1)

    def test_will_return_child_if_present_when_given_gd_script_class(self):
        n0 = BuildDependencyNode(self.class0)
        n1 = BuildDependencyNode(self.class1)
        n0.add_child(n1)

        c = n0.get_own_child(n1.cls)
        self.assertIs(c, n1)

    def test_will_return_child_if_present_when_given_resource_path(self):
        n0 = BuildDependencyNode(self.class0)
        n1 = BuildDependencyNode(self.class1)
        n0.add_child(n1)

        c = n0.get_own_child(n1.cls.resource_path)
        self.assertIs(c, n1)

    def test_will_return_child_if_present_when_given_class_name(self):
        n0 = BuildDependencyNode(self.class0)
        n1 = BuildDependencyNode(self.class1)
        n0.add_child(n1)

        c = n0.get_own_child(n1.cls.name)
        self.assertIs(c, n1)

    def test_will_return_child_if_present_when_given_type_id(self):
        n0 = BuildDependencyNode(self.class0)
        n1 = BuildDependencyNode(self.class1)
        n0.add_child(n1)

        c = n0.get_own_child(n1.cls.type_id)
        self.assertIs(c, n1)

class find_parent(unittest.TestCase):
    def setUp(self):
        self.class0 = GDScriptClass("res://class0", "class0", 0)
        self.class1 = GDScriptClass("res://class1", "class1", 1)

    def test_will_return_None_when_root(self):
        n0 = BuildDependencyNode(self.class0)
        n1 = BuildDependencyNode(self.class1)
        n0.add_child(n1)

        p = n0.find_parent(n1)

        self.assertIs(p, n0)    

    def test_will_return_parent_when_child(self):
        n0 = BuildDependencyNode(self.class0)
        n1 = BuildDependencyNode(self.class1)
        n0.add_child(n1)

        p = n0.find_parent(n1)

        self.assertIs(p, n0)    

    def test_will_return_parent_when_child_when_given_gd_script_class(self):
        n0 = BuildDependencyNode(self.class0)
        n1 = BuildDependencyNode(self.class1)
        n0.add_child(n1)

        p = n0.find_parent(n1.cls)

        self.assertIs(p, n0)    

    def test_will_return_parent_when_child_when_given_resource_path(self):
        n0 = BuildDependencyNode(self.class0)
        n1 = BuildDependencyNode(self.class1)
        n0.add_child(n1)

        p = n0.find_parent(n1.cls.resource_path)

        self.assertIs(p, n0)    

    def test_will_return_parent_when_child_when_given_class_name(self):
        n0 = BuildDependencyNode(self.class0)
        n1 = BuildDependencyNode(self.class1)
        n0.add_child(n1)

        p = n0.find_parent(n1.cls.name)

        self.assertIs(p, n0)    

    def test_will_return_parent_when_child_when_given_type_id(self):
        n0 = BuildDependencyNode(self.class0)
        n1 = BuildDependencyNode(self.class1)
        n0.add_child(n1)

        p = n0.find_parent(n1.cls.type_id)

        self.assertIs(p, n0)    

class remove_child(unittest.TestCase):
    def setUp(self):
        self.class0 = GDScriptClass("res://class0", "class0", 0)
        self.class1 = GDScriptClass("res://class1", "class1", 1)
        
    def test_will_remove_child(self):
        n0 = BuildDependencyNode(self.class0)
        n1 = BuildDependencyNode(self.class1)
        n0.add_child(n1)
        n0.remove_child(n1)

        self.assertNotIn(n1, n0.children)    

class find_remove(unittest.TestCase):
    def setUp(self):
        self.class0 = GDScriptClass("res://class0", "class0", 0)
        self.class1 = GDScriptClass("res://class1", "class1", 1)
        self.class2 = GDScriptClass("res://class2", "class2", 2)

    def test_will_remove_child_when_child_of_root(self):
        n0 = BuildDependencyNode(self.class0)
        n1 = BuildDependencyNode(self.class1)
        n0.add_child(n1)
        n0.find_remove(n1)

        self.assertNotIn(n1, n0.children)    
        
    def test_will_remove_child_when_child_of_child_of_root(self):
        n0 = BuildDependencyNode(self.class0)
        n1 = BuildDependencyNode(self.class1)
        n2 = BuildDependencyNode(self.class2)
        n1.add_child(n2)
        n0.add_child(n1)
        n0.find_remove(n2)

        self.assertNotIn(n2, n1.children)



    