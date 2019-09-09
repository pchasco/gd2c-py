from __future__ import annotations
from typing import List
from gd2c.project import load_project, Project
from gd2c.gdscriptclass import GDScriptClass
from gd2c import transform
from gd2c import controlflow
from gd2c import domtree
from gd2c import ssa
from gd2c import analysis

def print_stuff(project, print_cfg, print_domtree):
    for cls in project.classes():
        print(f"---------------------------------------------")
        print(f"Class: {cls.name}")
        print(f"---------------------------------------------")
        for func in cls.functions():
            assert func.cfg
            #to_ssa_form(func)
            func.pretty_print(True)
            func.cfg.update_function(func)

            if print_cfg:
                func.cfg.pretty_print(True, True)

            if print_domtree:
                print("-- DOMTREE ---------------------------------")
                tree = domtree.build_domtree_naive(cfg)
                tree.pretty_print()

        print("\n")

def get_target(target_name: str) -> Target:
    if target_name == "gdnative":
        from gd2c.gdnative import GDNativeTarget
        return GDNativeTarget()

    raise Exception("target not known")

def assert_nothing_in_ssa_form(project: Project):
    for cls in project.iter_classes_in_dependency_order():
        for func in cls.functions():
            if func.cfg:
                assert not func.cfg.is_in_ssa_form

if __name__ == "__main__":   
    # These should be taken from command line args
    project_path = "./example/source"
    project_output_path = "./example/out"
    project_target = "gdnative"
    project = load_project(project_path)

    # Phase 0: Analyze 
    analysis.annotate_coroutines(project)
    analysis.annotate_assigned_parameters(project)
    analysis.annotate_loops(project)

    # Phase 1: Compile to intermediate    
    for cls in project.iter_classes_in_dependency_order():
        for func in cls.functions():
            if func.yields:
                transform.make_coroutine(func)

            func.cfg = controlflow.build_control_flow_graph(func)

            # Transforms not requiring SSA form
            transform.expand_jump_to_default_arg(func)
            transform.strip_debug(func)

            # Transforms done in SSA form
            ssa.to_ssa_form(func)
            transform.promote_typed_arithmetic(func)
            transform.substitute_intrinsics(func)
            transform.common_subexpression_elimination(func)
            transform.copy_elimination(func)
            transform.redundant_phi_arg_elimination(func)
            transform.dead_code_elimination(func)    

            # Done doing SSA transformations     
            ssa.from_ssa_form(func)


    # Phase 2: Apply target-specific transformations
    assert_nothing_in_ssa_form(project)
    target = get_target(project_target)
    target.transform(project)


    # Phase 3: Emit code
    target.emit(project, project_output_path)

    print_stuff(project, False, False)


