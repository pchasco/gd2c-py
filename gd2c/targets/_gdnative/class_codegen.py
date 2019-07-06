from __future__ import annotations
from typing import TYPE_CHECKING, IO

if TYPE_CHECKING:
    from gd2c.targets.gdnative import ClassContext

def transpile_struct(class_context: ClassContext, writer: IO):
    base_struct_tag = "class_base_t" # class_base_t is defined in gd2c.h
    if class_context.base_context:
        base_struct_tag = class_context.base_context.struct_tag

    writer.write(f"""
        method_wrapper_ptr_t {class_context.vtable_wrappers_identifier}[{len(class_context.vtable_entries)}];
        method_ptr_t {class_context.vtable_methods_identifier}[{len(class_context.vtable_entries)}];
        godot_string {class_context.vtable_method_names_identifier}[{len(class_context.vtable_entries)}];
        struct vtable_t {class_context.vtable_identifier};
        struct {class_context.struct_tag} {{
            union {{
                struct {base_struct_tag};
            }};
    """)

    for member_context in class_context.member_contexts.values():
        if not member_context.member.is_inherited:
            writer.write(f"""godot_variant {member_context.member_identifier};\n""")

    writer.write(f"""
        }};
    """)      
    
    writer.write(f"""int {class_context.constants_initialized_identifier} = 0;\n""")

def transpile_constant_declarations(class_context: ClassContext, writer: IO):
    for constant in class_context.cls.constants():
        writer.write(f"""godot_variant {class_context.cls.name}_const_{constant.name};\n""")

def transpile_vtable(class_context: ClassContext, writer: IO):
    writer.write(f"""
        void {class_context.vtable_init_function_identifier}() {{
            vtable_init(&{class_context.vtable_identifier}, 
                        &{class_context.base_vtable_identifier}, 
                        {class_context.cls.type_id}, 
                        {len(class_context.vtable_entries)},
                        {class_context.vtable_wrappers_identifier},
                        {class_context.vtable_wrappers_identifier}, 
                        (void*)0);
    """)

    for i, entry in enumerate(class_context.vtable_entries):
        writer.write(f"""
            VTABLE_METHOD({class_context.vtable_identifier}, 
                {i},
                "{entry.func_context.func.name}",
                {entry.func_context.function_identifier},
                (void*)0,
                (void*)0);
        """)

    writer.write("""
        }
    """)

def transpile_ctor(class_context: ClassContext, writer: IO):
    pass

def transpile_dtor(class_context: ClassContext, writer: IO):
    pass

def transpile_property_implementations(class_context: ClassContext, writer: IO):
    own_members = [m.name for m in class_context.cls.own_members()]
    for member_context in class_context.member_contexts.values():
        if not member_context.member.name in own_members:
            continue

        writer.write(f"""
            godot_variant {member_context.getter_identifier}(
                godot_object *p_instance,
                void *p_method_data,
                struct {class_context.struct_tag} *p_user_data
            ) {{
                godot_variant value;
                api10->godot_variant_new_copy(&value, &p_user_data->{member_context.member_identifier});
                return value;
            }}

            void {member_context.setter_identifier}(
                godot_object *p_instance,
                void *p_method_data,
                struct {class_context.struct_tag} *p_user_data,
                godot_variant *p_value
            ) {{
                api10->godot_variant_new_copy(&p_user_data->{member_context.member_identifier}, p_value);
            }}
        """)

def transpile_property_signatures(class_context: ClassContext, writer: IO):
    own_members = [m.name for m in class_context.cls.own_members()]
    for member_context in class_context.member_contexts.values():
        if not member_context.member.name in own_members:
            continue

        writer.write(f"""
            godot_variant {member_context.getter_identifier}(
                godot_object *p_instance,
                void *p_method_data,
                struct {class_context.struct_tag} *p_user_data
            );

            void {member_context.setter_identifier}(
                godot_object *p_instance,
                void *p_method_data,
                struct {class_context.struct_tag} *p_user_data,
                godot_variant *p_value
            );
        """)        
