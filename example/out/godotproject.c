
                #include "gd2c.h"
                #include "godotproject.h"
            
        godot_variant Class_1_func__init(
            godot_object* p_instance,
            void* p_method_data,
            struct Class_1_struct_t* p_user_data,
            int p_num_args,
            godot_variant** p_args)
        {   
            godot_bool __flag;   
            godot_variant_call_error __error;
            godot_variant __return_value;
            api10->godot_variant_new_nil(&__return_value);
        
            if (0 == Class_1__init_constants_initialized) {
                        {
                    uint8_t data[] = { 2,0,0,0,0,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1__init_constants[0], data, 8, 2, true);
                }
                            {
                    uint8_t data[] = { 4,0,0,0,6,0,0,0,115,116,114,105,110,103,0,0 };
                    gd2c->godot_variant_decode(&Class_1__init_constants[1], data, 16, 4, true);
                }
                            {
                    uint8_t data[] = { 2,0,0,0,1,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1__init_constants[2], data, 8, 2, true);
                }
                            {
                    uint8_t data[] = { 2,0,0,0,2,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1__init_constants[3], data, 8, 2, true);
                }
            
                Class_1__init_constants_initialized = 1;            
            }
        
            godot_variant stack[4];
        __entry:
// DEFINE 67108864;
// DEFINE 67108865;
// DEFINE 67108866;
// DEFINE 67108867;

            api10->godot_variant_new_nil(&stack[0]);
        
            api10->godot_variant_new_nil(&stack[1]);
        
            api10->godot_variant_new_nil(&stack[2]);
        
            api10->godot_variant_new_nil(&stack[3]);
        goto _0;
_0:

            api10->godot_variant_new_copy("memb#0", &Class_1__init_constants[0]);
        
            api10->godot_variant_new_copy("memb#1", &Class_1__init_constants[1]);
        
            api10->godot_variant_new_copy(&stack[0], &Class_1__init_constants[2]);
        
            api10->godot_variant_new_copy(&stack[1], &Class_1__init_constants[3]);
        // OPCODE_END
goto __exit;
__exit:

            api10->godot_variant_destroy(&stack[0]);
        
            api10->godot_variant_destroy(&stack[1]);
        
            api10->godot_variant_destroy(&stack[2]);
        
            api10->godot_variant_destroy(&stack[3]);
        
            return __return_value;
        
        }
    
        godot_variant Class_1_func_if_else(
            godot_object* p_instance,
            void* p_method_data,
            struct Class_1_struct_t* p_user_data,
            int p_num_args,
            godot_variant** p_args)
        {   
            godot_bool __flag;   
            godot_variant_call_error __error;
            godot_variant __return_value;
            api10->godot_variant_new_nil(&__return_value);
        
            if (0 == Class_1_if_else_constants_initialized) {
                        {
                    uint8_t data[] = { 2,0,0,0,0,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1_if_else_constants[0], data, 8, 2, true);
                }
                            {
                    uint8_t data[] = { 2,0,0,0,1,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1_if_else_constants[1], data, 8, 2, true);
                }
                            {
                    uint8_t data[] = { 2,0,0,0,2,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1_if_else_constants[2], data, 8, 2, true);
                }
                            {
                    uint8_t data[] = { 2,0,0,0,3,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1_if_else_constants[3], data, 8, 2, true);
                }
                            {
                    uint8_t data[] = { 2,0,0,0,255,255,255,255 };
                    gd2c->godot_variant_decode(&Class_1_if_else_constants[4], data, 8, 2, true);
                }
            
                Class_1_if_else_constants_initialized = 1;            
            }
        
            godot_variant stack[2];
        __entry:
// DEFINE 67108864;
// DEFINE 67108865;
// DEFINE 67108866;
// DEFINE 67108867;
// DEFINE 67108868;
// DEFINE 100663296;

            api10->godot_variant_new_nil(&stack[0]);
        
            api10->godot_variant_new_nil(&stack[1]);
        goto _0;
_0:

            api11->godot_variant_evaluate(4, 
                p_args[0], 
                &Class_1_if_else_constants[0], 
                &stack[0], 
                &__flag);
        
            __flag = api10->godot_variant_as_bool(&stack[0]);
            if (__flag) goto _32;
            goto _10;
        _32:

            api10->godot_variant_new_copy(p_args[0], &Class_1_if_else_constants[4]);
        goto _39;
_39:

            api10->godot_variant_new_copy(&__return_value, p_args[0]);
            // next statement should be a goto __exit;            
        goto __exit;
__exit:

            api10->godot_variant_destroy(&stack[0]);
        
            api10->godot_variant_destroy(&stack[1]);
        
            return __return_value;
        _10:

            api10->godot_variant_new_copy(p_args[0], &Class_1_if_else_constants[1]);
        
            api11->godot_variant_evaluate(0, 
                p_args[0], 
                &Class_1_if_else_constants[2], 
                &stack[0], 
                &__flag);
        
            __flag = api10->godot_variant_as_bool(&stack[0]);
            if (__flag) goto _30;
            goto _25;
        _30:
goto _39;
_25:

            api10->godot_variant_new_copy(p_args[0], &Class_1_if_else_constants[3]);
        goto _30;

        }
    
        godot_variant Class_1_func_diamond_dom(
            godot_object* p_instance,
            void* p_method_data,
            struct Class_1_struct_t* p_user_data,
            int p_num_args,
            godot_variant** p_args)
        {   
            godot_bool __flag;   
            godot_variant_call_error __error;
            godot_variant __return_value;
            api10->godot_variant_new_nil(&__return_value);
        
            if (0 == Class_1_diamond_dom_constants_initialized) {
                        {
                    uint8_t data[] = { 2,0,0,0,1,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1_diamond_dom_constants[0], data, 8, 2, true);
                }
                            {
                    uint8_t data[] = { 2,0,0,0,2,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1_diamond_dom_constants[1], data, 8, 2, true);
                }
                            {
                    uint8_t data[] = { 2,0,0,0,3,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1_diamond_dom_constants[2], data, 8, 2, true);
                }
                            {
                    uint8_t data[] = { 2,0,0,0,4,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1_diamond_dom_constants[3], data, 8, 2, true);
                }
                            {
                    uint8_t data[] = { 2,0,0,0,5,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1_diamond_dom_constants[4], data, 8, 2, true);
                }
            
                Class_1_diamond_dom_constants_initialized = 1;            
            }
        
            godot_variant stack[2];
        __entry:
// DEFINE 67108864;
// DEFINE 67108865;
// DEFINE 67108866;
// DEFINE 67108867;
// DEFINE 67108868;
// DEFINE 100663296;

            api10->godot_variant_new_nil(&stack[0]);
        
            api10->godot_variant_new_nil(&stack[1]);
        goto _0;
_0:

            api11->godot_variant_evaluate(8, 
                p_args[0], 
                &Class_1_diamond_dom_constants[0], 
                &stack[1], 
                &__flag);
        
            api10->godot_variant_new_copy(p_args[0], &stack[1]);
        
            api11->godot_variant_evaluate(0, 
                p_args[0], 
                &Class_1_diamond_dom_constants[1], 
                &stack[0], 
                &__flag);
        
            __flag = api10->godot_variant_as_bool(&stack[0]);
            if (__flag) goto _32;
            goto _20;
        _32:

            api11->godot_variant_evaluate(8, 
                p_args[0], 
                &Class_1_diamond_dom_constants[3], 
                &stack[1], 
                &__flag);
        
            api10->godot_variant_new_copy(p_args[0], &stack[1]);
        goto _44;
_44:

            api11->godot_variant_evaluate(8, 
                p_args[0], 
                &Class_1_diamond_dom_constants[4], 
                &stack[1], 
                &__flag);
        
            api10->godot_variant_new_copy(p_args[0], &stack[1]);
        
            api10->godot_variant_new_copy(&__return_value, p_args[0]);
            // next statement should be a goto __exit;            
        goto __exit;
__exit:

            api10->godot_variant_destroy(&stack[0]);
        
            api10->godot_variant_destroy(&stack[1]);
        
            return __return_value;
        _20:

            api11->godot_variant_evaluate(8, 
                p_args[0], 
                &Class_1_diamond_dom_constants[2], 
                &stack[1], 
                &__flag);
        
            api10->godot_variant_new_copy(p_args[0], &stack[1]);
        goto _44;

        }
    
        godot_variant Class_1_func_if_not_nested(
            godot_object* p_instance,
            void* p_method_data,
            struct Class_1_struct_t* p_user_data,
            int p_num_args,
            godot_variant** p_args)
        {   
            godot_bool __flag;   
            godot_variant_call_error __error;
            godot_variant __return_value;
            api10->godot_variant_new_nil(&__return_value);
        
            if (0 == Class_1_if_not_nested_constants_initialized) {
                        {
                    uint8_t data[] = { 2,0,0,0,0,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1_if_not_nested_constants[0], data, 8, 2, true);
                }
                            {
                    uint8_t data[] = { 2,0,0,0,1,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1_if_not_nested_constants[1], data, 8, 2, true);
                }
            
                Class_1_if_not_nested_constants_initialized = 1;            
            }
        
            godot_variant stack[2];
        __entry:
// DEFINE 67108864;
// DEFINE 67108865;
// DEFINE 100663296;

            api10->godot_variant_new_nil(&stack[0]);
        
            api10->godot_variant_new_nil(&stack[1]);
        goto _0;
_0:

            api11->godot_variant_evaluate(4, 
                p_args[0], 
                &Class_1_if_not_nested_constants[0], 
                &stack[0], 
                &__flag);
        
            __flag = api10->godot_variant_as_bool(&stack[0]);
            if (__flag) goto _15;
            goto _10;
        _15:

            api10->godot_variant_new_copy(&__return_value, p_args[0]);
            // next statement should be a goto __exit;            
        goto __exit;
__exit:

            api10->godot_variant_destroy(&stack[0]);
        
            api10->godot_variant_destroy(&stack[1]);
        
            return __return_value;
        _10:

            api10->godot_variant_new_copy(p_args[0], &Class_1_if_not_nested_constants[1]);
        goto _15;

        }
    
        godot_variant Class_1_func_method1(
            godot_object* p_instance,
            void* p_method_data,
            struct Class_1_struct_t* p_user_data,
            int p_num_args,
            godot_variant** p_args)
        {   
            godot_bool __flag;   
            godot_variant_call_error __error;
            godot_variant __return_value;
            api10->godot_variant_new_nil(&__return_value);
        
            if (0 == Class_1_method1_constants_initialized) {
                        {
                    uint8_t data[] = { 3,0,0,0,0,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1_method1_constants[0], data, 8, 3, true);
                }
            
                Class_1_method1_constants_initialized = 1;            
            }
        
            godot_variant stack[1];
        __entry:
// DEFINE 67108864;
// DEFINE 100663296;
// DEFINE 100663297;

            api10->godot_variant_new_nil(&stack[0]);
        goto _0;
_0:

            api10->godot_variant_new_copy(&__return_value, &Class_1_method1_constants[0]);
            // next statement should be a goto __exit;            
        goto __exit;
__exit:

            api10->godot_variant_destroy(&stack[0]);
        
            return __return_value;
        
        }
    
        void Class_1_vtable_init() {
            vtable_init(&Class_1_vtable, 
                        &vtable, 
                        2, 
                        5,
                        (void *)0,
                        Class_1_vtable_methods,
                        Class_1_vtable_method_names);
    
            VTABLE_METHOD(Class_1_vtable, 
                0,
                "_init",
                Class_1_func__init,
                (void*)0);
        
            VTABLE_METHOD(Class_1_vtable, 
                1,
                "if_else",
                Class_1_func_if_else,
                (void*)0);
        
            VTABLE_METHOD(Class_1_vtable, 
                2,
                "diamond_dom",
                Class_1_func_diamond_dom,
                (void*)0);
        
            VTABLE_METHOD(Class_1_vtable, 
                3,
                "if_not_nested",
                Class_1_func_if_not_nested,
                (void*)0);
        
            VTABLE_METHOD(Class_1_vtable, 
                4,
                "method1",
                Class_1_func_method1,
                (void*)0);
        
        }
    
        godot_variant Class_3_func__init(
            godot_object* p_instance,
            void* p_method_data,
            struct Class_3_struct_t* p_user_data,
            int p_num_args,
            godot_variant** p_args)
        {   
            godot_bool __flag;   
            godot_variant_call_error __error;
            godot_variant __return_value;
            api10->godot_variant_new_nil(&__return_value);
        
            godot_variant stack[1];
        __entry:

            api10->godot_variant_new_nil(&stack[0]);
        goto _0;
_0:
// OPCODE_END
goto __exit;
__exit:

            api10->godot_variant_destroy(&stack[0]);
        
            return __return_value;
        
        }
    
        godot_variant Class_3_func_method2(
            godot_object* p_instance,
            void* p_method_data,
            struct Class_3_struct_t* p_user_data,
            int p_num_args,
            godot_variant** p_args)
        {   
            godot_bool __flag;   
            godot_variant_call_error __error;
            godot_variant __return_value;
            api10->godot_variant_new_nil(&__return_value);
        
            godot_variant stack[1];
        __entry:

            api10->godot_variant_new_nil(&stack[0]);
        goto _0;
_0:
// OPCODE_END
goto __exit;
__exit:

            api10->godot_variant_destroy(&stack[0]);
        
            return __return_value;
        
        }
    
        godot_variant Class_3_func_method1(
            godot_object* p_instance,
            void* p_method_data,
            struct Class_3_struct_t* p_user_data,
            int p_num_args,
            godot_variant** p_args)
        {   
            godot_bool __flag;   
            godot_variant_call_error __error;
            godot_variant __return_value;
            api10->godot_variant_new_nil(&__return_value);
        
            if (0 == Class_3_method1_constants_initialized) {
                        {
                    uint8_t data[] = { 3,0,0,0,0,0,0,0 };
                    gd2c->godot_variant_decode(&Class_3_method1_constants[0], data, 8, 3, true);
                }
            
                Class_3_method1_constants_initialized = 1;            
            }
        
            godot_variant stack[1];
        __entry:
// DEFINE 67108864;
// DEFINE 100663296;
// DEFINE 100663297;

            api10->godot_variant_new_nil(&stack[0]);
        goto _0;
_0:

            api10->godot_variant_new_copy(&__return_value, &Class_3_method1_constants[0]);
            // next statement should be a goto __exit;            
        goto __exit;
__exit:

            api10->godot_variant_destroy(&stack[0]);
        
            return __return_value;
        
        }
    
        void Class_3_vtable_init() {
            vtable_init(&Class_3_vtable, 
                        &Class_1_vtable, 
                        4, 
                        6,
                        (void *)0,
                        Class_3_vtable_methods,
                        Class_3_vtable_method_names);
    
            VTABLE_METHOD(Class_3_vtable, 
                0,
                "_init",
                Class_3_func__init,
                (void*)0);
        
            VTABLE_METHOD(Class_3_vtable, 
                1,
                "if_else",
                Class_1_func_if_else,
                (void*)0);
        
            VTABLE_METHOD(Class_3_vtable, 
                2,
                "diamond_dom",
                Class_1_func_diamond_dom,
                (void*)0);
        
            VTABLE_METHOD(Class_3_vtable, 
                3,
                "if_not_nested",
                Class_1_func_if_not_nested,
                (void*)0);
        
            VTABLE_METHOD(Class_3_vtable, 
                4,
                "method1",
                Class_3_func_method1,
                (void*)0);
        
            VTABLE_METHOD(Class_3_vtable, 
                5,
                "method2",
                Class_3_func_method2,
                (void*)0);
        
        }
    
            void GDN_EXPORT GD2C__nativescript_init(void *p_handle) {
        
                {
                    godot_instance_create_func create = { NULL, NULL, NULL };
                    create.create_func = Class_1_ctor;
                    godot_instance_destroy_func destroy = { NULL, NULL, NULL };
                    destroy.destroy_func = Class_1_dtor;
                    nativescript10->godot_nativescript_register_class(p_handle, "Class_1", "Node2D", create, destroy);
                }
            
                    {
                        godot_instance_method method = { NULL, NULL, NULL };
                        method.method = &Class_1_func__init;
                        godot_method_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "_init", &attributes, method);
                    }
                
                    {
                        godot_instance_method method = { NULL, NULL, NULL };
                        method.method = &Class_1_func_if_else;
                        godot_method_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "if_else", &attributes, method);
                    }
                
                    {
                        godot_instance_method method = { NULL, NULL, NULL };
                        method.method = &Class_1_func_diamond_dom;
                        godot_method_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "diamond_dom", &attributes, method);
                    }
                
                    {
                        godot_instance_method method = { NULL, NULL, NULL };
                        method.method = &Class_1_func_if_not_nested;
                        godot_method_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "if_not_nested", &attributes, method);
                    }
                
                    {
                        godot_instance_method method = { NULL, NULL, NULL };
                        method.method = &Class_1_func_method1;
                        godot_method_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "method1", &attributes, method);
                    }
                
                    {
                        godot_string name = api10->godot_string_chars_to_utf8("signal1");
                        godot_signal signal = {
                            name,
                            0,
                            NULL,
                            0,
                            NULL
                        };
                        nativescript10->godot_nativescript_register_signal(p_handle, "signal1", &signal);
                    }
                
                    {
                        godot_string name = api10->godot_string_chars_to_utf8("signal2");
                        godot_signal signal = {
                            name,
                            0,
                            NULL,
                            0,
                            NULL
                        };
                        nativescript10->godot_nativescript_register_signal(p_handle, "signal2", &signal);
                    }
                
                    {
                        godot_property_set_func setter = { NULL, NULL, NULL };
                        setter.set_func = &Class_1_set_member1;
                        godot_property_get_func getter = { NULL, NULL, NULL };
                        getter.get_func = &Class_1_get_member1;
                        godot_property_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_property(p_handle, "member1", "member1", &attributes, setter, getter);
                    }
                
                    {
                        godot_property_set_func setter = { NULL, NULL, NULL };
                        setter.set_func = &Class_1_set_member2;
                        godot_property_get_func getter = { NULL, NULL, NULL };
                        getter.get_func = &Class_1_get_member2;
                        godot_property_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_property(p_handle, "member2", "member2", &attributes, setter, getter);
                    }
                
                {
                    godot_instance_create_func create = { NULL, NULL, NULL };
                    create.create_func = Class_3_ctor;
                    godot_instance_destroy_func destroy = { NULL, NULL, NULL };
                    destroy.destroy_func = Class_3_dtor;
                    nativescript10->godot_nativescript_register_class(p_handle, "Class_3", "Node2D", create, destroy);
                }
            
                    {
                        godot_instance_method method = { NULL, NULL, NULL };
                        method.method = &Class_3_func__init;
                        godot_method_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_3", "_init", &attributes, method);
                    }
                
                    {
                        godot_instance_method method = { NULL, NULL, NULL };
                        method.method = &Class_1_func_if_else;
                        godot_method_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_3", "if_else", &attributes, method);
                    }
                
                    {
                        godot_instance_method method = { NULL, NULL, NULL };
                        method.method = &Class_1_func_diamond_dom;
                        godot_method_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_3", "diamond_dom", &attributes, method);
                    }
                
                    {
                        godot_instance_method method = { NULL, NULL, NULL };
                        method.method = &Class_1_func_if_not_nested;
                        godot_method_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_3", "if_not_nested", &attributes, method);
                    }
                
                    {
                        godot_instance_method method = { NULL, NULL, NULL };
                        method.method = &Class_3_func_method1;
                        godot_method_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_3", "method1", &attributes, method);
                    }
                
                    {
                        godot_instance_method method = { NULL, NULL, NULL };
                        method.method = &Class_3_func_method2;
                        godot_method_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_3", "method2", &attributes, method);
                    }
                
                    {
                        godot_string name = api10->godot_string_chars_to_utf8("signal1");
                        godot_signal signal = {
                            name,
                            0,
                            NULL,
                            0,
                            NULL
                        };
                        nativescript10->godot_nativescript_register_signal(p_handle, "signal1", &signal);
                    }
                
                    {
                        godot_string name = api10->godot_string_chars_to_utf8("signal2");
                        godot_signal signal = {
                            name,
                            0,
                            NULL,
                            0,
                            NULL
                        };
                        nativescript10->godot_nativescript_register_signal(p_handle, "signal2", &signal);
                    }
                
            }
        