                #ifndef __GD2C_GODOTPROJECT__
                #define __GD2C_GODOTPROJECT__            
            
                #include "gd2c.h"

                void print_variant(godot_variant *v) {
                    godot_string s = api10->godot_variant_as_string(v);
                    api10->godot_print(&s);
                    api10->godot_string_destroy(&s);
                }
                    method_wrapper_ptr_t Class_1_vtable_wrappers[3];
        variant_method_ptr_t Class_1_vtable_methods[3];
        godot_string Class_1_vtable_method_names[3];
        struct vtable_t Class_1_vtable;
        struct Class_1_struct_t {
            union {
                struct class_base_t;
            };
    godot_variant direction;
        };
    int Class_1_constants_initialized = 0;
godot_string_name Class_1__physics_process_global_names[1];
int Class_1__physics_process_local_const_initialized = 0;
godot_variant Class_1__init_local_const[2];
int Class_1__init_local_const_initialized = 0;
godot_string_name Class_1_do_actual_stuff_global_names[3];
godot_variant Class_1_do_actual_stuff_local_const[7];
int Class_1_do_actual_stuff_local_const_initialized = 0;
            godot_variant Class_1_get_direction(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_1_set_direction(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                void *Class_1_ctor(godot_object *p_instance, void *p_method_data)
    ;
        void Class_1_dtor(godot_object *p_instance, void *p_method_data, void *_p_user_data)
    ;
        godot_variant Class_1__physics_process_func(             godot_object* p_instance,             void* p_method_data,             void* _p_user_data,             int p_num_args,             godot_variant** p_args);
        godot_variant Class_1__init_func(             godot_object* p_instance,             void* p_method_data,             void* _p_user_data,             int p_num_args,             godot_variant** p_args);
        godot_variant Class_1_do_actual_stuff_func(             godot_object* p_instance,             void* p_method_data,             void* _p_user_data,             int p_num_args,             godot_variant** p_args);
                #endif
            