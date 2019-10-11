                #ifndef __GD2C_GODOTPROJECT__
                #define __GD2C_GODOTPROJECT__            
            
                #include "gd2c.h"

                void print_variant(godot_variant *v) {
                    godot_string s = api10->godot_variant_as_string(v);
                    api10->godot_print(&s);
                    api10->godot_string_destroy(&s);
                }

                void register_classdb_global(godot_variant *p_variant, const char *p_name, int p_name_len) {
                    godot_string s;
                    godot_string_name sn;
                    api10->godot_string_new(&s);
                    api10->godot_string_parse_utf8_with_len(&s, p_name, p_name_len);
                    api10->godot_string_name_new(&sn, &s);
                    gd2c10->get_gdscript_nativeclass(p_variant, &sn);
                    api10->godot_string_destroy(&s);
                    api10->godot_string_name_destroy(&sn);
                }

                    method_wrapper_ptr_t Class_1_vtable_wrappers[1];
        variant_method_ptr_t Class_1_vtable_methods[1];
        godot_string Class_1_vtable_method_names[1];
        struct vtable_t Class_1_vtable;
        struct Class_1_struct_t {
            union {
                struct class_base_t;
            };
            };
    int Class_1_constants_initialized = 0;
            godot_variant Class_1_constants[1];
                                        godot_string_name Class_1__init_string_names[2];
                                godot_string Class_1__init_strings[2];
                                godot_variant Class_1__init_local_const[2];
int Class_1__init_local_const_initialized = 0;
        method_wrapper_ptr_t Class_3_vtable_wrappers[1];
        variant_method_ptr_t Class_3_vtable_methods[1];
        godot_string Class_3_vtable_method_names[1];
        struct vtable_t Class_3_vtable;
        struct Class_3_struct_t {
            union {
                struct Class_1_struct_t;
            };
            };
    int Class_3_constants_initialized = 0;
            godot_variant Class_3_constants[1];
                                        godot_string_name Class_3__init_string_names[3];
                                godot_string Class_3__init_strings[3];
                                godot_variant Class_3__init_local_const[3];
int Class_3__init_local_const_initialized = 0;
        void *Class_1_ctor(godot_object *p_instance, void *p_method_data)
    ;
        void Class_1_dtor(godot_object *p_instance, void *p_method_data, void *_p_user_data)
    ;
        godot_variant Class_1__init_func(             godot_object* p_instance,             void* p_method_data,             void* _p_user_data,             int p_num_args,             godot_variant** p_args);
        void *Class_3_ctor(godot_object *p_instance, void *p_method_data)
    ;
        void Class_3_dtor(godot_object *p_instance, void *p_method_data, void *_p_user_data)
    ;
        godot_variant Class_3__init_func(             godot_object* p_instance,             void* p_method_data,             void* _p_user_data,             int p_num_args,             godot_variant** p_args);
                #endif
            