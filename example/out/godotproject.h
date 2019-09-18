
                #ifndef __GD2C_GODOTPROJECT__
                #define __GD2C_GODOTPROJECT__            
            
                #include "gd2c.h"
            
        method_wrapper_ptr_t Class_1_vtable_wrappers[3];
        variant_method_ptr_t Class_1_vtable_methods[3];
        godot_string Class_1_vtable_method_names[3];
        struct vtable_t Class_1_vtable;
        struct Class_1_struct_t {
            union {
                struct class_base_t;
            };
    
        };
    int Class_1_constants_initialized = 0;

        godot_variant Class_1_constants[0];
    godot_variant Class_1_nested_loop_local_const[3];
int Class_1_nested_loop_local_const_initialized = 0;
godot_variant Class_1_with_defargs_local_const[2];
int Class_1_with_defargs_local_const_initialized = 0;

        void *Class_1_ctor(godot_object *p_instance, void *p_method_data)
    ;

        void Class_1_dtor(godot_object *p_instance, void *p_method_data, void *_p_user_data)
    ;
        godot_variant Class_1__init_func(
            godot_object* p_instance,
            void* p_method_data,
            void* _p_user_data,
            int p_num_args,
            godot_variant** p_args);
        godot_variant Class_1_nested_loop_func(
            godot_object* p_instance,
            void* p_method_data,
            void* _p_user_data,
            int p_num_args,
            godot_variant** p_args);
        godot_variant Class_1_with_defargs_func(
            godot_object* p_instance,
            void* p_method_data,
            void* _p_user_data,
            int p_num_args,
            godot_variant** p_args);

                #endif
            