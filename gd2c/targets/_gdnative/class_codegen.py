from __future__ import annotations
from typing import TYPE_CHECKING, IO

if TYPE_CHECKING:
    from gd2c.targets.gdnative import ClassContext

class ClassCodegen:
    def __init__(self, class_context: ClassContext):
        self.class_context = class_context

    def transpile(self, writer: IO):
        self._transpile_vtable(writer)

    def _transpile_vtable(self, writer: IO):
        writer.write(f"""
            void {self.class_context.vtable_init_function_identifier}() {{
                vtable_init(&{self.class_context.vtable_identifier}, 
                            &{self.class_context.base_vtable_identifier}, 
                            {self.class_context.cls.type_id}, 
                            {len(self.class_context.vtable_entries)},
                            {self.class_context.vtable_wrappers_identifier},
                            {self.class_context.vtable_wrappers_identifier}, 
                            (void*)0);
        """)

        for i, entry in enumerate(self.class_context.vtable_entries):
            writer.write(f"""
                VTABLE_METHOD({self.class_context.vtable_identifier}, 
                    {i},
                    "{entry.func_context.func.name}",
                    {entry.func_context.function_identifier},
                    (void*)0,
                    (void*)0);
            """)

        writer.write("""
            }
        """)

    def _transpile_ctor(self, writer: IO):
        pass

    def _transpile_dtor(self, writer: IO):
        pass
    
    def _transpile_body(self, writer: IO):
        pass

    def _transpile_properties(self, writer: IO):
        for prop in self.class_context.cls.properties():
            if prop.name not in self.class_context.inherited_members:
                writer.write(f"""
                    godot_variant {self.class_context.member_getter_identifiers[prop.name]}(
                        godot_object *p_instance,
                        void *p_method_data,
                        struct {self.class_context.struct_tag} *p_user_data
                    ) {{
                        godot_variant value;
                        api10->godot_variant_new_copy(&value, &p_user_data->member_{prop.index});
                        return value;
                    }}

                    void {self.class_context.member_setter_identifiers[prop.name]}(
                        godot_object *p_instance,
                        void *p_method_data,
                        struct {self.class_context.struct_tag} *p_user_data,
                        godot_variant *p_value
                    ) {{
                        api10->godot_variant_new_copy(&p_user_data->member_{prop.index}, p_value);
                    }}
                """)
