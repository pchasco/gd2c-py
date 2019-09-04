
                #include "gd2c.h"
                #include "godotproject.h"
            
        void *Class_1_ctor(godot_object *p_instance, void *p_method_data)
    {
            struct Class_1_struct_t *user_data = api10->godot_alloc(sizeof(struct Class_1_struct_t));
            user_data->__vtable = &Class_1_vtable;
            api10->godot_variant_new_object(&user_data->__self, p_instance);
        
            Class_1_func__init(
                p_instance,
                (void *)0,
                user_data,
                0,
                (void*)0);
        
            return user_data;
        }
    
        void Class_1_dtor(godot_object *p_instance, void *p_method_data, void *_p_user_data)
    
        {
            struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t*)_p_user_data;
            api10->godot_variant_destroy(&p_user_data->__self);
            api10->godot_free(p_user_data);
        }
            godot_variant Class_1_func__init(
            godot_object* p_instance,
            void* p_method_data,
            void* _p_user_data,
            int p_num_args,
            godot_variant** p_args)        {   
            struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t*)_p_user_data;
            godot_bool __flag;   
            godot_variant_call_error __error;
            godot_variant __return_value;
            api10->godot_variant_new_nil(&__return_value);
                    godot_variant stack[1];
        _entry:
_0:
// OPCODE_END
_exit:
        }
            godot_variant Class_1_func_nested_loop(
            godot_object* p_instance,
            void* p_method_data,
            void* _p_user_data,
            int p_num_args,
            godot_variant** p_args)        {   
            struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t*)_p_user_data;
            godot_bool __flag;   
            godot_variant_call_error __error;
            godot_variant __return_value;
            api10->godot_variant_new_nil(&__return_value);
                    if (0 == Class_1_nested_loop_constants_initialized) {
                        {
                    uint8_t data[] = { 2,0,0,0,0,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1_nested_loop_constants[0], data, 8, 2, true);
                }
                            {
                    uint8_t data[] = { 2,0,0,0,10,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1_nested_loop_constants[1], data, 8, 2, true);
                }
                            {
                    uint8_t data[] = { 2,0,0,0,1,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1_nested_loop_constants[2], data, 8, 2, true);
                }
                            Class_1_nested_loop_constants_initialized = 1;            
            }
                    godot_variant stack[4];
        _entry:
// DEFINE 67108864;
// DEFINE 67108865;
// DEFINE 67108866;
_0:
