
                #ifndef __GD2C_GODOTPROJECT__
                #define __GD2C_GODOTPROJECT__            
            
                #include "gd2c.h"
            
        method_wrapper_ptr_t Class_1_vtable_wrappers[4];
        variant_method_ptr_t Class_1_vtable_methods[4];
        godot_string Class_1_vtable_method_names[4];
        struct vtable_t Class_1_vtable;
        struct Class_1_struct_t {
            union {
                struct class_base_t;
            };
    godot_variant member2;
godot_variant member1;

        };
    int Class_1_constants_initialized = 0;

        godot_variant Class_1_constants[2];
    godot_variant Class_1__init_constants[4];
int Class_1__init_constants_initialized = 0;
godot_variant Class_1_diamond_dom_constants[5];
int Class_1_diamond_dom_constants_initialized = 0;
godot_variant Class_1_call_method_constants[1];
int Class_1_call_method_constants_initialized = 0;
godot_variant Class_1_called_method_constants[1];
int Class_1_called_method_constants_initialized = 0;

        method_wrapper_ptr_t Class_3_vtable_wrappers[6];
        variant_method_ptr_t Class_3_vtable_methods[6];
        godot_string Class_3_vtable_method_names[6];
        struct vtable_t Class_3_vtable;
        struct Class_3_struct_t {
            union {
                struct Class_1_struct_t;
            };
    
        };
    int Class_3_constants_initialized = 0;

        godot_variant Class_3_constants[0];
    godot_variant Class_3_method1_constants[1];
int Class_3_method1_constants_initialized = 0;

            godot_variant Class_1_get_member2(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_1_set_member2(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
        
            godot_variant Class_1_get_member1(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_1_set_member1(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
        
        void *Class_1_ctor(godot_object *p_instance, void *p_method_data)
    ;

        void Class_1_dtor(godot_object *p_instance, void *p_method_data, void *_p_user_data)
    ;
        godot_variant Class_1_func__init(
            godot_object* p_instance,
            void* p_method_data,
            void* _p_user_data,
            int p_num_args,
            godot_variant** p_args);
        godot_variant Class_1_func_diamond_dom(
            godot_object* p_instance,
            void* p_method_data,
            void* _p_user_data,
            int p_num_args,
            godot_variant** p_args);
        godot_variant Class_1_func_call_method(
            godot_object* p_instance,
            void* p_method_data,
            void* _p_user_data,
            int p_num_args,
            godot_variant** p_args);
        godot_variant Class_1_func_called_method(
            godot_object* p_instance,
            void* p_method_data,
            void* _p_user_data,
            int p_num_args,
            godot_variant** p_args);

        void *Class_3_ctor(godot_object *p_instance, void *p_method_data)
    ;

        void Class_3_dtor(godot_object *p_instance, void *p_method_data, void *_p_user_data)
    ;
        godot_variant Class_3_func__init(
            godot_object* p_instance,
            void* p_method_data,
            void* _p_user_data,
            int p_num_args,
            godot_variant** p_args);
        godot_variant Class_3_func_method1(
            godot_object* p_instance,
            void* p_method_data,
            void* _p_user_data,
            int p_num_args,
            godot_variant** p_args);
        godot_variant Class_3_func_method2(
            godot_object* p_instance,
            void* p_method_data,
            void* _p_user_data,
            int p_num_args,
            godot_variant** p_args);

                #endif
            