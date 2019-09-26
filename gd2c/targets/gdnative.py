from __future__ import annotations
from typing import Union, List, Set, FrozenSet, Optional, Dict, IO, Callable
from pathlib import Path
from gd2c.project import Project
from gd2c.target import Target
from gd2c.gdscriptclass import GDScriptClass, GDScriptFunction, GDScriptMember
from gd2c.targets._gdnative.context import ClassContext, FunctionContext

from gd2c import controlflow

import gd2c.targets._gdnative.transform as transform
import gd2c.targets._gdnative.class_codegen as class_codegen
import gd2c.targets._gdnative.function_codegen as function_codegen

class GDNativeTarget(Target):
    project: Project

    def __init__(self, project: Project):
        self.project = project

    def transform(self) -> None:
        for cls in self.project.classes():
            for func in cls.functions():
                func.cfg = controlflow.build_control_flow_graph(func)
                func.cfg.live_variable_analysis()

                transform.insert_initializers_transformation(func)
                #transform.replace_init_calls_with_noop_transformation(func)
                transform.insert_destructors_transformation(func)

    def emit(self, output_path: str) -> None:
        gen = GDNativeCodeGen(self.project, output_path)
        gen.transpile()

class GDNativeCodeGen:
    def __init__(self, project: Project, output_path: Union[str, Path]):
        self.project = project
        self.class_contexts: Dict[int, ClassContext] = {}
        self.output_path = Path(output_path)

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
        self._transpile_header_file()
        self._transpile_c_file()

    def _initialize_contexts(self):
        self.class_contexts = {}
        for cls in self.project.iter_classes_in_dependency_order():
            context = ClassContext(cls, self.class_contexts.get(cls.base.type_id, None) if cls.base else None)
            self.class_contexts[cls.type_id] = context

    def _transpile_header_file(self):
        p = Path(self._output_path, "godotproject.h")
        with p.open(mode="w") as header:
            header.write(f"""\
                #ifndef __GD2C_GODOTPROJECT__
                #define __GD2C_GODOTPROJECT__            
            
                #include "gd2c.h"
            """)

            for cls in self.project.iter_classes_in_dependency_order():
                class_context = self.class_contexts[cls.type_id]
                class_codegen.transpile_struct(class_context, header)
                class_codegen.transpile_constant_declarations(class_context, header)

                for func in cls.functions():
                    if func.len_constants:
                        func_context = class_context.get_function_context(func)
                        header.write(f"""godot_variant {func_context.local_constants_array_identifier}[{func.len_constants}];\n""")
                        header.write(f"""int {func_context.initialized_local_constants_array_identifier} = 0;\n""")

            for cls in self.project.iter_classes_in_dependency_order():
                class_context = self.class_contexts[cls.type_id]
                class_codegen.transpile_property_signatures(class_context, header)             

            for cls in self.project.iter_classes_in_dependency_order():
                class_context = self.class_contexts[cls.type_id]
                class_codegen.transpile_ctor_signature(class_context, header)
                header.write(";\n")
                class_codegen.transpile_dtor_signature(class_context, header)
                header.write(";\n")
                for func_context in class_context.function_contexts.values():
                    function_codegen.transpile_signature(func_context, header)

            header.write(f"""\
                #endif
            """)           
    
    def _transpile_c_file(self):
        p = Path(self._output_path, "godotproject.c")
        with p.open(mode="w") as writer:
            writer.write(f"""\
                #include "gd2c.h"
                #include "godotproject.h"
            """)

            for cls in self.project.iter_classes_in_dependency_order():
                class_context = self.class_contexts[cls.type_id]
                class_codegen.transpile_ctor(class_context, writer)                
                class_codegen.transpile_dtor(class_context, writer)       
                class_codegen.transpile_property_implementations(class_context, writer)         
                for func_context in class_context.function_contexts.values():
                    function_codegen.transpile_function(func_context, writer)
                
                class_codegen.transpile_vtable(class_context, writer)

            self._transpile_gdnative_init(writer)
            self._transpile_gdnative_terminate(writer)
            self._transpile_nativescript_registrations(writer)

    def _transpile_gdnative_init(self, impl: IO):
        impl.write(f"""\
            void GDN_EXPORT {self.project.export_prefix}_gdnative_init(godot_gdnative_init_options *p_options) {{
                printf("Enter: {self.project.export_prefix}_gdnative_init\\n");
                api10 = p_options->api_struct;
                
                const godot_gdnative_api_struct *extension = api10->next;
                while (extension && (extension != extension->next)) {{
                    if (extension->version.major == 1 && extension->version.minor == 1) {{
                        printf("  Found api11\\n");
                        api11 = (const godot_gdnative_core_1_1_api_struct*)extension;
                    }}
                    extension = extension->next;
                }}

                for (int i = 0; i < api10->num_extensions; ++i) {{
                    switch (api10->extensions[i]->type) {{
                        case GDNATIVE_EXT_NATIVESCRIPT: {{
                            extension = api10->extensions[i];
                            nativescript10 = (godot_gdnative_ext_nativescript_api_struct*)extension;
                            while (extension && (extension != extension->next)) {{
                                if (extension->version.major == 1 && extension->version.minor == 1) {{
                                    printf("  Found nativescript11\\n");
                                    nativescript11 = (const godot_gdnative_ext_nativescript_1_1_api_struct*)extension;
                                }}
                                extension = extension->next;
                            }}
                        }}; break;
                        
                        default:
                            break;
                    }}
                }}

                initialize_gd2capi();
                
                api10->godot_variant_new_nil(&__nil);
                printf("Exit: {self.project.export_prefix}_gdnative_init\\n");
            }}        
        """)

    def _transpile_gdnative_terminate(self, impl: IO):
        impl.write(f"""\
            void GDN_EXPORT {self.project.export_prefix}_gdnative_terminate(godot_gdnative_terminate_options *p_options) {{
                printf("Enter: {self.project.export_prefix}_gdnative_terminate\\n");
                api10->godot_variant_destroy(&__nil);
        """)

        for class_context in self.class_contexts.values():
            if class_context.cls.len_constants > 0:
                impl.write(f"""if (0 != {class_context.constants_initialized_identifier}) {{\n""")
                for i in range(class_context.cls.len_constants):
                    impl.write(f"""api10->godot_variant_destroy(&{class_context.constants_array_identifier}[{i}]);\n""")
                impl.write(f"""}}\n""")

            for func in class_context.cls.functions():
                function_context = class_context.get_function_context(func.name)
                assert function_context
                if function_context.func.len_constants:
                    impl.write(f"""if (0 != {function_context.initialized_local_constants_array_identifier}) {{\n""")

                    for i in range(function_context.func.len_constants):
                        impl.write(f"""api10->godot_variant_destroy(&{function_context.local_constants_array_identifier}[{i}]);\n""")

                    impl.write(f"""}}\n""")

        impl.write(f"""}}\n""")

    def _transpile_nativescript_registrations(self, impl: IO):
        impl.write(f"""\
            void GDN_EXPORT {self.project.export_prefix}_nativescript_init(void *p_handle) {{
                printf("Enter: {self.project.export_prefix}_nativescript_init\\n");
        """)

        def visitor(cls: GDScriptClass, depth: int):
            class_context = self.class_contexts[cls.type_id]
            impl.write(f"""\
                {{
                    printf("  Register class: {cls.name}\\n");
                    godot_instance_create_func create = {{ NULL, NULL, NULL }};
                    create.create_func = {class_context.ctor_identifier};
                    godot_instance_destroy_func destroy = {{ NULL, NULL, NULL }};
                    destroy.destroy_func = {class_context.dtor_identifier};
                    nativescript10->godot_nativescript_register_class(p_handle, "{cls.name}", "{cls.built_in_type}", create, destroy);
                }}
            """)

            for entry in class_context.vtable_entries:
                impl.write(f"""\
                    {{
                        printf("  Register method: {entry.func_context.function_identifier}\\n");
                        godot_instance_method method = {{ NULL, NULL, NULL }};
                        method.method = &{entry.func_context.function_identifier};
                        godot_method_attributes attributes = {{ GODOT_METHOD_RPC_MODE_DISABLED }};
                        nativescript10->godot_nativescript_register_method(p_handle, "{cls.name}", "{entry.func_context.func.name}", attributes, method);
                    }}
                """)

            for signal in cls.signals():
                impl.write(f"""\
                    {{
                        printf("  Register signal: {signal}\\n");
                        godot_string name = api10->godot_string_chars_to_utf8("{signal}");
                        godot_signal signal = {{ name, 0, NULL, 0, NULL }};
                        nativescript10->godot_nativescript_register_signal(p_handle, "{signal}", &signal);
                    }}
                """)

            for member_context in class_context.member_contexts.values():
                impl.write(f"""\
                    {{
                        printf("  Register member: {member_context.member_identifier}\\n");
                        godot_property_set_func setter = {{ NULL, NULL, NULL }};
                        setter.set_func = &{member_context.setter_identifier};
                        godot_property_get_func getter = {{ NULL, NULL, NULL }};
                        getter.get_func = &{member_context.getter_identifier};
                        godot_property_attributes attributes = {{ GODOT_METHOD_RPC_MODE_DISABLED }};
                        nativescript10->godot_nativescript_register_property(p_handle, "{class_context.cls.name}", "{member_context.path}", &attributes, setter, getter);
                    }}
                """)

        self.project.visit_classes_in_dependency_order(visitor)

        impl.write(f"""\
                printf("Exit: {self.project.export_prefix}_nativescript_init\\n");
            }}
        """)