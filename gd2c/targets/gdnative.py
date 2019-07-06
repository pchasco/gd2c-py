from __future__ import annotations
from typing import Union, List, Set, FrozenSet, Optional, Dict, IO
from pathlib import Path
from gd2c.project import Project
from gd2c.gdscriptclass import GDScriptClass, GDScriptFunction, GDScriptMember
from gd2c.targets._gdnative.function_codegen import FunctionCodegen
from gd2c.targets._gdnative.class_codegen import ClassCodegen
from gd2c.controlflow import ControlFlowGraph, build_control_flow_graph
import gd2c.targets._gdnative.transform

class FunctionContext:
    def __init__(self, func: GDScriptFunction, class_context: ClassContext):
        self.func: GDScriptFunction = func
        self.class_context: ClassContext = class_context
        self.constants_array_identifier: str = f"{class_context.cls.name}_{self.func.name}_constants"
        self.constants_initialized_identifier: str = f"{class_context.cls.name}_{self.func.name}_constants_initialized"
        self.function_identifier: str = f"{class_context.cls.name}_func_{self.func.name}"
        self.cfg: ControlFlowGraph = build_control_flow_graph(func)
        self.parameters_identifier: str = "p_args"

class VtableEntry:
    def __init__(self, func: FunctionContext):
        self.func_context = func

class MemberContext:
    def __init__(self, cls: GDScriptClass, member: GDScriptMember):
        self.member = member
        self.member_identifier = f"{member.name}"
        self.path = f"{member.name}"
        self.setter_identifier = f"{cls.name}_set_{member.name}"
        self.getter_identifier = f"{cls.name}_get_{member.name}"

class ClassContext:
    def __init__(self, cls: GDScriptClass, base_context: Optional[ClassContext]):
        self.cls = cls
        self.base_context: Optional[ClassContext] = base_context
        self.function_contexts: Dict[str, FunctionContext] = {}
        self.member_contexts: Dict[str, MemberContext] = {}
        self.vtable_entries: List[VtableEntry] = []
        self.struct_tag = f"{cls.name}_struct_t"
        self.vtable_wrappers_identifier = f"{cls.name}_vtable_wrappers"
        self.vtable_methods_identifier = f"{cls.name}_vtable_methods"
        self.vtable_method_names_identifier = f"{cls.name}_vtable_method_names"
        self.vtable_identifier = f"{cls.name}_vtable"
        self.base_vtable_identifier = "vtable"
        self.vtable_init_function_identifier = f"{cls.name}_vtable_init"
        self.constants_initialized_identifier = f"{cls.name}_constants_initialized"
        self.ctor_identifier = f"{cls.name}_ctor"
        self.dtor_identifier = f"{cls.name}_dtor"

    def initialize_members(self):
        own_members = self.cls.own_members()
        own_member_names = [m.name for m in own_members]
        for member in self.cls.members():
            if member.name in own_member_names:
                self.member_contexts[member.name] = MemberContext(self.cls, member)
            elif self.base_context:
                self.member_contexts[member.name] = self.base_context.member_contexts[member.name]
            else:
                raise Exception("internal error: base_context is None")

    def initialize_vtable(self):
        self.function_contexts = dict([(f.name, FunctionContext(f, self)) for f in self.cls.functions()])

        self.vtable_entries = []
        new_funcs: List[FunctionContext] = []
        if self.cls.base:
            assert self.base_context
            self.base_vtable_identifier = self.base_context.vtable_identifier
            self.vtable_entries.extend(self.base_context.vtable_entries)
            for func_context in self.function_contexts.values():
                found = False
                for i, entry in enumerate(self.vtable_entries):
                    if entry.func_context.func.name == func_context.func.name:
                        self.vtable_entries[i] = VtableEntry(func_context)
                        found = True
                        break

                if not found:
                    new_funcs.append(func_context)
        else:
            new_funcs.extend(self.function_contexts.values())

        for func_context in new_funcs:
            self.vtable_entries.append(VtableEntry(func_context))

    def get_function_context(self, what: Union[str, GDScriptFunction]) -> FunctionContext:
        if isinstance(what, str):
            return self.function_contexts[what]

        if isinstance(what, GDScriptFunction):
            for func_context in self.function_contexts.values():
                if func_context.func == what:
                    return func_context

        raise Exception("function not found")

class GDNativeCodeGen:
    def __init__(self, project: Project, output_path: Union[str, Path]):
        self.project = project
        self.class_contexts: Dict[int, ClassContext] = {}
        self.output_path = Path(output_path)

        self.transforms = [
            gd2c.targets._gdnative.transform.insert_initializers_transformation,
            gd2c.targets._gdnative.transform.insert_destructors_transformation,
            gd2c.targets._gdnative.transform.map_variables_transformation
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
            self.class_contexts[cls.type_id] = ClassContext(cls, self.class_contexts.get(cls.base.type_id, None) if cls.base else None)

        def make_vtable(cls: GDScriptClass, depth: int):
            print(f"make_vtable {depth} {cls.name}")
            context = self.class_contexts[cls.type_id]
            context.initialize_vtable()
        
        def initialize_members(cls: GDScriptClass, depth: int):
            print(f"initialize_members {depth} {cls.name}")
            context = self.class_contexts[cls.type_id]
            context.initialize_members()

        self.class_contexts = {}
        self.project.visit_classes_in_dependency_order(make_context)
        self.project.visit_classes_in_dependency_order(make_vtable)
        self.project.visit_classes_in_dependency_order(initialize_members)

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

            def iterate_data(cls: GDScriptClass, depth: int):
                class_context = self.class_contexts[cls.type_id]
                codegen.transpile_struct(header)
                codegen.transpile_constant_declarations(header)

                for func in cls.functions():
                    if func.len_constants:
                        func_context = class_context.get_function_context(func)
                        header.write(f"""godot_variant {func_context.constants_array_identifier}[{func.len_constants}];\n""")
                        header.write(f"""int {func_context.constants_initialized_identifier} = 0;\n""")

            def iterate_function(cls: GDScriptClass, depth: int):
                class_context = self.class_contexts[cls.type_id]
                for func_context in class_context.function_contexts.values():
                    header.write(f"""
                        godot_variant {func_context.function_identifier}(
                            godot_object* p_instance,
                            void* p_method_data,
                            struct {class_context.struct_tag}* p_user_data,
                            int p_num_args,
                            godot_variant** p_args);    
                    """)

            self.project.visit_classes_in_dependency_order(iterate_data)
            self.project.visit_classes_in_dependency_order(iterate_function)

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
                    codegen = FunctionCodegen(func_context)
                    codegen.transpile(impl)

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