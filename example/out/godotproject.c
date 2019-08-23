
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
    
            godot_variant Class_1_get_member2(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            ) {
                struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t*)_p_user_data;
                godot_variant value;
                api10->godot_variant_new_copy(&value, &p_user_data->member2);
                return value;
            }

            void Class_1_set_member2(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            ) {
                struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t*)_p_user_data;
                api10->godot_variant_new_copy(&p_user_data->member2, p_value);
            }
        
            godot_variant Class_1_get_member1(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            ) {
                struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t*)_p_user_data;
                godot_variant value;
                api10->godot_variant_new_copy(&value, &p_user_data->member1);
                return value;
            }

            void Class_1_set_member1(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            ) {
                struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t*)_p_user_data;
                api10->godot_variant_new_copy(&p_user_data->member1, p_value);
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
            api10->godot_variant_new_copy(&p_user_data->member1, &Class_1__init_constants[0]);
                    api10->godot_variant_new_copy(&p_user_data->member2, &Class_1__init_constants[1]);
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
            godot_variant Class_1_func_diamond_dom(
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
api11->godot_variant_evaluate(8, p_args[0], &Class_1_diamond_dom_constants[0], &stack[1], &__flag);
            api10->godot_variant_new_copy(p_args[0], &stack[1]);
        api11->godot_variant_evaluate(0, p_args[0], &Class_1_diamond_dom_constants[1], &stack[0], &__flag);
            __flag = api10->godot_variant_as_bool(&stack[0]);
            if (__flag) goto _32;
            goto _20;
        _20:
api11->godot_variant_evaluate(8, p_args[0], &Class_1_diamond_dom_constants[2], &stack[1], &__flag);
            api10->godot_variant_new_copy(p_args[0], &stack[1]);
        goto _44;
_44:
api11->godot_variant_evaluate(8, p_args[0], &Class_1_diamond_dom_constants[4], &stack[1], &__flag);
            api10->godot_variant_new_copy(p_args[0], &stack[1]);
                    api10->godot_variant_new_copy(&__return_value, p_args[0]);        
        goto __exit;
__exit:
            api10->godot_variant_destroy(&stack[0]);
                    api10->godot_variant_destroy(&stack[1]);
                    return __return_value;
        _32:
api11->godot_variant_evaluate(8, p_args[0], &Class_1_diamond_dom_constants[3], &stack[1], &__flag);
            api10->godot_variant_new_copy(p_args[0], &stack[1]);
        goto _44;
        }
            godot_variant Class_1_func_call_method(
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
                    if (0 == Class_1_call_method_constants_initialized) {
                        {
                    uint8_t data[] = { 2,0,0,0,1,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1_call_method_constants[0], data, 8, 2, true);
                }
                            Class_1_call_method_constants_initialized = 1;            
            }
                    godot_variant stack[1];
        __entry:
// DEFINE 67108864;
// DEFINE 100663296;
            api10->godot_variant_new_nil(&stack[0]);
        goto _0;
_0:
            {
                        godot_variant *args[] = { &Class_1_call_method_constants[0], p_args[0] };
            stack[0] = p_user_data->__vtable->methods[3](p_instance, p_method_data, p_user_data, 2, args);
}
// OPCODE_END
goto __exit;
__exit:
            api10->godot_variant_destroy(&stack[0]);
                    return __return_value;
                }
            godot_variant Class_1_func_called_method(
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
                    if (0 == Class_1_called_method_constants_initialized) {
                        {
                    uint8_t data[] = { 2,0,0,0,1,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1_called_method_constants[0], data, 8, 2, true);
                }
                            Class_1_called_method_constants_initialized = 1;            
            }
                    godot_variant stack[2];
        __entry:
// DEFINE 67108864;
// DEFINE 100663296;
// DEFINE 100663297;
            api10->godot_variant_new_nil(&stack[0]);
                    api10->godot_variant_new_nil(&stack[1]);
        goto _0;
_0:
            api10->godot_variant_new_copy(p_args[1], &Class_1_called_method_constants[0]);
        api11->godot_variant_evaluate(8, p_args[0], p_args[1], &stack[0], &__flag);
            api10->godot_variant_new_copy(&__return_value, &stack[0]);        
        goto __exit;
__exit:
            api10->godot_variant_destroy(&stack[0]);
                    api10->godot_variant_destroy(&stack[1]);
                    return __return_value;
                }
    
        void Class_1_vtable_init() {
            vtable_init(&Class_1_vtable, 
                        &vtable, 
                        2, 
                        4,
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
                "diamond_dom",
                Class_1_func_diamond_dom,
                (void*)0);
        
            VTABLE_METHOD(Class_1_vtable, 
                2,
                "call_method",
                Class_1_func_call_method,
                (void*)0);
        
            VTABLE_METHOD(Class_1_vtable, 
                3,
                "called_method",
                Class_1_func_called_method,
                (void*)0);
        
        }
    
        void *Class_3_ctor(godot_object *p_instance, void *p_method_data)
    {
            struct Class_3_struct_t *user_data = api10->godot_alloc(sizeof(struct Class_3_struct_t));
            user_data->__vtable = &Class_3_vtable;
            api10->godot_variant_new_object(&user_data->__self, p_instance);
        
            Class_3_func__init(
                p_instance,
                (void *)0,
                user_data,
                0,
                (void*)0);
        
            return user_data;
        }
    
        void Class_3_dtor(godot_object *p_instance, void *p_method_data, void *_p_user_data)
    
        {
            struct Class_3_struct_t *p_user_data = (struct Class_3_struct_t*)_p_user_data;
            api10->godot_variant_destroy(&p_user_data->__self);
            api10->godot_free(p_user_data);
        }
            godot_variant Class_3_func__init(
            godot_object* p_instance,
            void* p_method_data,
            void* _p_user_data,
            int p_num_args,
            godot_variant** p_args)        {   
            struct Class_3_struct_t *p_user_data = (struct Class_3_struct_t*)_p_user_data;
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
            void* _p_user_data,
            int p_num_args,
            godot_variant** p_args)        {   
            struct Class_3_struct_t *p_user_data = (struct Class_3_struct_t*)_p_user_data;
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
        goto __exit;
__exit:
            api10->godot_variant_destroy(&stack[0]);
                    return __return_value;
                }
            godot_variant Class_3_func_method2(
            godot_object* p_instance,
            void* p_method_data,
            void* _p_user_data,
            int p_num_args,
            godot_variant** p_args)        {   
            struct Class_3_struct_t *p_user_data = (struct Class_3_struct_t*)_p_user_data;
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
                "diamond_dom",
                Class_1_func_diamond_dom,
                (void*)0);
        
            VTABLE_METHOD(Class_3_vtable, 
                2,
                "call_method",
                Class_1_func_call_method,
                (void*)0);
        
            VTABLE_METHOD(Class_3_vtable, 
                3,
                "called_method",
                Class_1_func_called_method,
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
    
            void GDN_EXPORT GD2C_gdnative_init(godot_gdnative_init_options *p_options) {
                api10 = p_options->api_struct;
                
                const godot_gdnative_api_struct *extension = api10->next;
                while (extension) {
                    if (extension->version.major == 1 && extension->version.minor == 1) {
                        api11 = (const godot_gdnative_core_1_1_api_struct*)extension;
                    }
                    extension = extension->next;
                }

                for (int i = 0; i < api10->num_extensions; ++i) {
                    switch (api10->extensions[i]->type) {
                        case GDNATIVE_EXT_NATIVESCRIPT: {
                            extension = api10->extensions[i];
                            nativescript10 = (godot_gdnative_ext_nativescript_api_struct*)extension;
                            while (extension) {
                                if (extension->version.major == 1 && extension->version.minor == 1) {
                                    nativescript11 = (const godot_gdnative_ext_nativescript_1_1_api_struct*)extension;
                                }
                                extension = extension->next;
                            }
                        }; break;
                        
                        default:
                            break;
                    }
                }

                api10->godot_variant_new_nil(&__nil);
            }
        
        
            void GDN_EXPORT GD2C_gdnative_terminate(godot_gdnative_terminate_options *p_options) {
                api10->godot_variant_destroy(&__nil);
        if (0 != Class_1_constants_initialized) {
api10->godot_variant_destroy(&Class_1_constants[0]);
api10->godot_variant_destroy(&Class_1_constants[1]);
}
if (0 != Class_1__init_constants_initialized) {
api10->godot_variant_destroy(&Class_1__init_constants[0]);
api10->godot_variant_destroy(&Class_1__init_constants[1]);
api10->godot_variant_destroy(&Class_1__init_constants[2]);
api10->godot_variant_destroy(&Class_1__init_constants[3]);
}
if (0 != Class_1_diamond_dom_constants_initialized) {
api10->godot_variant_destroy(&Class_1_diamond_dom_constants[0]);
api10->godot_variant_destroy(&Class_1_diamond_dom_constants[1]);
api10->godot_variant_destroy(&Class_1_diamond_dom_constants[2]);
api10->godot_variant_destroy(&Class_1_diamond_dom_constants[3]);
api10->godot_variant_destroy(&Class_1_diamond_dom_constants[4]);
}
if (0 != Class_1_call_method_constants_initialized) {
api10->godot_variant_destroy(&Class_1_call_method_constants[0]);
}
if (0 != Class_1_called_method_constants_initialized) {
api10->godot_variant_destroy(&Class_1_called_method_constants[0]);
}
if (0 != Class_3_method1_constants_initialized) {
api10->godot_variant_destroy(&Class_3_method1_constants[0]);
}
}

            void GDN_EXPORT GD2C_nativescript_init(void *p_handle) {
        
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
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "_init", attributes, method);
                    }
                
                    {
                        godot_instance_method method = { NULL, NULL, NULL };
                        method.method = &Class_1_func_diamond_dom;
                        godot_method_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "diamond_dom", attributes, method);
                    }
                
                    {
                        godot_instance_method method = { NULL, NULL, NULL };
                        method.method = &Class_1_func_call_method;
                        godot_method_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "call_method", attributes, method);
                    }
                
                    {
                        godot_instance_method method = { NULL, NULL, NULL };
                        method.method = &Class_1_func_called_method;
                        godot_method_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "called_method", attributes, method);
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
                        godot_property_set_func setter = { NULL, NULL, NULL };
                        setter.set_func = &Class_1_set_member2;
                        godot_property_get_func getter = { NULL, NULL, NULL };
                        getter.get_func = &Class_1_get_member2;
                        godot_property_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_property(p_handle, "member2", "member2", &attributes, setter, getter);
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
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_3", "_init", attributes, method);
                    }
                
                    {
                        godot_instance_method method = { NULL, NULL, NULL };
                        method.method = &Class_1_func_diamond_dom;
                        godot_method_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_3", "diamond_dom", attributes, method);
                    }
                
                    {
                        godot_instance_method method = { NULL, NULL, NULL };
                        method.method = &Class_1_func_call_method;
                        godot_method_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_3", "call_method", attributes, method);
                    }
                
                    {
                        godot_instance_method method = { NULL, NULL, NULL };
                        method.method = &Class_1_func_called_method;
                        godot_method_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_3", "called_method", attributes, method);
                    }
                
                    {
                        godot_instance_method method = { NULL, NULL, NULL };
                        method.method = &Class_3_func_method1;
                        godot_method_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_3", "method1", attributes, method);
                    }
                
                    {
                        godot_instance_method method = { NULL, NULL, NULL };
                        method.method = &Class_3_func_method2;
                        godot_method_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_3", "method2", attributes, method);
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
                
            }
        