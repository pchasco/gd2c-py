
                #ifndef __GD2C_GODOTPROJECT__
                #define __GD2C_GODOTPROJECT__            
            
                #include "gd2c.h"
            
        method_wrapper_ptr_t Class_1_vtable_wrappers[5];
        method_ptr_t Class_1_vtable_methods[5];
        godot_string Class_1_vtable_method_names[5];
        struct vtable_t Class_1_vtable;
        struct Class_1_struct_t {
            union {
                struct class_base_t;
            };
    godot_variant member1;
godot_variant member2;

        };
    int Class_1_constants_initialized = 0;
godot_variant Class_1_const_const1;
godot_variant Class_1_const_const2;
godot_variant Class_1__init_constants[4];
int Class_1__init_constants_initialized = 0;
godot_variant Class_1_if_else_constants[5];
int Class_1_if_else_constants_initialized = 0;
godot_variant Class_1_diamond_dom_constants[5];
int Class_1_diamond_dom_constants_initialized = 0;
godot_variant Class_1_if_not_nested_constants[2];
int Class_1_if_not_nested_constants_initialized = 0;
godot_variant Class_1_method1_constants[1];
int Class_1_method1_constants_initialized = 0;

        method_wrapper_ptr_t Class_3_vtable_wrappers[6];
        method_ptr_t Class_3_vtable_methods[6];
        godot_string Class_3_vtable_method_names[6];
        struct vtable_t Class_3_vtable;
        struct Class_3_struct_t {
            union {
                struct Class_1_struct_t;
            };
    
        };
    int Class_3_constants_initialized = 0;
godot_variant Class_3_method1_constants[1];
int Class_3_method1_constants_initialized = 0;

            godot_variant Class_1_get_member1(
                godot_object *p_instance,
                void *p_method_data,
                struct Class_1_struct_t *p_user_data
            );

            void Class_1_set_member1(
                godot_object *p_instance,
                void *p_method_data,
                struct Class_1_struct_t *p_user_data,
                godot_variant *p_value
            );
        
            godot_variant Class_1_get_member2(
                godot_object *p_instance,
                void *p_method_data,
                struct Class_1_struct_t *p_user_data
            );

            void Class_1_set_member2(
                godot_object *p_instance,
                void *p_method_data,
                struct Class_1_struct_t *p_user_data,
                godot_variant *p_value
            );
        
        godot_variant Class_1_func__init(
            godot_object* p_instance,
            void* p_method_data,
            struct Class_1_struct_t* p_user_data,
            int p_num_args,
            godot_variant** p_args);

        godot_variant Class_1_func_if_else(
            godot_object* p_instance,
            void* p_method_data,
            struct Class_1_struct_t* p_user_data,
            int p_num_args,
            godot_variant** p_args);

        godot_variant Class_1_func_diamond_dom(
            godot_object* p_instance,
            void* p_method_data,
            struct Class_1_struct_t* p_user_data,
            int p_num_args,
            godot_variant** p_args);

        godot_variant Class_1_func_if_not_nested(
            godot_object* p_instance,
            void* p_method_data,
            struct Class_1_struct_t* p_user_data,
            int p_num_args,
            godot_variant** p_args);

        godot_variant Class_1_func_method1(
            godot_object* p_instance,
            void* p_method_data,
            struct Class_1_struct_t* p_user_data,
            int p_num_args,
            godot_variant** p_args);

        godot_variant Class_3_func__init(
            godot_object* p_instance,
            void* p_method_data,
            struct Class_3_struct_t* p_user_data,
            int p_num_args,
            godot_variant** p_args);

        godot_variant Class_3_func_method2(
            godot_object* p_instance,
            void* p_method_data,
            struct Class_3_struct_t* p_user_data,
            int p_num_args,
            godot_variant** p_args);

        godot_variant Class_3_func_method1(
            godot_object* p_instance,
            void* p_method_data,
            struct Class_3_struct_t* p_user_data,
            int p_num_args,
            godot_variant** p_args);

                #endif
            