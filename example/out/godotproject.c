
godot_variant Class_1__init(
    godot_object *p_instance,
    void *p_method_data,
    struct Class_1_struct_t *p_user_data,
    int p_num_args,
    godot_variant **p_args)
{
    godot_bool __flag;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);

    godot_variant stack[1];
    api10->godot_variant_new_nil(&stack[0]);
__entry:
    goto _0;
_0:
    // END;
    goto __exit;
__exit:

__return:
    api10->godot_variant_destroy(&stack[0]);

    return __return_value;
}

godot_variant Class_1_diamond_dom(
    godot_object *p_instance,
    void *p_method_data,
    struct Class_1_struct_t *p_user_data,
    int p_num_args,
    godot_variant **p_args)
{
    godot_bool __flag;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);

    if (0 == Class_1_diamond_dom_constants_initialized)
    {
        {
            uint8_t data[] = {2, 0, 0, 0, 3, 0, 0, 0};
            gd2c->godot_variant_decode(&Class_1_diamond_dom_constants[0], data, 8, 2, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 0, 0, 0, 0};
            gd2c->godot_variant_decode(&Class_1_diamond_dom_constants[1], data, 8, 2, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 4, 0, 0, 0};
            gd2c->godot_variant_decode(&Class_1_diamond_dom_constants[2], data, 8, 2, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 1, 0, 0, 0};
            gd2c->godot_variant_decode(&Class_1_diamond_dom_constants[3], data, 8, 2, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 5, 0, 0, 0};
            gd2c->godot_variant_decode(&Class_1_diamond_dom_constants[4], data, 8, 2, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 2, 0, 0, 0};
            gd2c->godot_variant_decode(&Class_1_diamond_dom_constants[5], data, 8, 2, true);
        }

        Class_1_diamond_dom_constants_initialized = 1;
    }

    godot_variant stack[3];
    api10->godot_variant_new_nil(&stack[0]);
    api10->godot_variant_new_nil(&stack[1]);
    api10->godot_variant_new_nil(&stack[2]);
__entry:
    // DEFINE 67108864;
    // DEFINE 67108865;
    // DEFINE 67108866;
    // DEFINE 67108867;
    // DEFINE 67108868;
    // DEFINE 67108869;
    // DEFINE 100663296;
    goto _0;
_0:

    api10->godot_variant_new_copy(&stack[0], &Class_1_diamond_dom_constants[0]);

    api11->godot_variant_evaluate(0,
                                  &stack[0],
                                  &Class_1_diamond_dom_constants[0],
                                  &stack[1],
                                  __flag);

    __flag = api10->godot_variant_as_bool(&stack[1]);
    if (__flag)
        goto _56;
    goto _15;
_56:

    __flag = api10->godot_variant_as_bool(&Class_1_diamond_dom_constants[1]);
    if (__flag)
        goto _68;
    goto _63;
_63:

    api10->godot_variant_new_copy(p_args[0], &Class_1_diamond_dom_constants[1]);
    goto _68;
_68:

    api11->godot_variant_evaluate(0,
                                  &stack[0],
                                  &Class_1_diamond_dom_constants[4],
                                  &stack[1],
                                  __flag);

    __flag = api10->godot_variant_as_bool(&stack[1]);
    if (__flag)
        goto _85;
    goto _78;
_85:

    api10->godot_variant_new_copy(&stack[0], &Class_1_diamond_dom_constants[4]);
    goto _92;
_92:

    api10->godot_variant_new_copy(p_args[0], &Class_1_diamond_dom_constants[1]);
    goto _97;
_97:

    api10->godot_variant_new_copy(p_args[0], &Class_1_diamond_dom_constants[1]);
    // END;
    goto __exit;
__exit:
_78:

    api10->godot_variant_new_copy(p_args[0], &Class_1_diamond_dom_constants[5]);
    goto _92;
_15:

    __flag = api10->godot_variant_as_bool(&Class_1_diamond_dom_constants[1]);
    if (__flag)
        goto _25;
    goto _20;
_20:

    api10->godot_variant_new_copy(p_args[0], &Class_1_diamond_dom_constants[1]);
    goto _25;
_25:

    api11->godot_variant_evaluate(0,
                                  &stack[0],
                                  &Class_1_diamond_dom_constants[2],
                                  &stack[1],
                                  __flag);

    __flag = api10->godot_variant_as_bool(&stack[1]);
    if (__flag)
        goto _42;
    goto _35;
_35:

    api10->godot_variant_new_copy(p_args[0], &Class_1_diamond_dom_constants[3]);
    goto _49;
_49:

    api10->godot_variant_new_copy(p_args[0], &Class_1_diamond_dom_constants[5]);
    goto _97;
_42:

    api10->godot_variant_new_copy(&stack[0], &Class_1_diamond_dom_constants[4]);
    goto _49;

__return:
    api10->godot_variant_destroy(&stack[0]);
    api10->godot_variant_destroy(&stack[1]);
    api10->godot_variant_destroy(&stack[2]);

    return __return_value;
}

godot_variant Class_3__init(
    godot_object *p_instance,
    void *p_method_data,
    struct Class_3_struct_t *p_user_data,
    int p_num_args,
    godot_variant **p_args)
{
    godot_bool __flag;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);

    godot_variant stack[1];
    api10->godot_variant_new_nil(&stack[0]);
__entry:
    goto _0;
_0:
    // CALLBASE 83886080 = self.0(...);
    // END;
    goto __exit;
__exit:

__return:
    api10->godot_variant_destroy(&stack[0]);

    return __return_value;
}

godot_variant Class_3_method1(
    godot_object *p_instance,
    void *p_method_data,
    struct Class_3_struct_t *p_user_data,
    int p_num_args,
    godot_variant **p_args)
{
    godot_bool __flag;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);

    if (0 == Class_3_method1_constants_initialized)
    {
        {
            uint8_t data[] = {3, 0, 0, 0, 0, 0, 0, 0};
            gd2c->godot_variant_decode(&Class_3_method1_constants[0], data, 8, 3, true);
        }

        Class_3_method1_constants_initialized = 1;
    }

    godot_variant stack[1];
    api10->godot_variant_new_nil(&stack[0]);
__entry:
    // DEFINE 67108864;
    // DEFINE 100663296;
    // DEFINE 100663297;
    goto _0;
_0:

    api10->godot_variant_new_copy(&__return_value, &Class_3_method1_constants[0]);
    goto __return;
    goto __exit;
__exit:

__return:
    api10->godot_variant_destroy(&stack[0]);

    return __return_value;
}

godot_variant Class_3_method2(
    godot_object *p_instance,
    void *p_method_data,
    struct Class_3_struct_t *p_user_data,
    int p_num_args,
    godot_variant **p_args)
{
    godot_bool __flag;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);

    godot_variant stack[1];
    api10->godot_variant_new_nil(&stack[0]);
__entry:
    goto _0;
_0:
    // END;
    goto __exit;
__exit:

__return:
    api10->godot_variant_destroy(&stack[0]);

    return __return_value;
}

void GDN_EXPORT GD2C__nativescript_init(void *p_handle)
{

    {
        godot_instance_create_func create = {NULL, NULL, NULL};
        create.create_func = Class_1_ctor;
        godot_instance_destroy_func destroy = {NULL, NULL, NULL};
        destroy.destroy_func = Class_1_dtor;
        nativescript10->godot_nativescript_register_class(p_handle, "Class_1", "Node2D", create, destroy);
    }

    {
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_1__init;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "_init", attributes, method);
    }

    {
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_1_diamond_dom;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "diamond_dom", attributes, method);
    }

    /********************
                IMPLEMENT PROPERTIES
                *********************/

    /********************
                INITIALIZE VTABLE
                *********************/

    {
        godot_instance_create_func create = {NULL, NULL, NULL};
        create.create_func = Class_3_ctor;
        godot_instance_destroy_func destroy = {NULL, NULL, NULL};
        destroy.destroy_func = Class_3_dtor;
        nativescript10->godot_nativescript_register_class(p_handle, "Class_3", "Node2D", create, destroy);
    }

    {
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_3__init;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_3", "_init", attributes, method);
    }

    {
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_1_diamond_dom;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_3", "diamond_dom", attributes, method);
    }

    {
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_3_method1;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_3", "method1", attributes, method);
    }

    {
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_3_method2;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_3", "method2", attributes, method);
    }

    /********************
                IMPLEMENT PROPERTIES
                *********************/

    /********************
                INITIALIZE VTABLE
                *********************/
}
