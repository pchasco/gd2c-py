from __future__ import annotations
from typing import Union, List, Set, FrozenSet, Optional, Dict
from gd2c.project import Project
from gd2c.gdscriptclass import GDScriptClass
from pathlib import Path

class ClassContext:
    def __init__(self, cls: GDScriptClass):
        self.cls = cls
        self.struct_tag = f"{cls.name}_struct_t"

    def initialize_vtable(self, base_context: ClassContext):
        pass

class GDNativeCodeGen:
    def __init__(self, project: Project, output_path: Path):
        self.output_path = output_path
        self._project = project
        self._class_contexts: Dict[int, ClassContext] = {}

    @property
    def output_path(self) -> Path:
        return self._output_path
    @output_path.setter
    def output_path(self, value: str):
        p = Path(value)
        assert p.is_dir(), "output_path must be a directory"
        assert not str(p.resolve()).startswith(str(Path(self._project.root).resolve()))
        self._output_path = p

    def transpile(self):
        self._initialize_contexts()
        self._transpile_header_file()
        self._transpile_implementation()

    def _initialize_contexts(self):
        def make_context(cls: GDScriptClass, depth: int):
            self._class_contexts[cls.type_id] = ClassContext(cls)

        def make_vtable(cls: GDScriptClass, depth: int):
            context = self._class_contexts[cls.type_id]
            base_context = self._contexts.get(cls.base.type_id) if cls.base else None
            context.initialize_vtable(base_context)
        
        self._class_contexts = {}
        self._project.visit_classes_in_dependency_order(make_context)
        self._project.visit_classes_in_dependency_order(make_vtable)

    def _transpile_header_file(self):
        p = Path(self._output_path, "godotproject.h")
        with p.open(mode="w") as header:
            header.write(f"""
                #ifndef __GD2C_GODOTPROJECT__
                #define __GD2C_GODOTPROJECT__            
            
                #include "gd2c.h"
            """)

            def iterate(cls: GDScriptClass, depth: int):
                class_context = self._class_contexts[cls.type_id]
                base_struct_tag = "class_base_t" # class_base_t is defined in gd2c.h
                if cls.base:
                    base_context = self._class_contexts[cls.base.type_id]
                    base_struct_tag = base_context.struct_tag

                header.write(f"""
                    method_wrapper_ptr_t {class_context.vtable_wrappers_identifier}[{class_context.vtable_size}];
                    method_ptr_t {class_context.vtable_methods_identifier}[{class_context.vtable_size}];
                    godot_string {class_context.vtable_method_names_identifier}[{class_context.vtable_size}];
                    struct vtable_t {class_context.vtable_identifier};
                    struct {class_context.struct_tag} {{
                        union {{
                            struct {base_context};
                        }};
                """)

                for member in sorted(list(cls.members()), key=lambda c: c.index):
                    header.write(f"""godot_variant member_{member.index};\n""")

                header.write(f"""
                    }};
                """)

                for constant in cls.constants():
                    header.write(f"""godot_variant {cls.name}_const_{constant.index};\n""")

                header.write(f"""int {class_context.constants_initialized_identifier} = 0;\n""")

                for func in cls.functions():
                    if func.len_constants:
                        func_context = class_context.get_function(func)
                        header.write(f"""godot_variant {func_context.constants_array_identifier}[{func.len_constants()}];\n""")
                        header.write(f"""int {func_context.constants_initialized_identifier} = 0;\n""")


            header.write(f"""
                #endif
            """)           
    
    def _transpile_implementation(self):
        pass