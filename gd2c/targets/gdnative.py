from __future__ import annotations
from typing import Union, List, Set, FrozenSet, Optional, Dict, IO
from pathlib import Path
from gd2c.project import Project
from gd2c.gdscriptclass import GDScriptClass, GDScriptFunction
from gd2c.targets._gdnative.function_codegen import FunctionCodegen
from gd2c.targets._gdnative.class_codegen import ClassCodegen
from gd2c.controlflow import ControlFlowGraph, build_control_flow_graph
from gd2c.targets._gdnative.transform import map_variables_transformation

class FunctionContext:
    def __init__(self, func: GDScriptFunction, class_context: ClassContext):
        self.func = func
        self.class_context = class_context
        self.constants_array_identifier = f"{class_context.cls.name}_{self.func.name}_constants"
        self.constants_initialized_identifier = f"{class_context.cls.name}_{self.func.name}_constants_initialized"
        self.function_identifier = f"{class_context.cls.name}_func_{self.func.name}"
        self.cfg = build_control_flow_graph(func)
        self.parameters_identifier = "p_args"

class VtableEntry:
    def __init__(self, func: FunctionContext):
        self.func_context = func

class MemberContext:
    def __init__(self, cls: GDScriptClass, member: GDScriptMember):
        self.member_identifier = f"{member.name}"

class ClassContext:
    def __init__(self, cls: GDScriptClass):
        self.cls = cls
        self.struct_tag = f"{cls.name}_struct_t"
        self.vtable_wrappers_identifier = f"{cls.name}_vtable_wrappers"
        self.vtable_methods_identifier = f"{cls.name}_vtable_methods"
        self.vtable_method_names_identifier = f"{cls.name}_vtable_method_names"
        self.vtable_identifier = f"{cls.name}_vtable"
        self.base_vtable_identifier = "vtable"
        self.vtable_init_function_identifier = f"{cls.name}_vtable_init"
        self.vtable_entries: List[VtableEntry] = []
        self.function_contexts: List[FunctionContext] = []
        self.constants_initialized_identifier = f"{cls.name}_constants_initialized"
        self.ctor_identifier = f"{cls.name}_ctor"
        self.dtor_identifier = f"{cls.name}_dtor"

        self._initialize_members()

    def _initialize_members(self):
        inherited_members = set([])
        base = self.cls.base
        while base:
            inherited_members.update([m.name for m in base.members()])
            base = self.cls.base

        self.member_setter_identifiers = dict([
            (p.name, f"{cls.name}_set_{p.name}") for p in cls.members() if p.name not in inherited_members
        ])
        self.member_getter_identifiers = dict([
            (p.name, f"{cls.name}_get_{p.name}") for p in cls.members() if p.name not in inherited_members
        ])
        self.inherited_members = frozenset(inherited_members)

    def initialize_vtable(self, base_context: ClassContext):
        self.function_contexts = [FunctionContext(f, self) for f in self.cls.functions()]

        self.vtable_entries = []
        new_funcs: List[FunctionContext] = []
        if self.cls.base:
            assert base_context
            self.base_vtable_identifier = base_context.vtable_identifier
            self.vtable_entries.extend(base_context.vtable_entries)
            for func_context in self.function_contexts:
                found = False
                for i, entry in enumerate(self.vtable_entries):
                    if entry.func_context.func.name == func_context.func.name:
                        self.vtable_entries[i] = VtableEntry(func_context)
                        found = True
                        break

                if not found:
                    new_funcs.append(func_context)
        else:
            new_funcs.extend(self.function_contexts)

        for func_context in new_funcs:
            self.vtable_entries.append(VtableEntry(func_context))

    def get_function_context(self, what: Union[str, GDScriptFunction]) -> FunctionContext:
        for func_context in self.function_contexts:
            if isinstance(what, GDScriptFunction):
                if func_context.func == what:
                    return func_context
            elif isinstance(what, str):
                if func_context.func.name == what:
                    return func_context

        raise Exception("function not found")

class GDNativeCodeGen:
    def __init__(self, project: Project, output_path: Union[str, Path]):
        self._project = project
        self._class_contexts: Dict[int, ClassContext] = {}
        self.output_path = Path(output_path)

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
        self._apply_transformations()
        self._transpile_header_file()
        self._transpile_implementation()

    def _initialize_contexts(self):
        def make_context(cls: GDScriptClass, depth: int):
            print(f"make_context {depth} {cls}")
            self._class_contexts[cls.type_id] = ClassContext(cls)

        def make_vtable(cls: GDScriptClass, depth: int):
            print(f"make_vtable {depth} {cls}")
            context = self._class_contexts[cls.type_id]
            base_context = self._class_contexts.get(cls.base.type_id) if cls.base else None
            context.initialize_vtable(base_context)
        
        self._class_contexts = {}
        self._project.visit_classes_in_dependency_order(make_context)
        self._project.visit_classes_in_dependency_order(make_vtable)

    def _apply_transformations(self):
        def transform(cls, depth):
            class_context = self._class_contexts[cls.type_id]
            for func_context in class_context.function_contexts:
                map_variables_transformation(func_context)

        self._project.visit_classes_in_dependency_order(transform)

    def _transpile_header_file(self):
        p = Path(self._output_path, "godotproject.h")
        with p.open(mode="w") as header:
            header.write(f"""
                #ifndef __GD2C_GODOTPROJECT__
                #define __GD2C_GODOTPROJECT__            
            
                #include "gd2c.h"
            """)

            def iterate_data(cls: GDScriptClass, depth: int):
                class_context = self._class_contexts[cls.type_id]
                base_struct_tag = "class_base_t" # class_base_t is defined in gd2c.h
                if cls.base:
                    base_context = self._class_contexts[cls.base.type_id]
                    base_struct_tag = base_context.struct_tag

                header.write(f"""
                    method_wrapper_ptr_t {class_context.vtable_wrappers_identifier}[{len(class_context.vtable_entries)}];
                    method_ptr_t {class_context.vtable_methods_identifier}[{len(class_context.vtable_entries)}];
                    godot_string {class_context.vtable_method_names_identifier}[{len(class_context.vtable_entries)}];
                    struct vtable_t {class_context.vtable_identifier};
                    struct {class_context.struct_tag} {{
                        union {{
                            struct {base_struct_tag};
                        }};
                """)

                for member in sorted(list(cls.members()), key=lambda c: c.index):
                    header.write(f"""godot_variant member_{member.index};\n""")

                header.write(f"""
                    }};
                """)

                for constant in cls.constants():
                    header.write(f"""godot_variant {cls.name}_const_{constant.name};\n""")

                header.write(f"""int {class_context.constants_initialized_identifier} = 0;\n""")

                for func in cls.functions():
                    if func.len_constants:
                        func_context = class_context.get_function_context(func)
                        header.write(f"""godot_variant {func_context.constants_array_identifier}[{func.len_constants}];\n""")
                        header.write(f"""int {func_context.constants_initialized_identifier} = 0;\n""")

            def iterate_function(cls: GDScriptClass, depth: int):
                class_context = self._class_contexts[cls.type_id]
                for func_context in class_context.function_contexts:
                    header.write(f"""
                        godot_variant {func_context.function_identifier}(
                            godot_object* p_instance,
                            void* p_method_data,
                            struct {class_context.struct_tag}* p_user_data,
                            int p_num_args,
                            godot_variant** p_args);    
                    """)

            self._project.visit_classes_in_dependency_order(iterate_data)
            self._project.visit_classes_in_dependency_order(iterate_function)

            header.write(f"""
                #endif
            """)           
    
    def _transpile_implementation(self):
        p = Path(self._output_path, "godotproject.c")
        with p.open(mode="w") as impl:
            def iterate_function(cls: GDScriptClass, depth: int):
                class_context = self._class_contexts[cls.type_id]
                for func_context in class_context.function_contexts:
                    codegen = FunctionCodegen(func_context)
                    codegen.transpile(impl)

            self._project.visit_classes_in_dependency_order(iterate_function)

            self._transpile_registrations(impl)

    def _transpile_registrations(self, impl: IO):
        impl.write(f"""
            void GDN_EXPORT {self._project.export_prefix}_nativescript_init(void *p_handle) {{
        """)

        def visitor(cls: GDScriptClass, depth: int):
            class_context = self._class_contexts[cls.type_id]
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
                        nativescript10->godot_nativescript_register_method(p_handle, "{cls.name}", "{entry.func_context.func.name}", attributes, method);
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

            impl.write(f"""
                /********************
                IMPLEMENT PROPERTIES
                *********************/    
            """)

            impl.write(f"""
                /********************
                INITIALIZE VTABLE
                *********************/    
            """)

        self._project.visit_classes_in_dependency_order(visitor)

        impl.write(f"""
            }}
        """)