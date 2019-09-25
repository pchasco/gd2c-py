#include "gd2c.h"
#include "godotproject.h"
void *Class_1_ctor(godot_object *p_instance, void *p_method_data)
{
    struct Class_1_struct_t *user_data = api10->godot_alloc(sizeof(struct Class_1_struct_t));
    user_data->__vtable = &Class_1_vtable;
    api10->godot_variant_new_object(&user_data->__self, p_instance);
    Class_1__init_func(p_instance, (void *)0, user_data, 0, (void *)0);
    return user_data;
}
void Class_1_dtor(godot_object *p_instance, void *p_method_data, void *_p_user_data)
{
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    api10->godot_variant_destroy(&p_user_data->__self);
    api10->godot_free(p_user_data);
}
godot_variant Class_1_get_member2(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->member2);
    return value;
}

void Class_1_set_member2(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->member2, p_value);
}
godot_variant Class_1_get_member1(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->member1);
    return value;
}

void Class_1_set_member1(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->member1, p_value);
}
godot_variant Class_1__init_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_1__init_local_const_initialized)
    {
        {
            uint8_t data[] = {2, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1__init_local_const[0], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 6, 0, 0, 0, 115, 116, 114, 105, 110, 103, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1__init_local_const[1], data, 16, &bytesRead, true);
        }
        Class_1__init_local_const_initialized = 1;
    }
    goto _entry;
_entry:
    printf("C LINE %i", __LINE__);
    // DEFINE 67108864;
    printf("C LINE %i", __LINE__);
    // DEFINE 67108865;
    printf("C LINE %i", __LINE__);
    goto _0;
_0:
    printf("C LINE %i", __LINE__);
    goto _2;
_2:
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_copy(&p_user_data->member1, &Class_1__init_local_const[0]);
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_copy(&p_user_data->member2, &Class_1__init_local_const[1]);
    printf("C LINE %i", __LINE__);
    goto _exit;
_exit:
    goto _cleanup;
_cleanup:
    return __return_value;
}
godot_variant Class_1_godot_set_named_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_1_godot_set_named_local_const_initialized)
    {
        {
            uint8_t data[] = {2, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1_godot_set_named_local_const[0], data, 8, &bytesRead, true);
        }
        Class_1_godot_set_named_local_const_initialized = 1;
    }
    goto _entry;
_entry:
    printf("C LINE %i", __LINE__);
    // DEFINE 67108864;
    printf("C LINE %i", __LINE__);
    goto _0;
_0:
    printf("C LINE %i", __LINE__);
    goto _2;
_2:
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_copy(&p_user_data->member1, &Class_1_godot_set_named_local_const[0]);
    printf("C LINE %i", __LINE__);
    goto _exit;
_exit:
    goto _cleanup;
_cleanup:
    return __return_value;
}
godot_variant Class_1_natural_loop_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_1_natural_loop_local_const_initialized)
    {
        {
            uint8_t data[] = {2, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1_natural_loop_local_const[0], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 10, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1_natural_loop_local_const[1], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 1, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1_natural_loop_local_const[2], data, 8, &bytesRead, true);
        }
        Class_1_natural_loop_local_const_initialized = 1;
    }
    godot_variant st_100663296;
    godot_variant st_83886081;
    godot_variant st_83886082;
    goto _entry;
_entry:
    printf("C LINE %i", __LINE__);
    // DEFINE 67108864;
    printf("C LINE %i", __LINE__);
    // DEFINE 67108865;
    printf("C LINE %i", __LINE__);
    // DEFINE 67108866;
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_nil(&st_100663296);
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_nil(&st_83886081);
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_nil(&st_83886082);
    printf("C LINE %i", __LINE__);
    goto _0;
_0:
    printf("C LINE %i", __LINE__);
    goto _2;
_2:
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_copy(&st_100663296, &Class_1_natural_loop_local_const[0]);
    printf("C LINE %i", __LINE__);
    goto _7;
_7:
    printf("C LINE %i", __LINE__);
    api11->godot_variant_evaluate(2, &st_100663296, &Class_1_natural_loop_local_const[1], &st_83886081, &__flag);
    printf("C LINE %i", __LINE__);
    __flag = api10->godot_variant_as_bool(&st_83886081);
    if (__flag)
        goto _15;
    goto _25;
_25:
    printf("C LINE %i", __LINE__);
    goto _27;
_27:
    printf("C LINE %i", __LINE__);
    goto _exit;
_exit:
    printf("C LINE %i", __LINE__);
    api10->godot_variant_destroy(&st_100663296);
    printf("C LINE %i", __LINE__);
    api10->godot_variant_destroy(&st_83886081);
    printf("C LINE %i", __LINE__);
    api10->godot_variant_destroy(&st_83886082);
    goto _cleanup;
_15:
    printf("C LINE %i", __LINE__);
    api11->godot_variant_evaluate(6, &st_100663296, &Class_1_natural_loop_local_const[2], &st_83886082, &__flag);
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_copy(&st_100663296, &st_83886082);
    printf("C LINE %i", __LINE__);
    goto _7;
_cleanup:
    return __return_value;
}
godot_variant Class_1_with_defargs_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_1_with_defargs_local_const_initialized)
    {
        {
            uint8_t data[] = {2, 0, 0, 0, 1, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1_with_defargs_local_const[0], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 2, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1_with_defargs_local_const[1], data, 8, &bytesRead, true);
        }
        Class_1_with_defargs_local_const_initialized = 1;
    }
    godot_variant st_83886083;
    goto _entry;
_entry:
    printf("C LINE %i", __LINE__);
    // <gd2c.bytecode.ParameterGDScriptOp object at 0x048BD190>;
    printf("C LINE %i", __LINE__);
    // <gd2c.bytecode.ParameterGDScriptOp object at 0x048BD1B0>;
    printf("C LINE %i", __LINE__);
    // <gd2c.bytecode.ParameterGDScriptOp object at 0x048BD1D0>;
    printf("C LINE %i", __LINE__);
    // DEFINE 67108864;
    printf("C LINE %i", __LINE__);
    // DEFINE 67108865;
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_nil(&st_83886083);
    printf("C LINE %i", __LINE__);
    goto _0;
_0:
    printf("C LINE %i", __LINE__);
    goto _2;
_2:
    printf("C LINE %i", __LINE__);
    int defarg = 3 - p_num_args;
    switch (defarg)
    {
    case 0:
        goto _3;
    case 1:
        goto _15;
    default:
        goto _20;
    }
_15:
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_copy(p_args[2], &Class_1_with_defargs_local_const[1]);
    printf("C LINE %i", __LINE__);
    goto _3;
_3:
    printf("C LINE %i", __LINE__);
    api11->godot_variant_evaluate(6, p_args[0], p_args[1], &st_83886083, &__flag);
    printf("C LINE %i", __LINE__);
    api11->godot_variant_evaluate(6, &st_83886083, p_args[2], &st_83886083, &__flag);
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_copy(&__return_value, &st_83886083);
    goto _exit;
_exit:
    printf("C LINE %i", __LINE__);
    api10->godot_variant_destroy(&st_83886083);
    goto _cleanup;
_20:
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_copy(p_args[1], &Class_1_with_defargs_local_const[0]);
    printf("C LINE %i", __LINE__);
    goto _15;
_cleanup:
    return __return_value;
}
godot_variant Class_1_godot_get_named_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    goto _entry;
_entry:
    printf("C LINE %i", __LINE__);
    goto _0;
_0:
    printf("C LINE %i", __LINE__);
    goto _2;
_2:
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_copy(&__return_value, &p_user_data->member1);
    goto _exit;
_exit:
    goto _cleanup;
_cleanup:
    return __return_value;
}
godot_variant Class_1_godot_array_set_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_1_godot_array_set_local_const_initialized)
    {
        {
            uint8_t data[] = {2, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1_godot_array_set_local_const[0], data, 8, &bytesRead, true);
        }
        Class_1_godot_array_set_local_const_initialized = 1;
    }
    goto _entry;
_entry:
    printf("C LINE %i", __LINE__);
    // <gd2c.bytecode.ParameterGDScriptOp object at 0x048BD6B0>;
    printf("C LINE %i", __LINE__);
    // DEFINE 67108864;
    printf("C LINE %i", __LINE__);
    goto _0;
_0:
    printf("C LINE %i", __LINE__);
    goto _2;
_2:
    printf("C LINE %i", __LINE__);
    {
        godot_int index = api10->godot_variant_as_int(&Class_1_godot_array_set_local_const[0]);
        godot_array arr = api10->godot_variant_as_array(p_args[0]);
        api10->godot_array_set(&arr, index, &Class_1_godot_array_set_local_const[0]);
    }
    printf("C LINE %i", __LINE__);
    goto _exit;
_exit:
    goto _cleanup;
_cleanup:
    return __return_value;
}
godot_variant Class_1_godot_array_get_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_1_godot_array_get_local_const_initialized)
    {
        {
            uint8_t data[] = {2, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1_godot_array_get_local_const[0], data, 8, &bytesRead, true);
        }
        Class_1_godot_array_get_local_const_initialized = 1;
    }
    godot_variant st_83886081;
    goto _entry;
_entry:
    printf("C LINE %i", __LINE__);
    // <gd2c.bytecode.ParameterGDScriptOp object at 0x048BD850>;
    printf("C LINE %i", __LINE__);
    // DEFINE 67108864;
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_nil(&st_83886081);
    printf("C LINE %i", __LINE__);
    goto _0;
_0:
    printf("C LINE %i", __LINE__);
    goto _2;
_2:
    printf("C LINE %i", __LINE__);
    {
        godot_int index = api10->godot_variant_as_int(&Class_1_godot_array_get_local_const[0]);
        godot_array arr = api10->godot_variant_as_array(p_args[0]);
        st_83886081 = api10->godot_array_get(&arr, index);
    }
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_copy(&__return_value, &st_83886081);
    goto _exit;
_exit:
    printf("C LINE %i", __LINE__);
    api10->godot_variant_destroy(&st_83886081);
    goto _cleanup;
_cleanup:
    return __return_value;
}
godot_variant Class_1_called_method_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_1_called_method_local_const_initialized)
    {
        {
            uint8_t data[] = {2, 0, 0, 0, 1, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1_called_method_local_const[0], data, 8, &bytesRead, true);
        }
        Class_1_called_method_local_const_initialized = 1;
    }
    godot_variant st_83886082;
    goto _entry;
_entry:
    printf("C LINE %i", __LINE__);
    // <gd2c.bytecode.ParameterGDScriptOp object at 0x048BDA50>;
    printf("C LINE %i", __LINE__);
    // <gd2c.bytecode.ParameterGDScriptOp object at 0x048BDA90>;
    printf("C LINE %i", __LINE__);
    // DEFINE 67108864;
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_nil(&st_83886082);
    printf("C LINE %i", __LINE__);
    goto _0;
_0:
    printf("C LINE %i", __LINE__);
    goto _2;
_2:
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_copy(p_args[1], &Class_1_called_method_local_const[0]);
    printf("C LINE %i", __LINE__);
    api11->godot_variant_evaluate(8, p_args[0], p_args[1], &st_83886082, &__flag);
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_copy(&__return_value, &st_83886082);
    goto _exit;
_exit:
    printf("C LINE %i", __LINE__);
    api10->godot_variant_destroy(&st_83886082);
    goto _cleanup;
_cleanup:
    return __return_value;
}
godot_variant Class_1_nested_loop_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_1_nested_loop_local_const_initialized)
    {
        {
            uint8_t data[] = {2, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1_nested_loop_local_const[0], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 10, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1_nested_loop_local_const[1], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 1, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1_nested_loop_local_const[2], data, 8, &bytesRead, true);
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
    printf("C LINE %i", __LINE__);
    // DEFINE 67108864;
    printf("C LINE %i", __LINE__);
    // DEFINE 67108865;
    printf("C LINE %i", __LINE__);
    // DEFINE 67108866;
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_nil(&st_100663296);
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_nil(&st_83886081);
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_nil(&st_100663297);
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_nil(&st_83886082);
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_nil(&st_83886083);
    printf("C LINE %i", __LINE__);
    goto _0;
_0:
    printf("C LINE %i", __LINE__);
    goto _2;
_2:
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_copy(&st_100663296, &Class_1_nested_loop_local_const[0]);
    printf("C LINE %i", __LINE__);
    goto _7;
_7:
    printf("C LINE %i", __LINE__);
    api11->godot_variant_evaluate(2, &st_100663296, &Class_1_nested_loop_local_const[1], &st_83886081, &__flag);
    printf("C LINE %i", __LINE__);
    __flag = api10->godot_variant_as_bool(&st_83886081);
    if (__flag)
        goto _18;
    goto _15;
_15:
    printf("C LINE %i", __LINE__);
    goto _17;
_17:
    printf("C LINE %i", __LINE__);
    goto _exit;
_exit:
    printf("C LINE %i", __LINE__);
    api10->godot_variant_destroy(&st_100663296);
    printf("C LINE %i", __LINE__);
    api10->godot_variant_destroy(&st_83886081);
    printf("C LINE %i", __LINE__);
    api10->godot_variant_destroy(&st_100663297);
    printf("C LINE %i", __LINE__);
    api10->godot_variant_destroy(&st_83886082);
    printf("C LINE %i", __LINE__);
    api10->godot_variant_destroy(&st_83886083);
    goto _cleanup;
_18:
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_copy(&st_100663297, &Class_1_nested_loop_local_const[0]);
    printf("C LINE %i", __LINE__);
    goto _23;
_23:
    printf("C LINE %i", __LINE__);
    api11->godot_variant_evaluate(2, &st_100663297, &Class_1_nested_loop_local_const[1], &st_83886082, &__flag);
    printf("C LINE %i", __LINE__);
    __flag = api10->godot_variant_as_bool(&st_83886082);
    if (__flag)
        goto _31;
    goto _41;
_41:
    printf("C LINE %i", __LINE__);
    goto _43;
_43:
    printf("C LINE %i", __LINE__);
    api11->godot_variant_evaluate(6, &st_100663296, &Class_1_nested_loop_local_const[2], &st_83886083, &__flag);
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_copy(&st_100663296, &st_83886083);
    printf("C LINE %i", __LINE__);
    goto _7;
_31:
    printf("C LINE %i", __LINE__);
    api11->godot_variant_evaluate(6, &st_100663297, &Class_1_nested_loop_local_const[2], &st_83886083, &__flag);
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_copy(&st_100663297, &st_83886083);
    printf("C LINE %i", __LINE__);
    goto _23;
_cleanup:
    return __return_value;
}
godot_variant Class_1_godot_construct_array_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_1_godot_construct_array_local_const_initialized)
    {
        {
            uint8_t data[] = {2, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1_godot_construct_array_local_const[0], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 1, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1_godot_construct_array_local_const[1], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 2, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1_godot_construct_array_local_const[2], data, 8, &bytesRead, true);
        }
        Class_1_godot_construct_array_local_const_initialized = 1;
    }
    godot_variant st_100663296;
    godot_variant st_83886082;
    goto _entry;
_entry:
    printf("C LINE %i", __LINE__);
    // DEFINE 67108864;
    printf("C LINE %i", __LINE__);
    // DEFINE 67108865;
    printf("C LINE %i", __LINE__);
    // DEFINE 67108866;
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_nil(&st_100663296);
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_nil(&st_83886082);
    printf("C LINE %i", __LINE__);
    goto _0;
_0:
    printf("C LINE %i", __LINE__);
    goto _2;
_2:
    printf("C LINE %i", __LINE__);
    {
        godot_array arr;
        api10->godot_array_new(&arr);
        api10->godot_array_resize(&arr, 3);
        api10->godot_array_set(&arr, 0, &Class_1_godot_construct_array_local_const[0]);
        api10->godot_array_set(&arr, 1, &Class_1_godot_construct_array_local_const[1]);
        api10->godot_array_set(&arr, 2, &Class_1_godot_construct_array_local_const[2]);
        api10->godot_variant_new_array(&st_83886082, &arr);
    }
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_copy(&st_100663296, &st_83886082);
    printf("C LINE %i", __LINE__);
    goto _exit;
_exit:
    printf("C LINE %i", __LINE__);
    api10->godot_variant_destroy(&st_100663296);
    printf("C LINE %i", __LINE__);
    api10->godot_variant_destroy(&st_83886082);
    goto _cleanup;
_cleanup:
    return __return_value;
}
godot_variant Class_1_call_method_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_1_call_method_local_const_initialized)
    {
        {
            uint8_t data[] = {2, 0, 0, 0, 1, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1_call_method_local_const[0], data, 8, &bytesRead, true);
        }
        Class_1_call_method_local_const_initialized = 1;
    }
    godot_variant st_83886081;
    goto _entry;
_entry:
    printf("C LINE %i", __LINE__);
    // <gd2c.bytecode.ParameterGDScriptOp object at 0x048CD590>;
    printf("C LINE %i", __LINE__);
    // DEFINE 67108864;
    printf("C LINE %i", __LINE__);
    api10->godot_variant_new_nil(&st_83886081);
    printf("C LINE %i", __LINE__);
    goto _0;
_0:
    printf("C LINE %i", __LINE__);
    goto _2;
_2:
    printf("C LINE %i", __LINE__);
    {
        godot_variant *args[] = {&Class_1_call_method_local_const[0], p_args[0]};
        godot_variant call_result = p_user_data->__vtable->methods[7](p_instance, p_method_data, p_user_data, 2, args);
        api10->godot_variant_new_copy(&st_83886081, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    printf("C LINE %i", __LINE__);
    goto _exit;
_exit:
    printf("C LINE %i", __LINE__);
    api10->godot_variant_destroy(&st_83886081);
    goto _cleanup;
_cleanup:
    return __return_value;
}
void Class_1_vtable_init()
{
    vtable_init(&Class_1_vtable, &vtable, 2, 11, (void *)0, Class_1_vtable_methods, Class_1_vtable_method_names);
    VTABLE_METHOD(Class_1_vtable, 0, "_init", Class_1__init_func, (void *)0);
    VTABLE_METHOD(Class_1_vtable, 1, "godot_set_named", Class_1_godot_set_named_func, (void *)0);
    VTABLE_METHOD(Class_1_vtable, 2, "natural_loop", Class_1_natural_loop_func, (void *)0);
    VTABLE_METHOD(Class_1_vtable, 3, "with_defargs", Class_1_with_defargs_func, (void *)0);
    VTABLE_METHOD(Class_1_vtable, 4, "godot_get_named", Class_1_godot_get_named_func, (void *)0);
    VTABLE_METHOD(Class_1_vtable, 5, "godot_array_set", Class_1_godot_array_set_func, (void *)0);
    VTABLE_METHOD(Class_1_vtable, 6, "godot_array_get", Class_1_godot_array_get_func, (void *)0);
    VTABLE_METHOD(Class_1_vtable, 7, "called_method", Class_1_called_method_func, (void *)0);
    VTABLE_METHOD(Class_1_vtable, 8, "nested_loop", Class_1_nested_loop_func, (void *)0);
    VTABLE_METHOD(Class_1_vtable, 9, "godot_construct_array", Class_1_godot_construct_array_func, (void *)0);
    VTABLE_METHOD(Class_1_vtable, 10, "call_method", Class_1_call_method_func, (void *)0);
}
void GDN_EXPORT GD2C_gdnative_init(godot_gdnative_init_options *p_options)
{
    api10 = p_options->api_struct;

    const godot_gdnative_api_struct *extension = api10->next;
    while (extension)
    {
        if (extension->version.major == 1 && extension->version.minor == 1)
        {
            api11 = (const godot_gdnative_core_1_1_api_struct *)extension;
        }
        extension = extension->next;
    }

    for (int i = 0; i < api10->num_extensions; ++i)
    {
        switch (api10->extensions[i]->type)
        {
        case GDNATIVE_EXT_NATIVESCRIPT:
        {
            extension = api10->extensions[i];
            nativescript10 = (godot_gdnative_ext_nativescript_api_struct *)extension;
            while (extension)
            {
                if (extension->version.major == 1 && extension->version.minor == 1)
                {
                    nativescript11 = (const godot_gdnative_ext_nativescript_1_1_api_struct *)extension;
                }
                extension = extension->next;
            }
        };
        break;

        default:
            break;
        }
    }

    api10->godot_variant_new_nil(&__nil);
}
void GDN_EXPORT GD2C_gdnative_terminate(godot_gdnative_terminate_options *p_options)
{
    api10->godot_variant_destroy(&__nil);
    if (0 != Class_1__init_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_1__init_local_const[0]);
        api10->godot_variant_destroy(&Class_1__init_local_const[1]);
    }
    if (0 != Class_1_godot_set_named_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_1_godot_set_named_local_const[0]);
    }
    if (0 != Class_1_natural_loop_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_1_natural_loop_local_const[0]);
        api10->godot_variant_destroy(&Class_1_natural_loop_local_const[1]);
        api10->godot_variant_destroy(&Class_1_natural_loop_local_const[2]);
    }
    if (0 != Class_1_with_defargs_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_1_with_defargs_local_const[0]);
        api10->godot_variant_destroy(&Class_1_with_defargs_local_const[1]);
    }
    if (0 != Class_1_godot_array_set_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_1_godot_array_set_local_const[0]);
    }
    if (0 != Class_1_godot_array_get_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_1_godot_array_get_local_const[0]);
    }
    if (0 != Class_1_called_method_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_1_called_method_local_const[0]);
    }
    if (0 != Class_1_nested_loop_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_1_nested_loop_local_const[0]);
        api10->godot_variant_destroy(&Class_1_nested_loop_local_const[1]);
        api10->godot_variant_destroy(&Class_1_nested_loop_local_const[2]);
    }
    if (0 != Class_1_godot_construct_array_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_1_godot_construct_array_local_const[0]);
        api10->godot_variant_destroy(&Class_1_godot_construct_array_local_const[1]);
        api10->godot_variant_destroy(&Class_1_godot_construct_array_local_const[2]);
    }
    if (0 != Class_1_call_method_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_1_call_method_local_const[0]);
    }
}
void GDN_EXPORT GD2C_nativescript_init(void *p_handle)
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
        method.method = &Class_1__init_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "_init", attributes, method);
    }
    {
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_1_godot_set_named_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "godot_set_named", attributes, method);
    }
    {
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_1_natural_loop_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "natural_loop", attributes, method);
    }
    {
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_1_with_defargs_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "with_defargs", attributes, method);
    }
    {
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_1_godot_get_named_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "godot_get_named", attributes, method);
    }
    {
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_1_godot_array_set_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "godot_array_set", attributes, method);
    }
    {
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_1_godot_array_get_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "godot_array_get", attributes, method);
    }
    {
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_1_called_method_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "called_method", attributes, method);
    }
    {
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_1_nested_loop_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "nested_loop", attributes, method);
    }
    {
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_1_godot_construct_array_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "godot_construct_array", attributes, method);
    }
    {
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_1_call_method_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "call_method", attributes, method);
    }
    {
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_1_set_member2;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_1_get_member2;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "member2", "member2", &attributes, setter, getter);
    }
    {
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_1_set_member1;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_1_get_member1;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "member1", "member1", &attributes, setter, getter);
    }
}
