from __future__ import annotations
from typing import Union, List, Set, FrozenSet, Optional, Dict, IO
from pathlib import Path
from gd2c.project import Project
from gd2c.gdscriptclass import GDScriptClass, GDScriptFunction, GDScriptMember
from gd2c.targets._gdnative.context import ClassContext, FunctionContext
from gd2c.controlflow import ControlFlowGraph, build_control_flow_graph

import gd2c.targets._gdnative.transform as transform
import gd2c.targets._gdnative.class_codegen as class_codegen
import gd2c.targets._gdnative.function_codegen as function_codegen


class GDNativeCodeGen:
    def __init__(self, project: Project, output_path: Union[str, Path]):
        self.project = project
        self.class_contexts: Dict[int, ClassContext] = {}
        self.output_path = Path(output_path)

        self.transforms = [
            transform.insert_initializers_transformation,
            transform.insert_destructors_transformation,
            transform.map_variables_transformation
        ]

    @property
    def output_path(self) -> Path:
        return self._output_path
    @output_path.setter
    def output_path(self, value: str):
        p = Path(value)
        assert p.is_dir(), "output_path must be a directory"
        assert not str(p.resolve()).startswith(str(Path(self.project.root).resolve()))
        self._output_path = p

    def transpile(self):
        self._initialize_contexts()
        self._apply_transformations()
        self._transpile_header_file()
        self._transpile_implementation()

    def _initialize_contexts(self):
        def make_context(cls: GDScriptClass, depth: int):
            print(f"make_context {depth} {cls.name}")
            context = ClassContext(cls, self.class_contexts.get(cls.base.type_id, None) if cls.base else None)
            self.class_contexts[cls.type_id] = context

        self.class_contexts = {}
        self.project.visit_classes_in_dependency_order(make_context)

    def _apply_transformations(self):
        for transform in self.transforms:
            transform(self)

    def _transpile_header_file(self):
        p = Path(self._output_path, "godotproject.h")
        with p.open(mode="w") as header:
            header.write(f"""
                #ifndef __GD2C_GODOTPROJECT__
                #define __GD2C_GODOTPROJECT__            
            
                #include "gd2c.h"
            """)

            def iterate_data_declarations(cls: GDScriptClass, depth: int):
                class_context = self.class_contexts[cls.type_id]
                class_codegen.transpile_struct(class_context, header)
                class_codegen.transpile_constant_declarations(class_context, header)

                for func in cls.functions():
                    if func.len_constants:
                        func_context = class_context.get_function_context(func)
                        header.write(f"""godot_variant {func_context.constants_array_identifier}[{func.len_constants}];\n""")
                        header.write(f"""int {func_context.constants_initialized_identifier} = 0;\n""")

            def iterate_function_signatures(cls: GDScriptClass, depth: int):
                class_context = self.class_contexts[cls.type_id]
                for func_context in class_context.function_contexts.values():
                    function_codegen.transpile_signature(func_context, header)

            self.project.visit_classes_in_dependency_order(iterate_data_declarations)
            self.project.visit_classes_in_dependency_order(iterate_function_signatures)

            header.write(f"""
                #endif
            """)           
    
    def _transpile_implementation(self):
        p = Path(self._output_path, "godotproject.c")
        with p.open(mode="w") as impl:
            impl.write(f"""
                #include "gd2c.h"
            """)

            def iterate_function(cls: GDScriptClass, depth: int):
                class_context = self.class_contexts[cls.type_id]
                for func_context in class_context.function_contexts.values():
                    function_codegen.transpile_function(func_context, impl)

            self.project.visit_classes_in_dependency_order(iterate_function)

            self._transpile_nativescript_registrations(impl)

    def _transpile_nativescript_registrations(self, impl: IO):
        impl.write(f"""
            void GDN_EXPORT {self.project.export_prefix}_nativescript_init(void *p_handle) {{
        """)

        def visitor(cls: GDScriptClass, depth: int):
            class_context = self.class_contexts[cls.type_id]
            impl.write(f"""
                {{
                    godot_instance_create_func create = {{ NULL, NULL, NULL }};
                    create.create_func = {class_context.ctor_identifier};
                    godot_instance_destroy_func destroy = {{ NULL, NULL, NULL }};
                    destroy.destroy_func = {class_context.dtor_identifier};
                    nativescript10->godot_nativescript_register_class(p_handle, "{cls.name}", "{cls.built_in_type}", create, destroy);
                }}
            """)

            for entry in class_context.vtable_entries:
                impl.write(f"""
                    {{
                        godot_instance_method method = {{ NULL, NULL, NULL }};
                        method.method = &{entry.func_context.function_identifier};
                        godot_method_attributes attributes = {{ GODOT_METHOD_RPC_MODE_DISABLED }};
                        nativescript10->godot_nativescript_register_method(p_handle, "{cls.name}", "{entry.func_context.func.name}", &attributes, method);
                    }}
                """)

            for signal in cls.signals():
                impl.write(f"""
                    {{
                        godot_string name = api10->godot_string_chars_to_utf8("{signal}");
                        godot_signal signal = {{
                            name,
                            0,
                            NULL,
                            0,
                            NULL
                        }};
                        nativescript10->godot_nativescript_register_signal(p_handle, "{signal}", &signal);
                    }}
                """)

            for member_context in class_context.member_contexts.values():
                impl.write(f"""
                    {{
                        godot_property_set_func setter = {{ NULL, NULL, NULL }};
                        setter.set_func = &{member_context.setter_identifier};
                        godot_property_get_func getter = {{ NULL, NULL, NULL }};
                        getter.get_func = &{member_context.getter_identifier};
                        godot_property_attributes attributes = {{ GODOT_METHOD_RPC_MODE_DISABLED }};
                        nativescript10->godot_nativescript_register_property(p_handle, "{member_context.member_identifier}", "{member_context.path}", &attributes, setter, getter);
                    }}
                """)


            impl.write(f"""
                /********************
                INITIALIZE VTABLE
                *********************/    
            """)

        self.project.visit_classes_in_dependency_order(visitor)

        impl.write(f"""
            }}
        """)