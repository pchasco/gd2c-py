                #include "gd2c.h"
                #include "godotproject.h"
                    void *Class_1_ctor(godot_object *p_instance, void *p_method_data)
    {
            struct Class_1_struct_t *user_data = api10->godot_alloc(sizeof(struct Class_1_struct_t));
            user_data->__vtable = &Class_1_vtable;
            api10->godot_variant_new_object(&user_data->__self, p_instance);
                    Class_1__init_func(p_instance, (void *)0, user_data, 0, (void*)0);
                    return user_data;
        }
            void Class_1_dtor(godot_object *p_instance, void *p_method_data, void *_p_user_data)
            {
            struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t*)_p_user_data;
            api10->godot_variant_destroy(&p_user_data->__self);
            api10->godot_free(p_user_data);
        }
            godot_variant Class_1__init_func(             godot_object* p_instance,             void* p_method_data,             void* _p_user_data,             int p_num_args,             godot_variant** p_args)        {   
            struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t*)_p_user_data;
            godot_bool __flag;   
            godot_variant_call_error __error;
            godot_variant __return_value;
            api10->godot_variant_new_nil(&__return_value);
        goto _entry;
_entry:
goto _0;
_0:
goto _2;
_2:
goto _exit;
_exit:
goto _cleanup;
_cleanup:
            return __return_value;
        }
            godot_variant Class_1_godot_array_get_func(             godot_object* p_instance,             void* p_method_data,             void* _p_user_data,             int p_num_args,             godot_variant** p_args)        {   
            struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t*)_p_user_data;
            godot_bool __flag;   
            godot_variant_call_error __error;
            godot_variant __return_value;
            api10->godot_variant_new_nil(&__return_value);
                    if (0 == Class_1_godot_array_get_local_const_initialized) {
                        {
                    uint8_t data[] = { 2,0,0,0,0,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1_godot_array_get_local_const[0], data, 8, 2, true);
                }
                            Class_1_godot_array_get_local_const_initialized = 1;            
            }
        godot_variant st_83886081;
goto _entry;
_entry:
// <gd2c.bytecode.ParameterGDScriptOp object at 0x105d6b518>;
// DEFINE 67108864;
            api10->godot_variant_new_nil(&st_83886081);
        goto _0;
_0:
goto _2;
_2:
            {
                godot_int index = api10->godot_variant_as_int(&Class_1_godot_array_get_local_const[0]);
                godot_array arr = api10->godot_variant_as_array(p_args[0]);
                st_83886081 = api10->godot_array_get(&arr, index);
            }
                        api10->godot_variant_new_copy(&__return_value, &st_83886081);        
            goto _exit;
        _exit:
            api10->godot_variant_destroy(&st_83886081);
        goto _cleanup;
_cleanup:
            return __return_value;
        }
            godot_variant Class_1_nested_loop_func(             godot_object* p_instance,             void* p_method_data,             void* _p_user_data,             int p_num_args,             godot_variant** p_args)        {   
            struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t*)_p_user_data;
            godot_bool __flag;   
            godot_variant_call_error __error;
            godot_variant __return_value;
            api10->godot_variant_new_nil(&__return_value);
                    if (0 == Class_1_nested_loop_local_const_initialized) {
                        {
                    uint8_t data[] = { 2,0,0,0,0,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1_nested_loop_local_const[0], data, 8, 2, true);
                }
                            {
                    uint8_t data[] = { 2,0,0,0,10,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1_nested_loop_local_const[1], data, 8, 2, true);
                }
                            {
                    uint8_t data[] = { 2,0,0,0,1,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1_nested_loop_local_const[2], data, 8, 2, true);
                }
                            Class_1_nested_loop_local_const_initialized = 1;            
            }
        godot_variant st_100663296;
godot_variant st_83886081;
godot_variant st_100663297;
godot_variant st_83886082;
godot_variant st_83886083;
goto _entry;
_entry:
// DEFINE 67108864;
// DEFINE 67108865;
// DEFINE 67108866;
            api10->godot_variant_new_nil(&st_100663296);
                    api10->godot_variant_new_nil(&st_83886081);
                    api10->godot_variant_new_nil(&st_100663297);
                    api10->godot_variant_new_nil(&st_83886082);
                    api10->godot_variant_new_nil(&st_83886083);
        goto _0;
_0:
goto _2;
_2:
            api10->godot_variant_new_copy(&st_100663296, &Class_1_nested_loop_local_const[0]);
        goto _7;
_7:
api11->godot_variant_evaluate(2, &st_100663296, &Class_1_nested_loop_local_const[1], &st_83886081, &__flag);
            __flag = api10->godot_variant_as_bool(&st_83886081);
            if (__flag) goto _18;
            goto _15;
        _15:
goto _17;
_17:
goto _exit;
_exit:
            api10->godot_variant_destroy(&st_100663296);
                    api10->godot_variant_destroy(&st_83886081);
                    api10->godot_variant_destroy(&st_100663297);
                    api10->godot_variant_destroy(&st_83886082);
                    api10->godot_variant_destroy(&st_83886083);
        goto _cleanup;
_18:
            api10->godot_variant_new_copy(&st_100663297, &Class_1_nested_loop_local_const[0]);
        goto _23;
_23:
api11->godot_variant_evaluate(2, &st_100663297, &Class_1_nested_loop_local_const[1], &st_83886082, &__flag);
            __flag = api10->godot_variant_as_bool(&st_83886082);
            if (__flag) goto _43;
            goto _31;
        _43:
api11->godot_variant_evaluate(6, &st_100663297, &Class_1_nested_loop_local_const[2], &st_83886083, &__flag);
            api10->godot_variant_new_copy(&st_100663297, &st_83886083);
        goto _23;
_31:
goto _33;
_33:
api11->godot_variant_evaluate(6, &st_100663296, &Class_1_nested_loop_local_const[2], &st_83886083, &__flag);
            api10->godot_variant_new_copy(&st_100663296, &st_83886083);
        goto _7;
_cleanup:
            return __return_value;
        }
            godot_variant Class_1_with_defargs_func(             godot_object* p_instance,             void* p_method_data,             void* _p_user_data,             int p_num_args,             godot_variant** p_args)        {   
            struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t*)_p_user_data;
            godot_bool __flag;   
            godot_variant_call_error __error;
            godot_variant __return_value;
            api10->godot_variant_new_nil(&__return_value);
                    if (0 == Class_1_with_defargs_local_const_initialized) {
                        {
                    uint8_t data[] = { 2,0,0,0,1,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1_with_defargs_local_const[0], data, 8, 2, true);
                }
                            {
                    uint8_t data[] = { 2,0,0,0,2,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1_with_defargs_local_const[1], data, 8, 2, true);
                }
                            Class_1_with_defargs_local_const_initialized = 1;            
            }
        godot_variant st_83886083;
goto _entry;
_entry:
// <gd2c.bytecode.ParameterGDScriptOp object at 0x105d997f0>;
// <gd2c.bytecode.ParameterGDScriptOp object at 0x105d99a58>;
// <gd2c.bytecode.ParameterGDScriptOp object at 0x105d99a90>;
// DEFINE 67108864;
// DEFINE 67108865;
            api10->godot_variant_new_nil(&st_83886083);
        goto _0;
_0:
goto _2;
_2:
            int defarg = 3 - p_num_args;
            switch (defarg) {
                        case 0: goto _13;
                        case 1: goto _8;
                        default: goto _3;
        }
        _3:
            api10->godot_variant_new_copy(p_args[1], &Class_1_with_defargs_local_const[0]);
        goto _8;
_8:
            api10->godot_variant_new_copy(p_args[2], &Class_1_with_defargs_local_const[1]);
        goto _13;
_13:
api11->godot_variant_evaluate(6, p_args[0], p_args[1], &st_83886083, &__flag);
api11->godot_variant_evaluate(6, &st_83886083, p_args[2], &st_83886083, &__flag);
            api10->godot_variant_new_copy(&__return_value, &st_83886083);        
            goto _exit;
        _exit:
            api10->godot_variant_destroy(&st_83886083);
        goto _cleanup;
_cleanup:
            return __return_value;
        }
            godot_variant Class_1_godot_array_set_func(             godot_object* p_instance,             void* p_method_data,             void* _p_user_data,             int p_num_args,             godot_variant** p_args)        {   
            struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t*)_p_user_data;
            godot_bool __flag;   
            godot_variant_call_error __error;
            godot_variant __return_value;
            api10->godot_variant_new_nil(&__return_value);
                    if (0 == Class_1_godot_array_set_local_const_initialized) {
                        {
                    uint8_t data[] = { 2,0,0,0,0,0,0,0 };
                    gd2c->godot_variant_decode(&Class_1_godot_array_set_local_const[0], data, 8, 2, true);
                }
                            Class_1_godot_array_set_local_const_initialized = 1;            
            }
        goto _entry;
_entry:
// <gd2c.bytecode.ParameterGDScriptOp object at 0x105da30b8>;
// DEFINE 67108864;
goto _0;
_0:
goto _2;
_2:
            {
                godot_int index = api10->godot_variant_as_int(&Class_1_godot_array_set_local_const[0]);
                godot_array arr = api10->godot_variant_as_array(p_args[0]);
                api10->godot_array_set(&arr, index, &Class_1_godot_array_set_local_const[0]);
            }
            goto _exit;
_exit:
goto _cleanup;
_cleanup:
            return __return_value;
        }
            void Class_1_vtable_init() {
            vtable_init(&Class_1_vtable,                         &vtable,                         2,                         5,                         (void *)0,                         Class_1_vtable_methods,                         Class_1_vtable_method_names);
                VTABLE_METHOD(Class_1_vtable,                 0,                 "_init",                 Class_1__init_func,                 (void*)0);
                    VTABLE_METHOD(Class_1_vtable,                 1,                 "godot_array_get",                 Class_1_godot_array_get_func,                 (void*)0);
                    VTABLE_METHOD(Class_1_vtable,                 2,                 "nested_loop",                 Class_1_nested_loop_func,                 (void*)0);
                    VTABLE_METHOD(Class_1_vtable,                 3,                 "with_defargs",                 Class_1_with_defargs_func,                 (void*)0);
                    VTABLE_METHOD(Class_1_vtable,                 4,                 "godot_array_set",                 Class_1_godot_array_set_func,                 (void*)0);
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
        if (0 != Class_1_godot_array_get_local_const_initialized) {
api10->godot_variant_destroy(&Class_1_godot_array_get_local_const[0]);
}
if (0 != Class_1_nested_loop_local_const_initialized) {
api10->godot_variant_destroy(&Class_1_nested_loop_local_const[0]);
api10->godot_variant_destroy(&Class_1_nested_loop_local_const[1]);
api10->godot_variant_destroy(&Class_1_nested_loop_local_const[2]);
}
if (0 != Class_1_with_defargs_local_const_initialized) {
api10->godot_variant_destroy(&Class_1_with_defargs_local_const[0]);
api10->godot_variant_destroy(&Class_1_with_defargs_local_const[1]);
}
if (0 != Class_1_godot_array_set_local_const_initialized) {
api10->godot_variant_destroy(&Class_1_godot_array_set_local_const[0]);
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
                        method.method = &Class_1__init_func;
                        godot_method_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "_init", attributes, method);
                    }
                                    {
                        godot_instance_method method = { NULL, NULL, NULL };
                        method.method = &Class_1_godot_array_get_func;
                        godot_method_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "godot_array_get", attributes, method);
                    }
                                    {
                        godot_instance_method method = { NULL, NULL, NULL };
                        method.method = &Class_1_nested_loop_func;
                        godot_method_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "nested_loop", attributes, method);
                    }
                                    {
                        godot_instance_method method = { NULL, NULL, NULL };
                        method.method = &Class_1_with_defargs_func;
                        godot_method_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "with_defargs", attributes, method);
                    }
                                    {
                        godot_instance_method method = { NULL, NULL, NULL };
                        method.method = &Class_1_godot_array_set_func;
                        godot_method_attributes attributes = { GODOT_METHOD_RPC_MODE_DISABLED };
                        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "godot_array_set", attributes, method);
                    }
                            }
        