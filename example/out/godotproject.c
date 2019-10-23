#include "gd2c.h"
#include "godotproject.h"
#include "math.h"

godot_variant global_constants_array[487];
godot_variant global_classdb_array[587];
godot_variant global_hard_coded_constants_array[4];
godot_variant global_singletons_array[21];

void *Class_1_ctor(godot_object *p_instance, void *p_method_data)
{
    printf("Enter: Class_1_ctor\n");
    struct Class_1_struct_t *user_data = api10->godot_alloc(sizeof(struct Class_1_struct_t));
    user_data->__vtable = &Class_1_vtable;
    api10->godot_variant_new_object(&user_data->__self, p_instance);
    Class_1__init_func(p_instance, (void *)0, user_data, 0, (void *)0);
    printf("Exit: Class_1_ctor\n");
    return user_data;
}
void Class_1_dtor(godot_object *p_instance, void *p_method_data, void *_p_user_data)
{
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    api10->godot_variant_destroy(&p_user_data->__self);
    api10->godot_free(p_user_data);
}
godot_variant Class_1_get_disabled(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->disabled);
    return value;
}

void Class_1_set_disabled(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->disabled, p_value);
}
godot_variant Class_1__init_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    //printf("Enter: Class_1__init_func\n");
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_1__init_local_const_initialized)
    {
        {
            uint8_t data[] = {1, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1__init_local_const[0], data, 8, &bytesRead, true);
        }
        Class_1__init_local_const_initialized = 1;
    }
    goto _entry;
_entry:
    printf("%i : _entry\n", __LINE__);
    // DEFINE 67108864;
    goto _0;
_0:
    printf("%i : _0\n", __LINE__);
    goto _2;
_2:
    printf("%i : _2\n", __LINE__);
    api10->godot_variant_new_copy(&p_user_data->disabled, &Class_1__init_local_const[0]);
    goto _2147483646;
_2147483646:
    printf("%i : _2147483646\n", __LINE__);
    goto _cleanup;
_cleanup:
    //printf("Exit: Class_1__init_func\n");
    return __return_value;
}
void Class_1_vtable_init()
{
    vtable_init(&Class_1_vtable, &vtable, 2, "Class_1", 1, (void *)0, Class_1_vtable_methods, Class_1_vtable_method_names);
    VTABLE_METHOD(Class_1_vtable, 0, "_init", Class_1__init_func, (void *)0);
}
void *Class_3_ctor(godot_object *p_instance, void *p_method_data)
{
    printf("Enter: Class_3_ctor\n");
    struct Class_3_struct_t *user_data = api10->godot_alloc(sizeof(struct Class_3_struct_t));
    user_data->__vtable = &Class_3_vtable;
    api10->godot_variant_new_object(&user_data->__self, p_instance);
    Class_3__init_func(p_instance, (void *)0, user_data, 0, (void *)0);
    printf("Exit: Class_3_ctor\n");
    return user_data;
}
void Class_3_dtor(godot_object *p_instance, void *p_method_data, void *_p_user_data)
{
    struct Class_3_struct_t *p_user_data = (struct Class_3_struct_t *)_p_user_data;
    api10->godot_variant_destroy(&p_user_data->__self);
    api10->godot_free(p_user_data);
}
godot_variant Class_3_get_taken(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_3_struct_t *p_user_data = (struct Class_3_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->taken);
    return value;
}

void Class_3_set_taken(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_3_struct_t *p_user_data = (struct Class_3_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->taken, p_value);
}
godot_variant Class_3__init_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    //printf("Enter: Class_3__init_func\n");
    struct Class_3_struct_t *p_user_data = (struct Class_3_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_3__init_local_const_initialized)
    {
        {
            uint8_t data[] = {1, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_3__init_local_const[0], data, 8, &bytesRead, true);
        }
        Class_3__init_local_const_initialized = 1;
    }
    goto _entry;
_entry:
    printf("%i : _entry\n", __LINE__);
    // DEFINE 67108864;
    goto _0;
_0:
    printf("%i : _0\n", __LINE__);
    goto _2;
_2:
    printf("%i : _2\n", __LINE__);
    api10->godot_variant_new_copy(&p_user_data->taken, &Class_3__init_local_const[0]);
    goto _2147483646;
_2147483646:
    printf("%i : _2147483646\n", __LINE__);
    goto _cleanup;
_cleanup:
    //printf("Exit: Class_3__init_func\n");
    return __return_value;
}
godot_variant Class_3__on_coin_body_enter_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    //printf("Enter: Class_3__on_coin_body_enter_func\n");
    struct Class_3_struct_t *p_user_data = (struct Class_3_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_3__on_coin_body_enter_local_const_initialized)
    {
        {
            char data[] = {114, 101, 115, 58, 47, 47, 112, 108, 97, 121, 101, 114, 46, 103, 100, 110, 115};
            godot_string resource_path;
            api10->godot_string_new(&resource_path);
            api10->godot_string_parse_utf8_with_len(&resource_path, data, 17);
            gd2c10->resource_load(&Class_3__on_coin_body_enter_local_const[0], &resource_path);
            api10->godot_string_destroy(&resource_path);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 4, 0, 0, 0, 97, 110, 105, 109};
            int bytesRead;
            gd2c10->variant_decode(&Class_3__on_coin_body_enter_local_const[1], data, 12, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 4, 0, 0, 0, 116, 97, 107, 101};
            int bytesRead;
            gd2c10->variant_decode(&Class_3__on_coin_body_enter_local_const[2], data, 12, &bytesRead, true);
        }
        {
            uint8_t data[] = {1, 0, 0, 0, 1, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_3__on_coin_body_enter_local_const[3], data, 8, &bytesRead, true);
        }
        {
            char data[] = {103, 101, 116, 95, 110, 111, 100, 101};
            api10->godot_string_new(&Class_3__on_coin_body_enter_strings[0]);
            api10->godot_string_parse_utf8_with_len(&Class_3__on_coin_body_enter_strings[0], data, 8);
            api10->godot_string_name_new(&Class_3__on_coin_body_enter_string_names[0], &Class_3__on_coin_body_enter_strings[0]);
        }
        {
            char data[] = {112, 108, 97, 121};
            api10->godot_string_new(&Class_3__on_coin_body_enter_strings[1]);
            api10->godot_string_parse_utf8_with_len(&Class_3__on_coin_body_enter_strings[1], data, 4);
            api10->godot_string_name_new(&Class_3__on_coin_body_enter_string_names[1], &Class_3__on_coin_body_enter_strings[1]);
        }
        Class_3__on_coin_body_enter_local_const_initialized = 1;
    }
    godot_variant st_1;
    godot_variant st_3;
    goto _entry;
_entry:
    printf("%i : _entry\n", __LINE__);
    // <gd2c.bytecode.ParameterGDScriptOp object at 0x05999AB0>;
    // DEFINE 67108864;
    // DEFINE 67108865;
    // DEFINE 67108866;
    // DEFINE 67108867;
    api10->godot_variant_new_nil(&st_1);
    if (p_num_args > 0)
        api10->godot_variant_new_copy(&st_3, p_args[0]);
    goto _0;
_0:
    printf("%i : _0\n", __LINE__);
    goto _2;
_2:
    printf("%i : _2\n", __LINE__);
    api11->godot_variant_evaluate(23, &p_user_data->taken, &p_user_data->taken, &st_1, &__flag);
    __flag = api10->godot_variant_as_bool(&st_1);
    if (!__flag)
        goto _10;
    goto _35;
_10:
    printf("%i : _10\n", __LINE__);
    api10->godot_variant_new_bool(&st_1, false);
    goto _14;
_14:
    printf("%i : _14\n", __LINE__);
    __flag = api10->godot_variant_as_bool(&st_1);
    if (!__flag)
        goto _17;
    goto _18;
_18:
    printf("%i : _18\n", __LINE__);
    {
        godot_variant *args[] = {&Class_3__on_coin_body_enter_local_const[1]};
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_3__on_coin_body_enter_strings[0], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_1, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant *args[] = {&Class_3__on_coin_body_enter_local_const[2]};
        api10->godot_variant_call(&st_1, &Class_3__on_coin_body_enter_strings[1], (const godot_variant **)args, 1, &__error);
    }
    api10->godot_variant_new_copy(&p_user_data->taken, &Class_3__on_coin_body_enter_local_const[3]);
    goto _17;
_17:
    printf("%i : _17\n", __LINE__);
    goto _2147483646;
_2147483646:
    printf("%i : _2147483646\n", __LINE__);
    api10->godot_variant_destroy(&st_1);
    api10->godot_variant_destroy(&st_3);
    goto _cleanup;
_35:
    printf("%i : _35\n", __LINE__);
    gd2c10->extends_test(&st_3, &Class_3__on_coin_body_enter_local_const[0], &st_1);
    __flag = api10->godot_variant_as_bool(&st_1);
    if (!__flag)
        goto _10;
    goto _42;
_42:
    printf("%i : _42\n", __LINE__);
    api10->godot_variant_new_bool(&st_1, true);
    goto _14;
_cleanup:
    //printf("Exit: Class_3__on_coin_body_enter_func\n");
    return __return_value;
}
void Class_3_vtable_init()
{
    vtable_init(&Class_3_vtable, &vtable, 4, "Class_3", 2, (void *)0, Class_3_vtable_methods, Class_3_vtable_method_names);
    VTABLE_METHOD(Class_3_vtable, 0, "_init", Class_3__init_func, (void *)0);
    VTABLE_METHOD(Class_3_vtable, 1, "_on_coin_body_enter", Class_3__on_coin_body_enter_func, (void *)0);
}
void *Class_5_ctor(godot_object *p_instance, void *p_method_data)
{
    printf("Enter: Class_5_ctor\n");
    struct Class_5_struct_t *user_data = api10->godot_alloc(sizeof(struct Class_5_struct_t));
    user_data->__vtable = &Class_5_vtable;
    api10->godot_variant_new_object(&user_data->__self, p_instance);
    Class_5__init_func(p_instance, (void *)0, user_data, 0, (void *)0);
    printf("Exit: Class_5_ctor\n");
    return user_data;
}
void Class_5_dtor(godot_object *p_instance, void *p_method_data, void *_p_user_data)
{
    struct Class_5_struct_t *p_user_data = (struct Class_5_struct_t *)_p_user_data;
    api10->godot_variant_destroy(&p_user_data->__self);
    api10->godot_free(p_user_data);
}
godot_variant Class_5_get_accel(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_5_struct_t *p_user_data = (struct Class_5_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->accel);
    return value;
}

void Class_5_set_accel(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_5_struct_t *p_user_data = (struct Class_5_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->accel, p_value);
}
godot_variant Class_5_get_deaccel(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_5_struct_t *p_user_data = (struct Class_5_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->deaccel);
    return value;
}

void Class_5_set_deaccel(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_5_struct_t *p_user_data = (struct Class_5_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->deaccel, p_value);
}
godot_variant Class_5_get_prev_advance(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_5_struct_t *p_user_data = (struct Class_5_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->prev_advance);
    return value;
}

void Class_5_set_prev_advance(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_5_struct_t *p_user_data = (struct Class_5_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->prev_advance, p_value);
}
godot_variant Class_5_get_max_speed(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_5_struct_t *p_user_data = (struct Class_5_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->max_speed);
    return value;
}

void Class_5_set_max_speed(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_5_struct_t *p_user_data = (struct Class_5_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->max_speed, p_value);
}
godot_variant Class_5_get_rot_speed(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_5_struct_t *p_user_data = (struct Class_5_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->rot_speed);
    return value;
}

void Class_5_set_rot_speed(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_5_struct_t *p_user_data = (struct Class_5_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->rot_speed, p_value);
}
godot_variant Class_5_get_dying(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_5_struct_t *p_user_data = (struct Class_5_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->dying);
    return value;
}

void Class_5_set_dying(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_5_struct_t *p_user_data = (struct Class_5_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->dying, p_value);
}
godot_variant Class_5_get_rot_dir(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_5_struct_t *p_user_data = (struct Class_5_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->rot_dir);
    return value;
}

void Class_5_set_rot_dir(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_5_struct_t *p_user_data = (struct Class_5_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->rot_dir, p_value);
}
godot_variant Class_5__init_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    //printf("Enter: Class_5__init_func\n");
    struct Class_5_struct_t *p_user_data = (struct Class_5_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_5__init_local_const_initialized)
    {
        {
            uint8_t data[] = {1, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5__init_local_const[0], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {3, 0, 0, 0, 0, 0, 160, 65};
            int bytesRead;
            gd2c10->variant_decode(&Class_5__init_local_const[1], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 5, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5__init_local_const[2], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 2, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5__init_local_const[3], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 4, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5__init_local_const[4], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 1, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5__init_local_const[5], data, 8, &bytesRead, true);
        }
        Class_5__init_local_const_initialized = 1;
    }
    goto _entry;
_entry:
    printf("%i : _entry\n", __LINE__);
    // DEFINE 67108864;
    // DEFINE 67108865;
    // DEFINE 67108866;
    // DEFINE 67108867;
    // DEFINE 67108868;
    // DEFINE 67108869;
    goto _0;
_0:
    printf("%i : _0\n", __LINE__);
    goto _2;
_2:
    printf("%i : _2\n", __LINE__);
    api10->godot_variant_new_copy(&p_user_data->prev_advance, &Class_5__init_local_const[0]);
    api10->godot_variant_new_copy(&p_user_data->deaccel, &Class_5__init_local_const[1]);
    api10->godot_variant_new_copy(&p_user_data->accel, &Class_5__init_local_const[2]);
    api10->godot_variant_new_copy(&p_user_data->max_speed, &Class_5__init_local_const[3]);
    api10->godot_variant_new_copy(&p_user_data->rot_dir, &Class_5__init_local_const[4]);
    api10->godot_variant_new_copy(&p_user_data->rot_speed, &Class_5__init_local_const[5]);
    api10->godot_variant_new_copy(&p_user_data->dying, &Class_5__init_local_const[0]);
    goto _2147483646;
_2147483646:
    printf("%i : _2147483646\n", __LINE__);
    goto _cleanup;
_cleanup:
    //printf("Exit: Class_5__init_func\n");
    return __return_value;
}
godot_variant Class_5__die_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    //printf("Enter: Class_5__die_func\n");
    struct Class_5_struct_t *p_user_data = (struct Class_5_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_5__die_local_const_initialized)
    {
        {
            char data[] = {113, 117, 101, 117, 101, 95, 102, 114, 101, 101};
            api10->godot_string_new(&Class_5__die_strings[0]);
            api10->godot_string_parse_utf8_with_len(&Class_5__die_strings[0], data, 10);
            api10->godot_string_name_new(&Class_5__die_string_names[0], &Class_5__die_strings[0]);
        }
        Class_5__die_local_const_initialized = 1;
    }
    goto _entry;
_entry:
    printf("%i : _entry\n", __LINE__);
    goto _0;
_0:
    printf("%i : _0\n", __LINE__);
    goto _2;
_2:
    printf("%i : _2\n", __LINE__);
    {
        api10->godot_variant_call(&p_user_data->__self, &Class_5__die_strings[0], (const godot_variant **)(void *)0, 0, &__error);
    }
    goto _2147483646;
_2147483646:
    printf("%i : _2147483646\n", __LINE__);
    goto _cleanup;
_cleanup:
    //printf("Exit: Class_5__die_func\n");
    return __return_value;
}
godot_variant Class_5__integrate_forces_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    //printf("Enter: Class_5__integrate_forces_func\n");
    struct Class_5_struct_t *p_user_data = (struct Class_5_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_5__integrate_forces_local_const_initialized)
    {
        {
            uint8_t data[] = {7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5__integrate_forces_local_const[0], data, 16, &bytesRead, true);
        }
        {
            uint8_t data[] = {7, 0, 0, 0, 0, 0, 0, 0, 205, 204, 28, 193, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5__integrate_forces_local_const[1], data, 16, &bytesRead, true);
        }
        {
            char data[] = {114, 101, 115, 58, 47, 47, 98, 117, 108, 108, 101, 116, 46, 103, 100, 110, 115};
            godot_string resource_path;
            api10->godot_string_new(&resource_path);
            api10->godot_string_parse_utf8_with_len(&resource_path, data, 17);
            gd2c10->resource_load(&Class_5__integrate_forces_local_const[2], &resource_path);
            api10->godot_string_destroy(&resource_path);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5__integrate_forces_local_const[3], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {1, 0, 0, 0, 1, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5__integrate_forces_local_const[4], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {3, 0, 0, 0, 0, 0, 4, 66};
            int bytesRead;
            gd2c10->variant_decode(&Class_5__integrate_forces_local_const[5], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 15, 0, 0, 0, 65, 110, 105, 109, 97, 116, 105, 111, 110, 80, 108, 97, 121, 101, 114, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5__integrate_forces_local_const[6], data, 24, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 6, 0, 0, 0, 105, 109, 112, 97, 99, 116, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5__integrate_forces_local_const[7], data, 16, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 7, 0, 0, 0, 101, 120, 112, 108, 111, 100, 101, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5__integrate_forces_local_const[8], data, 16, &bytesRead, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 1, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5__integrate_forces_local_const[9], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 9, 0, 0, 0, 115, 111, 117, 110, 100, 95, 104, 105, 116, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5__integrate_forces_local_const[10], data, 20, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 18, 0, 0, 0, 65, 114, 109, 97, 116, 117, 114, 101, 47, 114, 97, 121, 95, 102, 108, 111, 111, 114, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5__integrate_forces_local_const[11], data, 28, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 17, 0, 0, 0, 65, 114, 109, 97, 116, 117, 114, 101, 47, 114, 97, 121, 95, 119, 97, 108, 108, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5__integrate_forces_local_const[12], data, 28, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 8, 0, 0, 0, 65, 114, 109, 97, 116, 117, 114, 101};
            int bytesRead;
            gd2c10->variant_decode(&Class_5__integrate_forces_local_const[13], data, 16, &bytesRead, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 2, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5__integrate_forces_local_const[14], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {13, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5__integrate_forces_local_const[15], data, 52, &bytesRead, true);
        }
        {
            char data[] = {103, 101, 116, 95, 115, 116, 101, 112};
            api10->godot_string_new(&Class_5__integrate_forces_strings[0]);
            api10->godot_string_parse_utf8_with_len(&Class_5__integrate_forces_strings[0], data, 8);
            api10->godot_string_name_new(&Class_5__integrate_forces_string_names[0], &Class_5__integrate_forces_strings[0]);
        }
        {
            char data[] = {103, 101, 116, 95, 108, 105, 110, 101, 97, 114, 95, 118, 101, 108, 111, 99, 105, 116, 121};
            api10->godot_string_new(&Class_5__integrate_forces_strings[1]);
            api10->godot_string_parse_utf8_with_len(&Class_5__integrate_forces_strings[1], data, 19);
            api10->godot_string_name_new(&Class_5__integrate_forces_string_names[1], &Class_5__integrate_forces_strings[1]);
        }
        {
            char data[] = {103, 101, 116, 95, 116, 111, 116, 97, 108, 95, 103, 114, 97, 118, 105, 116, 121};
            api10->godot_string_new(&Class_5__integrate_forces_strings[2]);
            api10->godot_string_parse_utf8_with_len(&Class_5__integrate_forces_strings[2], data, 17);
            api10->godot_string_name_new(&Class_5__integrate_forces_string_names[2], &Class_5__integrate_forces_strings[2]);
        }
        {
            char data[] = {110, 111, 114, 109, 97, 108, 105, 122, 101, 100};
            api10->godot_string_new(&Class_5__integrate_forces_strings[3]);
            api10->godot_string_parse_utf8_with_len(&Class_5__integrate_forces_strings[3], data, 10);
            api10->godot_string_name_new(&Class_5__integrate_forces_string_names[3], &Class_5__integrate_forces_strings[3]);
        }
        {
            char data[] = {115, 101, 116, 95, 108, 105, 110, 101, 97, 114, 95, 118, 101, 108, 111, 99, 105, 116, 121};
            api10->godot_string_new(&Class_5__integrate_forces_strings[4]);
            api10->godot_string_parse_utf8_with_len(&Class_5__integrate_forces_strings[4], data, 19);
            api10->godot_string_name_new(&Class_5__integrate_forces_string_names[4], &Class_5__integrate_forces_strings[4]);
        }
        {
            char data[] = {103, 101, 116, 95, 99, 111, 110, 116, 97, 99, 116, 95, 99, 111, 117, 110, 116};
            api10->godot_string_new(&Class_5__integrate_forces_strings[5]);
            api10->godot_string_parse_utf8_with_len(&Class_5__integrate_forces_strings[5], data, 17);
            api10->godot_string_name_new(&Class_5__integrate_forces_string_names[5], &Class_5__integrate_forces_strings[5]);
        }
        {
            char data[] = {103, 101, 116, 95, 99, 111, 110, 116, 97, 99, 116, 95, 99, 111, 108, 108, 105, 100, 101, 114, 95, 111, 98, 106, 101, 99, 116};
            api10->godot_string_new(&Class_5__integrate_forces_strings[6]);
            api10->godot_string_parse_utf8_with_len(&Class_5__integrate_forces_strings[6], data, 27);
            api10->godot_string_name_new(&Class_5__integrate_forces_string_names[6], &Class_5__integrate_forces_strings[6]);
        }
        {
            char data[] = {103, 101, 116, 95, 99, 111, 110, 116, 97, 99, 116, 95, 108, 111, 99, 97, 108, 95, 110, 111, 114, 109, 97, 108};
            api10->godot_string_new(&Class_5__integrate_forces_strings[7]);
            api10->godot_string_parse_utf8_with_len(&Class_5__integrate_forces_strings[7], data, 24);
            api10->godot_string_name_new(&Class_5__integrate_forces_string_names[7], &Class_5__integrate_forces_strings[7]);
        }
        {
            char data[] = {100, 105, 115, 97, 98, 108, 101, 100};
            api10->godot_string_new(&Class_5__integrate_forces_strings[8]);
            api10->godot_string_parse_utf8_with_len(&Class_5__integrate_forces_strings[8], data, 8);
            api10->godot_string_name_new(&Class_5__integrate_forces_string_names[8], &Class_5__integrate_forces_strings[8]);
        }
        {
            char data[] = {115, 101, 116, 95, 109, 111, 100, 101};
            api10->godot_string_new(&Class_5__integrate_forces_strings[9]);
            api10->godot_string_parse_utf8_with_len(&Class_5__integrate_forces_strings[9], data, 8);
            api10->godot_string_name_new(&Class_5__integrate_forces_string_names[9], &Class_5__integrate_forces_strings[9]);
        }
        {
            char data[] = {115, 101, 116, 95, 97, 110, 103, 117, 108, 97, 114, 95, 118, 101, 108, 111, 99, 105, 116, 121};
            api10->godot_string_new(&Class_5__integrate_forces_strings[10]);
            api10->godot_string_parse_utf8_with_len(&Class_5__integrate_forces_strings[10], data, 20);
            api10->godot_string_name_new(&Class_5__integrate_forces_string_names[10], &Class_5__integrate_forces_strings[10]);
        }
        {
            char data[] = {99, 114, 111, 115, 115};
            api10->godot_string_new(&Class_5__integrate_forces_strings[11]);
            api10->godot_string_parse_utf8_with_len(&Class_5__integrate_forces_strings[11], data, 5);
            api10->godot_string_name_new(&Class_5__integrate_forces_string_names[11], &Class_5__integrate_forces_strings[11]);
        }
        {
            char data[] = {103, 101, 116, 95, 110, 111, 100, 101};
            api10->godot_string_new(&Class_5__integrate_forces_strings[12]);
            api10->godot_string_parse_utf8_with_len(&Class_5__integrate_forces_strings[12], data, 8);
            api10->godot_string_name_new(&Class_5__integrate_forces_string_names[12], &Class_5__integrate_forces_strings[12]);
        }
        {
            char data[] = {112, 108, 97, 121};
            api10->godot_string_new(&Class_5__integrate_forces_strings[13]);
            api10->godot_string_parse_utf8_with_len(&Class_5__integrate_forces_strings[13], data, 4);
            api10->godot_string_name_new(&Class_5__integrate_forces_string_names[13], &Class_5__integrate_forces_strings[13]);
        }
        {
            char data[] = {113, 117, 101, 117, 101};
            api10->godot_string_new(&Class_5__integrate_forces_strings[14]);
            api10->godot_string_parse_utf8_with_len(&Class_5__integrate_forces_strings[14], data, 5);
            api10->godot_string_name_new(&Class_5__integrate_forces_string_names[14], &Class_5__integrate_forces_strings[14]);
        }
        {
            char data[] = {115, 101, 116, 95, 102, 114, 105, 99, 116, 105, 111, 110};
            api10->godot_string_new(&Class_5__integrate_forces_strings[15]);
            api10->godot_string_parse_utf8_with_len(&Class_5__integrate_forces_strings[15], data, 12);
            api10->godot_string_name_new(&Class_5__integrate_forces_string_names[15], &Class_5__integrate_forces_strings[15]);
        }
        {
            char data[] = {105, 115, 95, 99, 111, 108, 108, 105, 100, 105, 110, 103};
            api10->godot_string_new(&Class_5__integrate_forces_strings[16]);
            api10->godot_string_parse_utf8_with_len(&Class_5__integrate_forces_strings[16], data, 12);
            api10->godot_string_name_new(&Class_5__integrate_forces_string_names[16], &Class_5__integrate_forces_strings[16]);
        }
        {
            char data[] = {103, 101, 116, 95, 116, 114, 97, 110, 115, 102, 111, 114, 109};
            api10->godot_string_new(&Class_5__integrate_forces_strings[17]);
            api10->godot_string_parse_utf8_with_len(&Class_5__integrate_forces_strings[17], data, 13);
            api10->godot_string_name_new(&Class_5__integrate_forces_string_names[17], &Class_5__integrate_forces_strings[17]);
        }
        {
            char data[] = {98, 97, 115, 105, 115};
            api10->godot_string_new(&Class_5__integrate_forces_strings[18]);
            api10->godot_string_parse_utf8_with_len(&Class_5__integrate_forces_strings[18], data, 5);
            api10->godot_string_name_new(&Class_5__integrate_forces_string_names[18], &Class_5__integrate_forces_strings[18]);
        }
        {
            char data[] = {100, 111, 116};
            api10->godot_string_new(&Class_5__integrate_forces_strings[19]);
            api10->godot_string_parse_utf8_with_len(&Class_5__integrate_forces_strings[19], data, 3);
            api10->godot_string_name_new(&Class_5__integrate_forces_string_names[19], &Class_5__integrate_forces_strings[19]);
        }
        {
            char data[] = {120, 102, 111, 114, 109};
            api10->godot_string_new(&Class_5__integrate_forces_strings[20]);
            api10->godot_string_parse_utf8_with_len(&Class_5__integrate_forces_strings[20], data, 5);
            api10->godot_string_name_new(&Class_5__integrate_forces_string_names[20], &Class_5__integrate_forces_strings[20]);
        }
        {
            char data[] = {115, 101, 116, 95, 116, 114, 97, 110, 115, 102, 111, 114, 109};
            api10->godot_string_new(&Class_5__integrate_forces_strings[21]);
            api10->godot_string_parse_utf8_with_len(&Class_5__integrate_forces_strings[21], data, 13);
            api10->godot_string_name_new(&Class_5__integrate_forces_string_names[21], &Class_5__integrate_forces_strings[21]);
        }
        {
            char data[] = {108, 111, 111, 107, 105, 110, 103, 95, 97, 116};
            api10->godot_string_new(&Class_5__integrate_forces_strings[22]);
            api10->godot_string_parse_utf8_with_len(&Class_5__integrate_forces_strings[22], data, 10);
            api10->godot_string_name_new(&Class_5__integrate_forces_string_names[22], &Class_5__integrate_forces_strings[22]);
        }
        Class_5__integrate_forces_local_const_initialized = 1;
    }
    godot_variant st_1;
    godot_variant st_2;
    godot_variant st_3;
    godot_variant st_4;
    godot_variant st_5;
    godot_variant st_6;
    godot_variant st_7;
    godot_variant st_8;
    godot_variant st_9;
    godot_variant st_10;
    godot_variant st_11;
    godot_variant st_12;
    godot_variant st_13;
    godot_variant st_14;
    godot_variant st_15;
    goto _entry;
_entry:
    printf("%i : _entry\n", __LINE__);
    // <gd2c.bytecode.ParameterGDScriptOp object at 0x0597F190>;
    // DEFINE 67108864;
    // DEFINE 67108865;
    // DEFINE 67108866;
    // DEFINE 67108867;
    // DEFINE 67108868;
    // DEFINE 67108869;
    // DEFINE 67108870;
    // DEFINE 67108871;
    // DEFINE 67108872;
    // DEFINE 67108873;
    // DEFINE 67108874;
    // DEFINE 67108875;
    // DEFINE 67108876;
    // DEFINE 67108877;
    // DEFINE 67108878;
    // DEFINE 67108879;
    api10->godot_variant_new_nil(&st_1);
    api10->godot_variant_new_nil(&st_2);
    api10->godot_variant_new_nil(&st_3);
    api10->godot_variant_new_nil(&st_4);
    api10->godot_variant_new_nil(&st_5);
    api10->godot_variant_new_nil(&st_6);
    api10->godot_variant_new_nil(&st_7);
    api10->godot_variant_new_nil(&st_8);
    api10->godot_variant_new_nil(&st_9);
    api10->godot_variant_new_nil(&st_10);
    api10->godot_variant_new_nil(&st_11);
    api10->godot_variant_new_nil(&st_12);
    api10->godot_variant_new_nil(&st_13);
    api10->godot_variant_new_nil(&st_14);
    if (p_num_args > 0)
        api10->godot_variant_new_copy(&st_15, p_args[0]);
    goto _0;
_0:
    printf("%i : _0\n", __LINE__);
    goto _2;
_2:
    printf("%i : _2\n", __LINE__);
    {
        godot_variant call_result = api10->godot_variant_call(&st_15, &Class_5__integrate_forces_strings[0], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_3, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_1, &st_3);
    {
        godot_variant call_result = api10->godot_variant_call(&st_15, &Class_5__integrate_forces_strings[1], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_4, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_2, &st_4);
    {
        godot_variant call_result = api10->godot_variant_call(&st_15, &Class_5__integrate_forces_strings[2], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_5, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_3, &st_5);
    api11->godot_variant_evaluate(0, &st_3, &Class_5__integrate_forces_local_const[0], &st_4, &__flag);
    __flag = api10->godot_variant_as_bool(&st_4);
    if (!__flag)
        goto _39;
    goto _34;
_39:
    printf("%i : _39\n", __LINE__);
    api11->godot_variant_evaluate(8, &st_3, &st_1, &st_6, &__flag);
    api11->godot_variant_evaluate(6, &st_2, &st_6, &st_5, &__flag);
    api10->godot_variant_new_copy(&st_2, &st_5);
    {
        godot_variant call_result = api10->godot_variant_call(&st_3, &Class_5__integrate_forces_strings[3], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_6, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(10, &st_6, &st_6, &st_6, &__flag);
    api10->godot_variant_new_copy(&st_4, &st_6);
    __flag = api10->godot_variant_as_bool(&p_user_data->dying);
    if (!__flag)
        goto _76;
    goto _68;
_68:
    printf("%i : _68\n", __LINE__);
    {
        godot_variant *args[] = {&st_2};
        api10->godot_variant_call(&st_15, &Class_5__integrate_forces_strings[4], (const godot_variant **)args, 1, &__error);
    }
    api10->godot_variant_new_copy(&__return_value, &__nil);
    goto _2147483646;
_2147483646:
    printf("%i : _2147483646\n", __LINE__);
    api10->godot_variant_destroy(&st_1);
    api10->godot_variant_destroy(&st_2);
    api10->godot_variant_destroy(&st_3);
    api10->godot_variant_destroy(&st_4);
    api10->godot_variant_destroy(&st_5);
    api10->godot_variant_destroy(&st_6);
    api10->godot_variant_destroy(&st_7);
    api10->godot_variant_destroy(&st_8);
    api10->godot_variant_destroy(&st_9);
    api10->godot_variant_destroy(&st_10);
    api10->godot_variant_destroy(&st_11);
    api10->godot_variant_destroy(&st_12);
    api10->godot_variant_destroy(&st_13);
    api10->godot_variant_destroy(&st_14);
    api10->godot_variant_destroy(&st_15);
    goto _cleanup;
_76:
    printf("%i : _76\n", __LINE__);
    {
        godot_variant call_result = api10->godot_variant_call(&st_15, &Class_5__integrate_forces_strings[5], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_8, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant *args[] = {&st_8};
        gd2c10->variant_construct(&st_8, 2, 1, (const godot_variant **)args, &__error);
    }
    api10->godot_variant_new_copy(&st_7, &st_8);
    if (!gd2c10->variant_iter_init(&st_7, &st_6, &__flag))
    {
        goto _94;
    }
    else
    {
        gd2c10->variant_iter_get(&st_7, &st_6, &st_5, &__flag);
        goto _362;
    }
_362:
    printf("%i : _362\n", __LINE__);
    goto _364;
_364:
    printf("%i : _364\n", __LINE__);
    {
        godot_variant *args[] = {&st_5};
        godot_variant call_result = api10->godot_variant_call(&st_15, &Class_5__integrate_forces_strings[6], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_10, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_8, &st_10);
    {
        godot_variant *args[] = {&st_5};
        godot_variant call_result = api10->godot_variant_call(&st_15, &Class_5__integrate_forces_strings[7], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_11, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_9, &st_11);
    __flag = api10->godot_variant_as_bool(&st_8);
    if (!__flag)
        goto _385;
    goto _392;
_385:
    printf("%i : _385\n", __LINE__);
    goto _387;
_387:
    printf("%i : _387\n", __LINE__);
    if (!gd2c10->variant_iter_next(&st_7, &st_6, &__flag))
    {
        goto _94;
    }
    else
    {
        gd2c10->variant_iter_get(&st_7, &st_6, &st_5, &__flag);
        goto _364;
    }
_94:
    printf("%i : _94\n", __LINE__);
    goto _96;
_96:
    printf("%i : _96\n", __LINE__);
    {
        godot_variant *args[] = {&Class_5__integrate_forces_local_const[11]};
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_5__integrate_forces_strings[12], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_7, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant call_result = api10->godot_variant_call(&st_7, &Class_5__integrate_forces_strings[16], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_7, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_5, &st_7);
    {
        godot_variant *args[] = {&Class_5__integrate_forces_local_const[12]};
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_5__integrate_forces_strings[12], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_8, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant call_result = api10->godot_variant_call(&st_8, &Class_5__integrate_forces_strings[16], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_8, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_6, &st_8);
    api11->godot_variant_evaluate(23, &st_6, &st_6, &st_9, &__flag);
    __flag = api10->godot_variant_as_bool(&st_9);
    if (!__flag)
        goto _132;
    goto _355;
_355:
    printf("%i : _355\n", __LINE__);
    __flag = api10->godot_variant_as_bool(&st_5);
    if (!__flag)
        goto _132;
    goto _358;
_358:
    printf("%i : _358\n", __LINE__);
    api10->godot_variant_new_bool(&st_9, true);
    goto _136;
_136:
    printf("%i : _136\n", __LINE__);
    api10->godot_variant_new_copy(&st_7, &st_9);
    {
        godot_variant *args[] = {&Class_5__integrate_forces_local_const[13]};
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_5__integrate_forces_strings[12], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_10, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant call_result = api10->godot_variant_call(&st_10, &Class_5__integrate_forces_strings[17], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_10, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    gd2c10->variant_get_named(&st_10, &Class_5__integrate_forces_string_names[18], &st_10, &__flag);
    gd2c10->variant_get(&st_10, &Class_5__integrate_forces_local_const[14], &st_10, &__flag);
    {
        godot_variant call_result = api10->godot_variant_call(&st_10, &Class_5__integrate_forces_strings[3], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_10, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_8, &st_10);
    api10->godot_variant_new_copy(&st_9, &st_8);
    __flag = api10->godot_variant_as_bool(&st_7);
    if (!__flag)
        goto _296;
    goto _172;
_172:
    printf("%i : _172\n", __LINE__);
    {
        godot_variant *args[] = {&st_2};
        godot_variant call_result = api10->godot_variant_call(&st_8, &Class_5__integrate_forces_strings[19], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_10, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(2, &st_10, &p_user_data->max_speed, &st_10, &__flag);
    __flag = api10->godot_variant_as_bool(&st_10);
    if (!__flag)
        goto _186;
    goto _276;
_186:
    printf("%i : _186\n", __LINE__);
    {
        godot_variant *args[] = {&st_3};
        godot_variant call_result = api10->godot_variant_call(&st_8, &Class_5__integrate_forces_strings[11], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_11, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant call_result = api10->godot_variant_call(&st_11, &Class_5__integrate_forces_strings[3], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_11, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_9, &st_11);
    goto _202;
_202:
    printf("%i : _202\n", __LINE__);
    {
        godot_variant *args[] = {&st_2};
        godot_variant call_result = api10->godot_variant_call(&st_9, &Class_5__integrate_forces_strings[19], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_12, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_10, &st_12);
    api11->godot_variant_evaluate(8, &p_user_data->deaccel, &st_1, &st_13, &__flag);
    api11->godot_variant_evaluate(7, &st_10, &st_13, &st_12, &__flag);
    api10->godot_variant_new_copy(&st_10, &st_12);
    api11->godot_variant_evaluate(2, &st_10, &Class_5__integrate_forces_local_const[3], &st_11, &__flag);
    __flag = api10->godot_variant_as_bool(&st_11);
    if (!__flag)
        goto _237;
    goto _232;
_237:
    printf("%i : _237\n", __LINE__);
    {
        godot_variant *args[] = {&st_2};
        godot_variant call_result = api10->godot_variant_call(&st_9, &Class_5__integrate_forces_strings[19], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_14, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(8, &st_9, &st_14, &st_13, &__flag);
    api11->godot_variant_evaluate(7, &st_2, &st_13, &st_12, &__flag);
    api11->godot_variant_evaluate(8, &st_9, &st_10, &st_13, &__flag);
    api11->godot_variant_evaluate(6, &st_12, &st_13, &st_12, &__flag);
    api10->godot_variant_new_copy(&st_2, &st_12);
    {
        godot_variant *args[] = {&st_2};
        api10->godot_variant_call(&st_15, &Class_5__integrate_forces_strings[4], (const godot_variant **)args, 1, &__error);
    }
    api10->godot_variant_new_copy(&p_user_data->prev_advance, &st_7);
    goto _2147483646;
_232:
    printf("%i : _232\n", __LINE__);
    api10->godot_variant_new_copy(&st_10, &Class_5__integrate_forces_local_const[3]);
    goto _237;
_276:
    printf("%i : _276\n", __LINE__);
    api11->godot_variant_evaluate(8, &st_8, &p_user_data->accel, &st_12, &__flag);
    api11->godot_variant_evaluate(8, &st_12, &st_1, &st_12, &__flag);
    api11->godot_variant_evaluate(6, &st_2, &st_12, &st_11, &__flag);
    api10->godot_variant_new_copy(&st_2, &st_11);
    goto _186;
_296:
    printf("%i : _296\n", __LINE__);
    __flag = api10->godot_variant_as_bool(&p_user_data->prev_advance);
    if (!__flag)
        goto _304;
    goto _299;
_304:
    printf("%i : _304\n", __LINE__);
    api11->godot_variant_evaluate(8, &p_user_data->rot_dir, &p_user_data->rot_speed, &st_11, &__flag);
    api11->godot_variant_evaluate(8, &st_11, &st_1, &st_11, &__flag);
    {
        godot_variant *args[] = {&st_4, &st_11};
        gd2c10->variant_construct(&st_11, 12, 2, (const godot_variant **)args, &__error);
    }
    {
        godot_variant *args[] = {&st_8};
        godot_variant call_result = api10->godot_variant_call(&st_11, &Class_5__integrate_forces_strings[20], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_11, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_8, &st_11);
    {
        godot_variant *args[] = {&Class_5__integrate_forces_local_const[13]};
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_5__integrate_forces_strings[12], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_10, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(10, &st_8, &st_8, &st_11, &__flag);
    {
        godot_variant *args[] = {&st_11, &st_4};
        godot_variant call_result = api10->godot_variant_call(&Class_5__integrate_forces_local_const[15], &Class_5__integrate_forces_strings[22], (const godot_variant **)args, 2, &__error);
        api10->godot_variant_new_copy(&st_11, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant *args[] = {&st_11};
        api10->godot_variant_call(&st_10, &Class_5__integrate_forces_strings[21], (const godot_variant **)args, 1, &__error);
    }
    goto _202;
_299:
    printf("%i : _299\n", __LINE__);
    api10->godot_variant_new_copy(&p_user_data->rot_dir, &Class_5__integrate_forces_local_const[9]);
    goto _304;
_132:
    printf("%i : _132\n", __LINE__);
    api10->godot_variant_new_bool(&st_9, false);
    goto _136;
_392:
    printf("%i : _392\n", __LINE__);
    gd2c10->extends_test(&st_8, &Class_5__integrate_forces_local_const[2], &st_10);
    __flag = api10->godot_variant_as_bool(&st_10);
    if (!__flag)
        goto _411;
    goto _399;
_399:
    printf("%i : _399\n", __LINE__);
    gd2c10->variant_get_named(&st_8, &Class_5__integrate_forces_string_names[8], &st_10, &__flag);
    api11->godot_variant_evaluate(23, &st_10, &st_10, &st_10, &__flag);
    __flag = api10->godot_variant_as_bool(&st_10);
    if (!__flag)
        goto _411;
    goto _501;
_501:
    printf("%i : _501\n", __LINE__);
    api10->godot_variant_new_bool(&st_10, true);
    goto _415;
_415:
    printf("%i : _415\n", __LINE__);
    __flag = api10->godot_variant_as_bool(&st_10);
    if (!__flag)
        goto _385;
    goto _418;
_418:
    printf("%i : _418\n", __LINE__);
    {
        godot_variant *args[] = {&Class_5__integrate_forces_local_const[3]};
        api10->godot_variant_call(&p_user_data->__self, &Class_5__integrate_forces_strings[9], (const godot_variant **)args, 1, &__error);
    }
    api10->godot_variant_new_copy(&p_user_data->dying, &Class_5__integrate_forces_local_const[4]);
    {
        godot_variant *args[] = {&st_4};
        godot_variant call_result = api10->godot_variant_call(&st_9, &Class_5__integrate_forces_strings[11], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_10, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant call_result = api10->godot_variant_call(&st_10, &Class_5__integrate_forces_strings[3], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_10, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(10, &st_10, &st_10, &st_10, &__flag);
    api11->godot_variant_evaluate(8, &st_10, &Class_5__integrate_forces_local_const[5], &st_10, &__flag);
    {
        godot_variant *args[] = {&st_10};
        api10->godot_variant_call(&st_15, &Class_5__integrate_forces_strings[10], (const godot_variant **)args, 1, &__error);
    }
    {
        godot_variant *args[] = {&Class_5__integrate_forces_local_const[6]};
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_5__integrate_forces_strings[12], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_10, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant *args[] = {&Class_5__integrate_forces_local_const[7]};
        api10->godot_variant_call(&st_10, &Class_5__integrate_forces_strings[13], (const godot_variant **)args, 1, &__error);
    }
    {
        godot_variant *args[] = {&Class_5__integrate_forces_local_const[6]};
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_5__integrate_forces_strings[12], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_10, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant *args[] = {&Class_5__integrate_forces_local_const[8]};
        api10->godot_variant_call(&st_10, &Class_5__integrate_forces_strings[14], (const godot_variant **)args, 1, &__error);
    }
    {
        godot_variant *args[] = {&Class_5__integrate_forces_local_const[9]};
        api10->godot_variant_call(&p_user_data->__self, &Class_5__integrate_forces_strings[15], (const godot_variant **)args, 1, &__error);
    }
    gd2c10->variant_set_named(&st_8, &Class_5__integrate_forces_string_names[8], &Class_5__integrate_forces_local_const[4], &__flag);
    {
        godot_variant *args[] = {&Class_5__integrate_forces_local_const[10]};
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_5__integrate_forces_strings[12], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_10, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        api10->godot_variant_call(&st_10, &Class_5__integrate_forces_strings[13], (const godot_variant **)(void *)0, 0, &__error);
    }
    api10->godot_variant_new_copy(&__return_value, &__nil);
    goto _2147483646;
_411:
    printf("%i : _411\n", __LINE__);
    api10->godot_variant_new_bool(&st_10, false);
    goto _415;
_34:
    printf("%i : _34\n", __LINE__);
    api10->godot_variant_new_copy(&st_3, &Class_5__integrate_forces_local_const[1]);
    goto _39;
_cleanup:
    //printf("Exit: Class_5__integrate_forces_func\n");
    return __return_value;
}
void Class_5_vtable_init()
{
    vtable_init(&Class_5_vtable, &vtable, 6, "Class_5", 3, (void *)0, Class_5_vtable_methods, Class_5_vtable_method_names);
    VTABLE_METHOD(Class_5_vtable, 0, "_init", Class_5__init_func, (void *)0);
    VTABLE_METHOD(Class_5_vtable, 1, "_die", Class_5__die_func, (void *)0);
    VTABLE_METHOD(Class_5_vtable, 2, "_integrate_forces", Class_5__integrate_forces_func, (void *)0);
}
void *Class_7_ctor(godot_object *p_instance, void *p_method_data)
{
    printf("Enter: Class_7_ctor\n");
    struct Class_7_struct_t *user_data = api10->godot_alloc(sizeof(struct Class_7_struct_t));
    user_data->__vtable = &Class_7_vtable;
    api10->godot_variant_new_object(&user_data->__self, p_instance);
    Class_7__init_func(p_instance, (void *)0, user_data, 0, (void *)0);
    printf("Exit: Class_7_ctor\n");
    return user_data;
}
void Class_7_dtor(godot_object *p_instance, void *p_method_data, void *_p_user_data)
{
    struct Class_7_struct_t *p_user_data = (struct Class_7_struct_t *)_p_user_data;
    api10->godot_variant_destroy(&p_user_data->__self);
    api10->godot_free(p_user_data);
}
godot_variant Class_7_get_min_height(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_7_struct_t *p_user_data = (struct Class_7_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->min_height);
    return value;
}

void Class_7_set_min_height(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_7_struct_t *p_user_data = (struct Class_7_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->min_height, p_value);
}
godot_variant Class_7_get_max_height(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_7_struct_t *p_user_data = (struct Class_7_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->max_height);
    return value;
}

void Class_7_set_max_height(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_7_struct_t *p_user_data = (struct Class_7_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->max_height, p_value);
}
godot_variant Class_7_get_max_distance(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_7_struct_t *p_user_data = (struct Class_7_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->max_distance);
    return value;
}

void Class_7_set_max_distance(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_7_struct_t *p_user_data = (struct Class_7_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->max_distance, p_value);
}
godot_variant Class_7_get_min_distance(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_7_struct_t *p_user_data = (struct Class_7_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->min_distance);
    return value;
}

void Class_7_set_min_distance(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_7_struct_t *p_user_data = (struct Class_7_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->min_distance, p_value);
}
godot_variant Class_7_get_autoturn_ray_aperture(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_7_struct_t *p_user_data = (struct Class_7_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->autoturn_ray_aperture);
    return value;
}

void Class_7_set_autoturn_ray_aperture(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_7_struct_t *p_user_data = (struct Class_7_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->autoturn_ray_aperture, p_value);
}
godot_variant Class_7_get_angle_v_adjust(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_7_struct_t *p_user_data = (struct Class_7_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->angle_v_adjust);
    return value;
}

void Class_7_set_angle_v_adjust(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_7_struct_t *p_user_data = (struct Class_7_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->angle_v_adjust, p_value);
}
godot_variant Class_7_get_autoturn_speed(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_7_struct_t *p_user_data = (struct Class_7_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->autoturn_speed);
    return value;
}

void Class_7_set_autoturn_speed(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_7_struct_t *p_user_data = (struct Class_7_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->autoturn_speed, p_value);
}
godot_variant Class_7_get_collision_exception(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_7_struct_t *p_user_data = (struct Class_7_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->collision_exception);
    return value;
}

void Class_7_set_collision_exception(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_7_struct_t *p_user_data = (struct Class_7_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->collision_exception, p_value);
}
godot_variant Class_7__ready_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    //printf("Enter: Class_7__ready_func\n");
    struct Class_7_struct_t *p_user_data = (struct Class_7_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_7__ready_local_const_initialized)
    {
        {
            uint8_t data[] = {1, 0, 0, 0, 1, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_7__ready_local_const[0], data, 8, &bytesRead, true);
        }
        {
            char data[] = {97, 112, 112, 101, 110, 100};
            api10->godot_string_new(&Class_7__ready_strings[0]);
            api10->godot_string_parse_utf8_with_len(&Class_7__ready_strings[0], data, 6);
            api10->godot_string_name_new(&Class_7__ready_string_names[0], &Class_7__ready_strings[0]);
        }
        {
            char data[] = {103, 101, 116, 95, 114, 105, 100};
            api10->godot_string_new(&Class_7__ready_strings[1]);
            api10->godot_string_parse_utf8_with_len(&Class_7__ready_strings[1], data, 7);
            api10->godot_string_name_new(&Class_7__ready_string_names[1], &Class_7__ready_strings[1]);
        }
        {
            char data[] = {103, 101, 116, 95, 112, 97, 114, 101, 110, 116};
            api10->godot_string_new(&Class_7__ready_strings[2]);
            api10->godot_string_parse_utf8_with_len(&Class_7__ready_strings[2], data, 10);
            api10->godot_string_name_new(&Class_7__ready_string_names[2], &Class_7__ready_strings[2]);
        }
        {
            char data[] = {115, 101, 116, 95, 112, 104, 121, 115, 105, 99, 115, 95, 112, 114, 111, 99, 101, 115, 115};
            api10->godot_string_new(&Class_7__ready_strings[3]);
            api10->godot_string_parse_utf8_with_len(&Class_7__ready_strings[3], data, 19);
            api10->godot_string_name_new(&Class_7__ready_string_names[3], &Class_7__ready_strings[3]);
        }
        {
            char data[] = {115, 101, 116, 95, 97, 115, 95, 116, 111, 112, 108, 101, 118, 101, 108};
            api10->godot_string_new(&Class_7__ready_strings[4]);
            api10->godot_string_parse_utf8_with_len(&Class_7__ready_strings[4], data, 15);
            api10->godot_string_name_new(&Class_7__ready_string_names[4], &Class_7__ready_strings[4]);
        }
        Class_7__ready_local_const_initialized = 1;
    }
    godot_variant st_0;
    godot_variant st_1;
    godot_variant st_2;
    goto _entry;
_entry:
    printf("%i : _entry\n", __LINE__);
    // DEFINE 67108864;
    api10->godot_variant_new_nil(&st_0);
    api10->godot_variant_new_nil(&st_1);
    api10->godot_variant_new_nil(&st_2);
    goto _0;
_0:
    printf("%i : _0\n", __LINE__);
    goto _2;
_2:
    printf("%i : _2\n", __LINE__);
    api10->godot_variant_new_copy(&st_0, &p_user_data->__self);
    goto _7;
_7:
    printf("%i : _7\n", __LINE__);
    __flag = api10->godot_variant_as_bool(&st_0);
    if (!__flag)
        goto _10;
    goto _25;
_10:
    printf("%i : _10\n", __LINE__);
    goto _12;
_12:
    printf("%i : _12\n", __LINE__);
    {
        godot_variant *args[] = {&Class_7__ready_local_const[0]};
        api10->godot_variant_call(&p_user_data->__self, &Class_7__ready_strings[3], (const godot_variant **)args, 1, &__error);
    }
    {
        godot_variant *args[] = {&Class_7__ready_local_const[0]};
        api10->godot_variant_call(&p_user_data->__self, &Class_7__ready_strings[4], (const godot_variant **)args, 1, &__error);
    }
    goto _2147483646;
_2147483646:
    printf("%i : _2147483646\n", __LINE__);
    api10->godot_variant_destroy(&st_0);
    api10->godot_variant_destroy(&st_1);
    api10->godot_variant_destroy(&st_2);
    goto _cleanup;
_25:
    printf("%i : _25\n", __LINE__);
    gd2c10->extends_test(&st_0, &global_classdb_array[280], &st_1);
    __flag = api10->godot_variant_as_bool(&st_1);
    if (!__flag)
        goto _45;
    goto _32;
_45:
    printf("%i : _45\n", __LINE__);
    {
        godot_variant call_result = api10->godot_variant_call(&st_0, &Class_7__ready_strings[2], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_2, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_0, &st_2);
    goto _7;
_32:
    printf("%i : _32\n", __LINE__);
    {
        godot_variant call_result = api10->godot_variant_call(&st_0, &Class_7__ready_strings[1], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_1, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant *args[] = {&st_1};
        api10->godot_variant_call(&p_user_data->collision_exception, &Class_7__ready_strings[0], (const godot_variant **)args, 1, &__error);
    }
    goto _10;
_cleanup:
    //printf("Exit: Class_7__ready_func\n");
    return __return_value;
}
godot_variant Class_7__physics_process_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    //printf("Enter: Class_7__physics_process_func\n");
    struct Class_7_struct_t *p_user_data = (struct Class_7_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_7__physics_process_local_const_initialized)
    {
        {
            uint8_t data[] = {7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_7__physics_process_local_const[0], data, 16, &bytesRead, true);
        }
        {
            uint8_t data[] = {7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_7__physics_process_local_const[1], data, 16, &bytesRead, true);
        }
        {
            uint8_t data[] = {3, 0, 1, 0, 45, 67, 28, 235, 226, 54, 26, 63};
            int bytesRead;
            gd2c10->variant_decode(&Class_7__physics_process_local_const[2], data, 12, &bytesRead, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_7__physics_process_local_const[3], data, 8, &bytesRead, true);
        }
        {
            char data[] = {103, 101, 116, 95, 112, 97, 114, 101, 110, 116};
            api10->godot_string_new(&Class_7__physics_process_strings[0]);
            api10->godot_string_parse_utf8_with_len(&Class_7__physics_process_strings[0], data, 10);
            api10->godot_string_name_new(&Class_7__physics_process_string_names[0], &Class_7__physics_process_strings[0]);
        }
        {
            char data[] = {103, 101, 116, 95, 103, 108, 111, 98, 97, 108, 95, 116, 114, 97, 110, 115, 102, 111, 114, 109};
            api10->godot_string_new(&Class_7__physics_process_strings[1]);
            api10->godot_string_parse_utf8_with_len(&Class_7__physics_process_strings[1], data, 20);
            api10->godot_string_name_new(&Class_7__physics_process_string_names[1], &Class_7__physics_process_strings[1]);
        }
        {
            char data[] = {111, 114, 105, 103, 105, 110};
            api10->godot_string_new(&Class_7__physics_process_strings[2]);
            api10->godot_string_parse_utf8_with_len(&Class_7__physics_process_strings[2], data, 6);
            api10->godot_string_name_new(&Class_7__physics_process_string_names[2], &Class_7__physics_process_strings[2]);
        }
        {
            char data[] = {108, 101, 110, 103, 116, 104};
            api10->godot_string_new(&Class_7__physics_process_strings[3]);
            api10->godot_string_parse_utf8_with_len(&Class_7__physics_process_strings[3], data, 6);
            api10->godot_string_name_new(&Class_7__physics_process_string_names[3], &Class_7__physics_process_strings[3]);
        }
        {
            char data[] = {110, 111, 114, 109, 97, 108, 105, 122, 101, 100};
            api10->godot_string_new(&Class_7__physics_process_strings[4]);
            api10->godot_string_parse_utf8_with_len(&Class_7__physics_process_strings[4], data, 10);
            api10->godot_string_name_new(&Class_7__physics_process_string_names[4], &Class_7__physics_process_strings[4]);
        }
        {
            char data[] = {121};
            api10->godot_string_new(&Class_7__physics_process_strings[5]);
            api10->godot_string_parse_utf8_with_len(&Class_7__physics_process_strings[5], data, 1);
            api10->godot_string_name_new(&Class_7__physics_process_string_names[5], &Class_7__physics_process_strings[5]);
        }
        {
            char data[] = {115, 112, 97, 99, 101, 95, 103, 101, 116, 95, 100, 105, 114, 101, 99, 116, 95, 115, 116, 97, 116, 101};
            api10->godot_string_new(&Class_7__physics_process_strings[6]);
            api10->godot_string_parse_utf8_with_len(&Class_7__physics_process_strings[6], data, 22);
            api10->godot_string_name_new(&Class_7__physics_process_string_names[6], &Class_7__physics_process_strings[6]);
        }
        {
            char data[] = {103, 101, 116, 95, 119, 111, 114, 108, 100};
            api10->godot_string_new(&Class_7__physics_process_strings[7]);
            api10->godot_string_parse_utf8_with_len(&Class_7__physics_process_strings[7], data, 9);
            api10->godot_string_name_new(&Class_7__physics_process_string_names[7], &Class_7__physics_process_strings[7]);
        }
        {
            char data[] = {103, 101, 116, 95, 115, 112, 97, 99, 101};
            api10->godot_string_new(&Class_7__physics_process_strings[8]);
            api10->godot_string_parse_utf8_with_len(&Class_7__physics_process_strings[8], data, 9);
            api10->godot_string_name_new(&Class_7__physics_process_string_names[8], &Class_7__physics_process_strings[8]);
        }
        {
            char data[] = {105, 110, 116, 101, 114, 115, 101, 99, 116, 95, 114, 97, 121};
            api10->godot_string_new(&Class_7__physics_process_strings[9]);
            api10->godot_string_parse_utf8_with_len(&Class_7__physics_process_strings[9], data, 13);
            api10->godot_string_name_new(&Class_7__physics_process_string_names[9], &Class_7__physics_process_strings[9]);
        }
        {
            char data[] = {120, 102, 111, 114, 109};
            api10->godot_string_new(&Class_7__physics_process_strings[10]);
            api10->godot_string_parse_utf8_with_len(&Class_7__physics_process_strings[10], data, 5);
            api10->godot_string_name_new(&Class_7__physics_process_string_names[10], &Class_7__physics_process_strings[10]);
        }
        {
            char data[] = {101, 109, 112, 116, 121};
            api10->godot_string_new(&Class_7__physics_process_strings[11]);
            api10->godot_string_parse_utf8_with_len(&Class_7__physics_process_strings[11], data, 5);
            api10->godot_string_name_new(&Class_7__physics_process_string_names[11], &Class_7__physics_process_strings[11]);
        }
        {
            char data[] = {112, 111, 115, 105, 116, 105, 111, 110};
            api10->godot_string_new(&Class_7__physics_process_strings[12]);
            api10->godot_string_parse_utf8_with_len(&Class_7__physics_process_strings[12], data, 8);
            api10->godot_string_name_new(&Class_7__physics_process_string_names[12], &Class_7__physics_process_strings[12]);
        }
        {
            char data[] = {108, 111, 111, 107, 95, 97, 116, 95, 102, 114, 111, 109, 95, 112, 111, 115, 105, 116, 105, 111, 110};
            api10->godot_string_new(&Class_7__physics_process_strings[13]);
            api10->godot_string_parse_utf8_with_len(&Class_7__physics_process_strings[13], data, 21);
            api10->godot_string_name_new(&Class_7__physics_process_string_names[13], &Class_7__physics_process_strings[13]);
        }
        {
            char data[] = {103, 101, 116, 95, 116, 114, 97, 110, 115, 102, 111, 114, 109};
            api10->godot_string_new(&Class_7__physics_process_strings[14]);
            api10->godot_string_parse_utf8_with_len(&Class_7__physics_process_strings[14], data, 13);
            api10->godot_string_name_new(&Class_7__physics_process_string_names[14], &Class_7__physics_process_strings[14]);
        }
        {
            char data[] = {98, 97, 115, 105, 115};
            api10->godot_string_new(&Class_7__physics_process_strings[15]);
            api10->godot_string_parse_utf8_with_len(&Class_7__physics_process_strings[15], data, 5);
            api10->godot_string_name_new(&Class_7__physics_process_string_names[15], &Class_7__physics_process_strings[15]);
        }
        {
            char data[] = {115, 101, 116, 95, 116, 114, 97, 110, 115, 102, 111, 114, 109};
            api10->godot_string_new(&Class_7__physics_process_strings[16]);
            api10->godot_string_parse_utf8_with_len(&Class_7__physics_process_strings[16], data, 13);
            api10->godot_string_name_new(&Class_7__physics_process_string_names[16], &Class_7__physics_process_strings[16]);
        }
        Class_7__physics_process_local_const_initialized = 1;
    }
    godot_variant st_1;
    godot_variant st_2;
    godot_variant st_3;
    godot_variant st_4;
    godot_variant st_5;
    godot_variant st_6;
    godot_variant st_7;
    godot_variant st_8;
    godot_variant st_9;
    godot_variant st_10;
    godot_variant st_11;
    godot_variant st_12;
    godot_variant st_13;
    godot_variant st_15;
    goto _entry;
_entry:
    printf("%i : _entry\n", __LINE__);
    // <gd2c.bytecode.ParameterGDScriptOp object at 0x059784F0>;
    // DEFINE 67108864;
    // DEFINE 67108865;
    // DEFINE 67108866;
    // DEFINE 67108867;
    api10->godot_variant_new_nil(&st_1);
    api10->godot_variant_new_nil(&st_2);
    api10->godot_variant_new_nil(&st_3);
    api10->godot_variant_new_nil(&st_4);
    api10->godot_variant_new_nil(&st_5);
    api10->godot_variant_new_nil(&st_6);
    api10->godot_variant_new_nil(&st_7);
    api10->godot_variant_new_nil(&st_8);
    api10->godot_variant_new_nil(&st_9);
    api10->godot_variant_new_nil(&st_10);
    api10->godot_variant_new_nil(&st_11);
    api10->godot_variant_new_nil(&st_12);
    api10->godot_variant_new_nil(&st_13);
    if (p_num_args > 0)
        api10->godot_variant_new_copy(&st_15, p_args[0]);
    goto _0;
_0:
    printf("%i : _0\n", __LINE__);
    goto _2;
_2:
    printf("%i : _2\n", __LINE__);
    {
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_7__physics_process_strings[0], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_3, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant call_result = api10->godot_variant_call(&st_3, &Class_7__physics_process_strings[1], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_3, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    gd2c10->variant_get_named(&st_3, &Class_7__physics_process_string_names[2], &st_3, &__flag);
    api10->godot_variant_new_copy(&st_1, &st_3);
    {
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_7__physics_process_strings[1], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_4, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    gd2c10->variant_get_named(&st_4, &Class_7__physics_process_string_names[2], &st_4, &__flag);
    api10->godot_variant_new_copy(&st_2, &st_4);
    api10->godot_variant_new_copy(&st_3, &Class_7__physics_process_local_const[0]);
    api11->godot_variant_evaluate(7, &st_2, &st_1, &st_6, &__flag);
    api10->godot_variant_new_copy(&st_4, &st_6);
    {
        godot_variant call_result = api10->godot_variant_call(&st_4, &Class_7__physics_process_strings[3], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_5, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(2, &st_5, &p_user_data->min_distance, &st_5, &__flag);
    __flag = api10->godot_variant_as_bool(&st_5);
    if (!__flag)
        goto _455;
    goto _55;
_55:
    printf("%i : _55\n", __LINE__);
    {
        godot_variant call_result = api10->godot_variant_call(&st_4, &Class_7__physics_process_strings[4], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_6, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(8, &st_6, &p_user_data->min_distance, &st_6, &__flag);
    api10->godot_variant_new_copy(&st_4, &st_6);
    goto _70;
_70:
    printf("%i : _70\n", __LINE__);
    gd2c10->variant_get_named(&st_4, &Class_7__physics_process_string_names[5], &st_5, &__flag);
    api11->godot_variant_evaluate(4, &st_5, &p_user_data->max_height, &st_5, &__flag);
    __flag = api10->godot_variant_as_bool(&st_5);
    if (!__flag)
        goto _82;
    goto _449;
_82:
    printf("%i : _82\n", __LINE__);
    gd2c10->variant_get_named(&st_4, &Class_7__physics_process_string_names[5], &st_5, &__flag);
    api11->godot_variant_evaluate(2, &st_5, &p_user_data->min_height, &st_5, &__flag);
    __flag = api10->godot_variant_as_bool(&st_5);
    if (!__flag)
        goto _94;
    goto _443;
_443:
    printf("%i : _443\n", __LINE__);
    gd2c10->variant_set_named(&st_4, &Class_7__physics_process_string_names[5], &p_user_data->min_height, &__flag);
    goto _94;
_94:
    printf("%i : _94\n", __LINE__);
    {
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_7__physics_process_strings[7], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_8, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant call_result = api10->godot_variant_call(&st_8, &Class_7__physics_process_strings[8], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_8, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant *args[] = {&st_8};
        godot_variant call_result = api10->godot_variant_call(&global_classdb_array[82], &Class_7__physics_process_strings[6], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_7, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_5, &st_7);
    {
        godot_variant *args[] = {&p_user_data->autoturn_ray_aperture};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(36, (const godot_variant **)args, 1, &st_9, &err);
    }
    {
        godot_variant *args[] = {&st_3, &st_9};
        gd2c10->variant_construct(&st_9, 12, 2, (const godot_variant **)args, &__error);
    }
    {
        godot_variant *args[] = {&st_4};
        godot_variant call_result = api10->godot_variant_call(&st_9, &Class_7__physics_process_strings[10], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_9, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(6, &st_1, &st_9, &st_8, &__flag);
    {
        godot_variant *args[] = {&st_1, &st_8, &p_user_data->collision_exception};
        godot_variant call_result = api10->godot_variant_call(&st_5, &Class_7__physics_process_strings[9], (const godot_variant **)args, 3, &__error);
        api10->godot_variant_new_copy(&st_8, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_6, &st_8);
    api11->godot_variant_evaluate(6, &st_1, &st_4, &st_9, &__flag);
    {
        godot_variant *args[] = {&st_1, &st_9, &p_user_data->collision_exception};
        godot_variant call_result = api10->godot_variant_call(&st_5, &Class_7__physics_process_strings[9], (const godot_variant **)args, 3, &__error);
        api10->godot_variant_new_copy(&st_9, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_7, &st_9);
    api11->godot_variant_evaluate(10, &p_user_data->autoturn_ray_aperture, &p_user_data->autoturn_ray_aperture, &st_11, &__flag);
    {
        godot_variant *args[] = {&st_11};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(36, (const godot_variant **)args, 1, &st_11, &err);
    }
    {
        godot_variant *args[] = {&st_3, &st_11};
        gd2c10->variant_construct(&st_11, 12, 2, (const godot_variant **)args, &__error);
    }
    {
        godot_variant *args[] = {&st_4};
        godot_variant call_result = api10->godot_variant_call(&st_11, &Class_7__physics_process_strings[10], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_11, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(6, &st_1, &st_11, &st_10, &__flag);
    {
        godot_variant *args[] = {&st_1, &st_10, &p_user_data->collision_exception};
        godot_variant call_result = api10->godot_variant_call(&st_5, &Class_7__physics_process_strings[9], (const godot_variant **)args, 3, &__error);
        api10->godot_variant_new_copy(&st_10, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_8, &st_10);
    {
        godot_variant call_result = api10->godot_variant_call(&st_7, &Class_7__physics_process_strings[11], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_9, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(23, &st_9, &st_9, &st_9, &__flag);
    __flag = api10->godot_variant_as_bool(&st_9);
    if (!__flag)
        goto _213;
    goto _429;
_429:
    printf("%i : _429\n", __LINE__);
    gd2c10->variant_get_named(&st_7, &Class_7__physics_process_string_names[12], &st_10, &__flag);
    api11->godot_variant_evaluate(7, &st_10, &st_1, &st_10, &__flag);
    api10->godot_variant_new_copy(&st_4, &st_10);
    goto _273;
_273:
    printf("%i : _273\n", __LINE__);
    api11->godot_variant_evaluate(0, &st_4, &Class_7__physics_process_local_const[1], &st_9, &__flag);
    __flag = api10->godot_variant_as_bool(&st_9);
    if (!__flag)
        goto _301;
    goto _281;
_301:
    printf("%i : _301\n", __LINE__);
    api11->godot_variant_evaluate(6, &st_1, &st_4, &st_10, &__flag);
    api10->godot_variant_new_copy(&st_2, &st_10);
    {
        godot_variant *args[] = {&st_2, &st_1, &st_3};
        api10->godot_variant_call(&p_user_data->__self, &Class_7__physics_process_strings[13], (const godot_variant **)args, 3, &__error);
    }
    {
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_7__physics_process_strings[14], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_11, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_9, &st_11);
    gd2c10->variant_get_named(&st_9, &Class_7__physics_process_string_names[15], &st_12, &__flag);
    gd2c10->variant_get(&st_12, &Class_7__physics_process_local_const[3], &st_12, &__flag);
    {
        godot_variant *args[] = {&p_user_data->angle_v_adjust};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(36, (const godot_variant **)args, 1, &st_13, &err);
    }
    {
        godot_variant *args[] = {&st_12, &st_13};
        gd2c10->variant_construct(&st_12, 12, 2, (const godot_variant **)args, &__error);
    }
    gd2c10->variant_get_named(&st_9, &Class_7__physics_process_string_names[15], &st_13, &__flag);
    api11->godot_variant_evaluate(8, &st_12, &st_13, &st_12, &__flag);
    gd2c10->variant_set_named(&st_9, &Class_7__physics_process_string_names[15], &st_12, &__flag);
    {
        godot_variant *args[] = {&st_9};
        api10->godot_variant_call(&p_user_data->__self, &Class_7__physics_process_strings[16], (const godot_variant **)args, 1, &__error);
    }
    goto _2147483646;
_2147483646:
    printf("%i : _2147483646\n", __LINE__);
    api10->godot_variant_destroy(&st_1);
    api10->godot_variant_destroy(&st_2);
    api10->godot_variant_destroy(&st_3);
    api10->godot_variant_destroy(&st_4);
    api10->godot_variant_destroy(&st_5);
    api10->godot_variant_destroy(&st_6);
    api10->godot_variant_destroy(&st_7);
    api10->godot_variant_destroy(&st_8);
    api10->godot_variant_destroy(&st_9);
    api10->godot_variant_destroy(&st_10);
    api10->godot_variant_destroy(&st_11);
    api10->godot_variant_destroy(&st_12);
    api10->godot_variant_destroy(&st_13);
    api10->godot_variant_destroy(&st_15);
    goto _cleanup;
_281:
    printf("%i : _281\n", __LINE__);
    api11->godot_variant_evaluate(7, &st_2, &st_1, &st_10, &__flag);
    {
        godot_variant call_result = api10->godot_variant_call(&st_10, &Class_7__physics_process_strings[4], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_10, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(8, &st_10, &Class_7__physics_process_local_const[2], &st_10, &__flag);
    api10->godot_variant_new_copy(&st_4, &st_10);
    goto _301;
_213:
    printf("%i : _213\n", __LINE__);
    {
        godot_variant call_result = api10->godot_variant_call(&st_6, &Class_7__physics_process_strings[11], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_9, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(23, &st_9, &st_9, &st_9, &__flag);
    __flag = api10->godot_variant_as_bool(&st_9);
    if (!__flag)
        goto _234;
    goto _226;
_226:
    printf("%i : _226\n", __LINE__);
    {
        godot_variant call_result = api10->godot_variant_call(&st_8, &Class_7__physics_process_strings[11], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_9, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    __flag = api10->godot_variant_as_bool(&st_9);
    if (!__flag)
        goto _234;
    goto _425;
_425:
    printf("%i : _425\n", __LINE__);
    api10->godot_variant_new_bool(&st_9, true);
    goto _238;
_238:
    printf("%i : _238\n", __LINE__);
    __flag = api10->godot_variant_as_bool(&st_9);
    if (!__flag)
        goto _364;
    goto _241;
_241:
    printf("%i : _241\n", __LINE__);
    api11->godot_variant_evaluate(10, &st_15, &st_15, &st_10, &__flag);
    api11->godot_variant_evaluate(8, &st_10, &p_user_data->autoturn_speed, &st_10, &__flag);
    {
        godot_variant *args[] = {&st_10};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(36, (const godot_variant **)args, 1, &st_10, &err);
    }
    {
        godot_variant *args[] = {&st_3, &st_10};
        gd2c10->variant_construct(&st_10, 12, 2, (const godot_variant **)args, &__error);
    }
    {
        godot_variant *args[] = {&st_4};
        godot_variant call_result = api10->godot_variant_call(&st_10, &Class_7__physics_process_strings[10], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_10, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_4, &st_10);
    goto _273;
_364:
    printf("%i : _364\n", __LINE__);
    {
        godot_variant call_result = api10->godot_variant_call(&st_6, &Class_7__physics_process_strings[11], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_9, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    __flag = api10->godot_variant_as_bool(&st_9);
    if (!__flag)
        goto _372;
    goto _408;
_408:
    printf("%i : _408\n", __LINE__);
    {
        godot_variant call_result = api10->godot_variant_call(&st_8, &Class_7__physics_process_strings[11], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_9, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(23, &st_9, &st_9, &st_9, &__flag);
    __flag = api10->godot_variant_as_bool(&st_9);
    if (!__flag)
        goto _372;
    goto _421;
_421:
    printf("%i : _421\n", __LINE__);
    api10->godot_variant_new_bool(&st_9, true);
    goto _376;
_376:
    printf("%i : _376\n", __LINE__);
    __flag = api10->godot_variant_as_bool(&st_9);
    if (!__flag)
        goto _379;
    goto _381;
_379:
    printf("%i : _379\n", __LINE__);
    goto _273;
_381:
    printf("%i : _381\n", __LINE__);
    api11->godot_variant_evaluate(8, &st_15, &p_user_data->autoturn_speed, &st_10, &__flag);
    {
        godot_variant *args[] = {&st_10};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(36, (const godot_variant **)args, 1, &st_10, &err);
    }
    {
        godot_variant *args[] = {&st_3, &st_10};
        gd2c10->variant_construct(&st_10, 12, 2, (const godot_variant **)args, &__error);
    }
    {
        godot_variant *args[] = {&st_4};
        godot_variant call_result = api10->godot_variant_call(&st_10, &Class_7__physics_process_strings[10], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_10, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_4, &st_10);
    goto _273;
_372:
    printf("%i : _372\n", __LINE__);
    api10->godot_variant_new_bool(&st_9, false);
    goto _376;
_234:
    printf("%i : _234\n", __LINE__);
    api10->godot_variant_new_bool(&st_9, false);
    goto _238;
_449:
    printf("%i : _449\n", __LINE__);
    gd2c10->variant_set_named(&st_4, &Class_7__physics_process_string_names[5], &p_user_data->max_height, &__flag);
    goto _82;
_455:
    printf("%i : _455\n", __LINE__);
    {
        godot_variant call_result = api10->godot_variant_call(&st_4, &Class_7__physics_process_strings[3], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_5, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(4, &st_5, &p_user_data->max_distance, &st_5, &__flag);
    __flag = api10->godot_variant_as_bool(&st_5);
    if (!__flag)
        goto _70;
    goto _468;
_468:
    printf("%i : _468\n", __LINE__);
    {
        godot_variant call_result = api10->godot_variant_call(&st_4, &Class_7__physics_process_strings[4], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_6, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(8, &st_6, &p_user_data->max_distance, &st_6, &__flag);
    api10->godot_variant_new_copy(&st_4, &st_6);
    goto _70;
_cleanup:
    //printf("Exit: Class_7__physics_process_func\n");
    return __return_value;
}
godot_variant Class_7__init_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    //printf("Enter: Class_7__init_func\n");
    struct Class_7_struct_t *p_user_data = (struct Class_7_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_7__init_local_const_initialized)
    {
        {
            uint8_t data[] = {3, 0, 0, 0, 0, 0, 0, 63};
            int bytesRead;
            gd2c10->variant_decode(&Class_7__init_local_const[0], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {3, 0, 0, 0, 0, 0, 96, 64};
            int bytesRead;
            gd2c10->variant_decode(&Class_7__init_local_const[1], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {3, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_7__init_local_const[2], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 25, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_7__init_local_const[3], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 50, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_7__init_local_const[4], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {3, 0, 0, 0, 0, 0, 0, 64};
            int bytesRead;
            gd2c10->variant_decode(&Class_7__init_local_const[5], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_7__init_local_const[6], data, 8, &bytesRead, true);
        }
        Class_7__init_local_const_initialized = 1;
    }
    godot_variant st_0;
    goto _entry;
_entry:
    printf("%i : _entry\n", __LINE__);
    // DEFINE 67108864;
    // DEFINE 67108865;
    // DEFINE 67108866;
    // DEFINE 67108867;
    // DEFINE 67108868;
    // DEFINE 67108869;
    // DEFINE 67108870;
    api10->godot_variant_new_nil(&st_0);
    goto _0;
_0:
    printf("%i : _0\n", __LINE__);
    goto _2;
_2:
    printf("%i : _2\n", __LINE__);
    {
        godot_array arr;
        api10->godot_array_new(&arr);
        api10->godot_array_resize(&arr, 0);
        api10->godot_variant_new_array(&st_0, &arr);
        api10->godot_array_destroy(&arr);
    }
    api10->godot_variant_new_copy(&p_user_data->collision_exception, &st_0);
    api10->godot_variant_new_copy(&p_user_data->min_distance, &Class_7__init_local_const[0]);
    api10->godot_variant_new_copy(&p_user_data->max_distance, &Class_7__init_local_const[1]);
    api10->godot_variant_new_copy(&p_user_data->angle_v_adjust, &Class_7__init_local_const[2]);
    api10->godot_variant_new_copy(&p_user_data->autoturn_ray_aperture, &Class_7__init_local_const[3]);
    api10->godot_variant_new_copy(&p_user_data->autoturn_speed, &Class_7__init_local_const[4]);
    api10->godot_variant_new_copy(&p_user_data->max_height, &Class_7__init_local_const[5]);
    api10->godot_variant_new_copy(&p_user_data->min_height, &Class_7__init_local_const[6]);
    goto _2147483646;
_2147483646:
    printf("%i : _2147483646\n", __LINE__);
    api10->godot_variant_destroy(&st_0);
    goto _cleanup;
_cleanup:
    //printf("Exit: Class_7__init_func\n");
    return __return_value;
}
void Class_7_vtable_init()
{
    vtable_init(&Class_7_vtable, &vtable, 8, "Class_7", 3, (void *)0, Class_7_vtable_methods, Class_7_vtable_method_names);
    VTABLE_METHOD(Class_7_vtable, 0, "_ready", Class_7__ready_func, (void *)0);
    VTABLE_METHOD(Class_7_vtable, 1, "_physics_process", Class_7__physics_process_func, (void *)0);
    VTABLE_METHOD(Class_7_vtable, 2, "_init", Class_7__init_func, (void *)0);
}
void *Class_9_ctor(godot_object *p_instance, void *p_method_data)
{
    printf("Enter: Class_9_ctor\n");
    struct Class_9_struct_t *user_data = api10->godot_alloc(sizeof(struct Class_9_struct_t));
    user_data->__vtable = &Class_9_vtable;
    api10->godot_variant_new_object(&user_data->__self, p_instance);
    Class_9__init_func(p_instance, (void *)0, user_data, 0, (void *)0);
    printf("Exit: Class_9_ctor\n");
    return user_data;
}
void Class_9_dtor(godot_object *p_instance, void *p_method_data, void *_p_user_data)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    api10->godot_variant_destroy(&p_user_data->__self);
    api10->godot_free(p_user_data);
}
godot_variant Class_9_get_linear_velocity(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->linear_velocity);
    return value;
}

void Class_9_set_linear_velocity(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->linear_velocity, p_value);
}
godot_variant Class_9_get_accel(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->accel);
    return value;
}

void Class_9_set_accel(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->accel, p_value);
}
godot_variant Class_9_get_shoot_blend(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->shoot_blend);
    return value;
}

void Class_9_set_shoot_blend(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->shoot_blend, p_value);
}
godot_variant Class_9_get_facing_dir(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->facing_dir);
    return value;
}

void Class_9_set_facing_dir(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->facing_dir, p_value);
}
godot_variant Class_9_get_prev_shoot(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->prev_shoot);
    return value;
}

void Class_9_set_prev_shoot(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->prev_shoot, p_value);
}
godot_variant Class_9_get_sharp_turn_threshold(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->sharp_turn_threshold);
    return value;
}

void Class_9_set_sharp_turn_threshold(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->sharp_turn_threshold, p_value);
}
godot_variant Class_9_get_jumping(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->jumping);
    return value;
}

void Class_9_set_jumping(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->jumping, p_value);
}
godot_variant Class_9_get_turn_speed(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->turn_speed);
    return value;
}

void Class_9_set_turn_speed(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->turn_speed, p_value);
}
godot_variant Class_9_get_movement_dir(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->movement_dir);
    return value;
}

void Class_9_set_movement_dir(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->movement_dir, p_value);
}
godot_variant Class_9_get_max_speed(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->max_speed);
    return value;
}

void Class_9_set_max_speed(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->max_speed, p_value);
}
godot_variant Class_9_get_keep_jump_inertia(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->keep_jump_inertia);
    return value;
}

void Class_9_set_keep_jump_inertia(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->keep_jump_inertia, p_value);
}
godot_variant Class_9_get_air_idle_deaccel(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->air_idle_deaccel);
    return value;
}

void Class_9_set_air_idle_deaccel(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->air_idle_deaccel, p_value);
}
godot_variant Class_9_get_deaccel(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->deaccel);
    return value;
}

void Class_9_set_deaccel(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->deaccel, p_value);
}
godot_variant Class_9__ready_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    //printf("Enter: Class_9__ready_func\n");
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_9__ready_local_const_initialized)
    {
        {
            uint8_t data[] = {4, 0, 0, 0, 19, 0, 0, 0, 65, 110, 105, 109, 97, 116, 105, 111, 110, 84, 114, 101, 101, 80, 108, 97, 121, 101, 114, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__ready_local_const[0], data, 28, &bytesRead, true);
        }
        {
            uint8_t data[] = {1, 0, 0, 0, 1, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__ready_local_const[1], data, 8, &bytesRead, true);
        }
        {
            char data[] = {103, 101, 116, 95, 110, 111, 100, 101};
            api10->godot_string_new(&Class_9__ready_strings[0]);
            api10->godot_string_parse_utf8_with_len(&Class_9__ready_strings[0], data, 8);
            api10->godot_string_name_new(&Class_9__ready_string_names[0], &Class_9__ready_strings[0]);
        }
        {
            char data[] = {115, 101, 116, 95, 97, 99, 116, 105, 118, 101};
            api10->godot_string_new(&Class_9__ready_strings[1]);
            api10->godot_string_parse_utf8_with_len(&Class_9__ready_strings[1], data, 10);
            api10->godot_string_name_new(&Class_9__ready_string_names[1], &Class_9__ready_strings[1]);
        }
        Class_9__ready_local_const_initialized = 1;
    }
    godot_variant st_0;
    goto _entry;
_entry:
    printf("%i : _entry\n", __LINE__);
    // DEFINE 67108864;
    // DEFINE 67108865;
    api10->godot_variant_new_nil(&st_0);
    goto _0;
_0:
    printf("%i : _0\n", __LINE__);
    goto _2;
_2:
    printf("%i : _2\n", __LINE__);
    {
        godot_variant *args[] = {&Class_9__ready_local_const[0]};
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_9__ready_strings[0], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_0, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant *args[] = {&Class_9__ready_local_const[1]};
        api10->godot_variant_call(&st_0, &Class_9__ready_strings[1], (const godot_variant **)args, 1, &__error);
    }
    goto _2147483646;
_2147483646:
    printf("%i : _2147483646\n", __LINE__);
    api10->godot_variant_destroy(&st_0);
    goto _cleanup;
_cleanup:
    //printf("Exit: Class_9__ready_func\n");
    return __return_value;
}
godot_variant Class_9__physics_process_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    //printf("Enter: Class_9__physics_process_func\n");
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_9__physics_process_local_const_initialized)
    {
        {
            uint8_t data[] = {7, 0, 0, 0, 0, 0, 0, 0, 205, 204, 28, 193, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[0], data, 16, &bytesRead, true);
        }
        {
            uint8_t data[] = {7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[1], data, 16, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 13, 0, 0, 0, 116, 97, 114, 103, 101, 116, 47, 99, 97, 109, 101, 114, 97, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[2], data, 24, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 12, 0, 0, 0, 109, 111, 118, 101, 95, 102, 111, 114, 119, 97, 114, 100};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[3], data, 20, &bytesRead, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 2, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[4], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 14, 0, 0, 0, 109, 111, 118, 101, 95, 98, 97, 99, 107, 119, 97, 114, 100, 115, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[5], data, 24, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 9, 0, 0, 0, 109, 111, 118, 101, 95, 108, 101, 102, 116, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[6], data, 20, &bytesRead, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[7], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 10, 0, 0, 0, 109, 111, 118, 101, 95, 114, 105, 103, 104, 116, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[8], data, 20, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 4, 0, 0, 0, 106, 117, 109, 112};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[9], data, 12, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 5, 0, 0, 0, 115, 104, 111, 111, 116, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[10], data, 16, &bytesRead, true);
        }
        {
            uint8_t data[] = {3, 0, 1, 0, 154, 153, 153, 153, 153, 153, 185, 63};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[11], data, 12, &bytesRead, true);
        }
        {
            uint8_t data[] = {3, 0, 1, 0, 252, 169, 241, 210, 77, 98, 80, 63};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[12], data, 12, &bytesRead, true);
        }
        {
            uint8_t data[] = {3, 0, 0, 0, 0, 0, 128, 63};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[13], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 8, 0, 0, 0, 65, 114, 109, 97, 116, 117, 114, 101};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[14], data, 16, &bytesRead, true);
        }
        {
            uint8_t data[] = {3, 0, 0, 0, 0, 0, 224, 64};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[15], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {1, 0, 0, 0, 1, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[16], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 10, 0, 0, 0, 115, 111, 117, 110, 100, 95, 106, 117, 109, 112, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[17], data, 20, &bytesRead, true);
        }
        {
            uint8_t data[] = {3, 0, 1, 0, 154, 153, 153, 153, 153, 153, 201, 63};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[18], data, 12, &bytesRead, true);
        }
        {
            uint8_t data[] = {1, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[19], data, 8, &bytesRead, true);
        }
        {
            char data[] = {114, 101, 115, 58, 47, 47, 98, 117, 108, 108, 101, 116, 46, 115, 99, 110};
            godot_string resource_path;
            api10->godot_string_new(&resource_path);
            api10->godot_string_parse_utf8_with_len(&resource_path, data, 16);
            gd2c10->resource_load(&Class_9__physics_process_local_const[20], &resource_path);
            api10->godot_string_destroy(&resource_path);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 15, 0, 0, 0, 65, 114, 109, 97, 116, 117, 114, 101, 47, 98, 117, 108, 108, 101, 116, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[21], data, 24, &bytesRead, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 20, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[22], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 11, 0, 0, 0, 115, 111, 117, 110, 100, 95, 115, 104, 111, 111, 116, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[23], data, 20, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 19, 0, 0, 0, 65, 110, 105, 109, 97, 116, 105, 111, 110, 84, 114, 101, 101, 80, 108, 97, 121, 101, 114, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[24], data, 28, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 4, 0, 0, 0, 119, 97, 108, 107};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[25], data, 12, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 5, 0, 0, 0, 115, 116, 97, 116, 101, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[26], data, 16, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 3, 0, 0, 0, 103, 117, 110, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__physics_process_local_const[27], data, 12, &bytesRead, true);
        }
        {
            char data[] = {65, 78, 73, 77, 95, 70, 76, 79, 79, 82};
            api10->godot_string_new(&Class_9__physics_process_strings[0]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[0], data, 10);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[0], &Class_9__physics_process_strings[0]);
        }
        {
            char data[] = {110, 111, 114, 109, 97, 108, 105, 122, 101, 100};
            api10->godot_string_new(&Class_9__physics_process_strings[1]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[1], data, 10);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[1], &Class_9__physics_process_strings[1]);
        }
        {
            char data[] = {100, 111, 116};
            api10->godot_string_new(&Class_9__physics_process_strings[2]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[2], data, 3);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[2], &Class_9__physics_process_strings[2]);
        }
        {
            char data[] = {108, 101, 110, 103, 116, 104};
            api10->godot_string_new(&Class_9__physics_process_strings[3]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[3], data, 6);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[3], &Class_9__physics_process_strings[3]);
        }
        {
            char data[] = {103, 101, 116, 95, 110, 111, 100, 101};
            api10->godot_string_new(&Class_9__physics_process_strings[4]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[4], data, 8);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[4], &Class_9__physics_process_strings[4]);
        }
        {
            char data[] = {103, 101, 116, 95, 103, 108, 111, 98, 97, 108, 95, 116, 114, 97, 110, 115, 102, 111, 114, 109};
            api10->godot_string_new(&Class_9__physics_process_strings[5]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[5], data, 20);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[5], &Class_9__physics_process_strings[5]);
        }
        {
            char data[] = {105, 115, 95, 97, 99, 116, 105, 111, 110, 95, 112, 114, 101, 115, 115, 101, 100};
            api10->godot_string_new(&Class_9__physics_process_strings[6]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[6], data, 17);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[6], &Class_9__physics_process_strings[6]);
        }
        {
            char data[] = {98, 97, 115, 105, 115};
            api10->godot_string_new(&Class_9__physics_process_strings[7]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[7], data, 5);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[7], &Class_9__physics_process_strings[7]);
        }
        {
            char data[] = {105, 115, 95, 111, 110, 95, 102, 108, 111, 111, 114};
            api10->godot_string_new(&Class_9__physics_process_strings[8]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[8], data, 11);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[8], &Class_9__physics_process_strings[8]);
        }
        {
            char data[] = {97, 100, 106, 117, 115, 116, 95, 102, 97, 99, 105, 110, 103};
            api10->godot_string_new(&Class_9__physics_process_strings[9]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[9], data, 13);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[9], &Class_9__physics_process_strings[9]);
        }
        {
            char data[] = {103, 101, 116, 95, 116, 114, 97, 110, 115, 102, 111, 114, 109};
            api10->godot_string_new(&Class_9__physics_process_strings[10]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[10], data, 13);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[10], &Class_9__physics_process_strings[10]);
        }
        {
            char data[] = {99, 114, 111, 115, 115};
            api10->godot_string_new(&Class_9__physics_process_strings[11]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[11], data, 5);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[11], &Class_9__physics_process_strings[11]);
        }
        {
            char data[] = {115, 99, 97, 108, 101, 100};
            api10->godot_string_new(&Class_9__physics_process_strings[12]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[12], data, 6);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[12], &Class_9__physics_process_strings[12]);
        }
        {
            char data[] = {67, 72, 65, 82, 95, 83, 67, 65, 76, 69};
            api10->godot_string_new(&Class_9__physics_process_strings[13]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[13], data, 10);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[13], &Class_9__physics_process_strings[13]);
        }
        {
            char data[] = {115, 101, 116, 95, 116, 114, 97, 110, 115, 102, 111, 114, 109};
            api10->godot_string_new(&Class_9__physics_process_strings[14]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[14], data, 13);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[14], &Class_9__physics_process_strings[14]);
        }
        {
            char data[] = {111, 114, 105, 103, 105, 110};
            api10->godot_string_new(&Class_9__physics_process_strings[15]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[15], data, 6);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[15], &Class_9__physics_process_strings[15]);
        }
        {
            char data[] = {112, 108, 97, 121};
            api10->godot_string_new(&Class_9__physics_process_strings[16]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[16], data, 4);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[16], &Class_9__physics_process_strings[16]);
        }
        {
            char data[] = {65, 78, 73, 77, 95, 65, 73, 82, 95, 85, 80};
            api10->godot_string_new(&Class_9__physics_process_strings[17]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[17], data, 11);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[17], &Class_9__physics_process_strings[17]);
        }
        {
            char data[] = {65, 78, 73, 77, 95, 65, 73, 82, 95, 68, 79, 87, 78};
            api10->godot_string_new(&Class_9__physics_process_strings[18]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[18], data, 13);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[18], &Class_9__physics_process_strings[18]);
        }
        {
            char data[] = {109, 111, 118, 101, 95, 97, 110, 100, 95, 115, 108, 105, 100, 101};
            api10->godot_string_new(&Class_9__physics_process_strings[19]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[19], data, 14);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[19], &Class_9__physics_process_strings[19]);
        }
        {
            char data[] = {83, 72, 79, 79, 84, 95, 83, 67, 65, 76, 69};
            api10->godot_string_new(&Class_9__physics_process_strings[20]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[20], data, 11);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[20], &Class_9__physics_process_strings[20]);
        }
        {
            char data[] = {83, 72, 79, 79, 84, 95, 84, 73, 77, 69};
            api10->godot_string_new(&Class_9__physics_process_strings[21]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[21], data, 10);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[21], &Class_9__physics_process_strings[21]);
        }
        {
            char data[] = {105, 110, 115, 116, 97, 110, 99, 101};
            api10->godot_string_new(&Class_9__physics_process_strings[22]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[22], data, 8);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[22], &Class_9__physics_process_strings[22]);
        }
        {
            char data[] = {111, 114, 116, 104, 111, 110, 111, 114, 109, 97, 108, 105, 122, 101, 100};
            api10->godot_string_new(&Class_9__physics_process_strings[23]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[23], data, 15);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[23], &Class_9__physics_process_strings[23]);
        }
        {
            char data[] = {103, 101, 116, 95, 112, 97, 114, 101, 110, 116};
            api10->godot_string_new(&Class_9__physics_process_strings[24]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[24], data, 10);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[24], &Class_9__physics_process_strings[24]);
        }
        {
            char data[] = {97, 100, 100, 95, 99, 104, 105, 108, 100};
            api10->godot_string_new(&Class_9__physics_process_strings[25]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[25], data, 9);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[25], &Class_9__physics_process_strings[25]);
        }
        {
            char data[] = {115, 101, 116, 95, 108, 105, 110, 101, 97, 114, 95, 118, 101, 108, 111, 99, 105, 116, 121};
            api10->godot_string_new(&Class_9__physics_process_strings[26]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[26], data, 19);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[26], &Class_9__physics_process_strings[26]);
        }
        {
            char data[] = {97, 100, 100, 95, 99, 111, 108, 108, 105, 115, 105, 111, 110, 95, 101, 120, 99, 101, 112, 116, 105, 111, 110, 95, 119, 105, 116, 104};
            api10->godot_string_new(&Class_9__physics_process_strings[27]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[27], data, 28);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[27], &Class_9__physics_process_strings[27]);
        }
        {
            char data[] = {98, 108, 101, 110, 100, 50, 95, 110, 111, 100, 101, 95, 115, 101, 116, 95, 97, 109, 111, 117, 110, 116};
            api10->godot_string_new(&Class_9__physics_process_strings[28]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[28], data, 22);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[28], &Class_9__physics_process_strings[28]);
        }
        {
            char data[] = {116, 114, 97, 110, 115, 105, 116, 105, 111, 110, 95, 110, 111, 100, 101, 95, 115, 101, 116, 95, 99, 117, 114, 114, 101, 110, 116};
            api10->godot_string_new(&Class_9__physics_process_strings[29]);
            api10->godot_string_parse_utf8_with_len(&Class_9__physics_process_strings[29], data, 27);
            api10->godot_string_name_new(&Class_9__physics_process_string_names[29], &Class_9__physics_process_strings[29]);
        }
        Class_9__physics_process_local_const_initialized = 1;
    }
    godot_variant st_1;
    godot_variant st_2;
    godot_variant st_3;
    godot_variant st_4;
    godot_variant st_5;
    godot_variant st_6;
    godot_variant st_7;
    godot_variant st_8;
    godot_variant st_9;
    godot_variant st_10;
    godot_variant st_11;
    godot_variant st_12;
    godot_variant st_13;
    godot_variant st_14;
    godot_variant st_15;
    godot_variant st_16;
    godot_variant st_17;
    godot_variant st_18;
    godot_variant st_19;
    godot_variant st_20;
    godot_variant st_22;
    goto _entry;
_entry:
    printf("%i : _entry\n", __LINE__);
    // <gd2c.bytecode.ParameterGDScriptOp object at 0x0592D430>;
    // DEFINE 67108864;
    // DEFINE 67108865;
    // DEFINE 67108866;
    // DEFINE 67108867;
    // DEFINE 67108868;
    // DEFINE 67108869;
    // DEFINE 67108870;
    // DEFINE 67108871;
    // DEFINE 67108872;
    // DEFINE 67108873;
    // DEFINE 67108874;
    // DEFINE 67108875;
    // DEFINE 67108876;
    // DEFINE 67108877;
    // DEFINE 67108878;
    // DEFINE 67108879;
    // DEFINE 67108880;
    // DEFINE 67108881;
    // DEFINE 67108882;
    // DEFINE 67108883;
    // DEFINE 67108884;
    // DEFINE 67108885;
    // DEFINE 67108886;
    // DEFINE 67108887;
    // DEFINE 67108888;
    // DEFINE 67108889;
    // DEFINE 67108890;
    // DEFINE 67108891;
    api10->godot_variant_new_nil(&st_1);
    api10->godot_variant_new_nil(&st_2);
    api10->godot_variant_new_nil(&st_3);
    api10->godot_variant_new_nil(&st_4);
    api10->godot_variant_new_nil(&st_5);
    api10->godot_variant_new_nil(&st_6);
    api10->godot_variant_new_nil(&st_7);
    api10->godot_variant_new_nil(&st_8);
    api10->godot_variant_new_nil(&st_9);
    api10->godot_variant_new_nil(&st_10);
    api10->godot_variant_new_nil(&st_11);
    api10->godot_variant_new_nil(&st_12);
    api10->godot_variant_new_nil(&st_13);
    api10->godot_variant_new_nil(&st_14);
    api10->godot_variant_new_nil(&st_15);
    api10->godot_variant_new_nil(&st_16);
    api10->godot_variant_new_nil(&st_17);
    api10->godot_variant_new_nil(&st_18);
    api10->godot_variant_new_nil(&st_19);
    api10->godot_variant_new_nil(&st_20);
    if (p_num_args > 0)
        api10->godot_variant_new_copy(&st_22, p_args[0]);
    goto _0;
_0:
    printf("%i : _0\n", __LINE__);
    goto _2;
_2:
    printf("%i : _2\n", __LINE__);
    api10->godot_variant_new_copy(&st_1, &p_user_data->linear_velocity);
    api10->godot_variant_new_copy(&st_2, &Class_9__physics_process_local_const[0]);
    api11->godot_variant_evaluate(8, &st_2, &st_22, &st_5, &__flag);
    api11->godot_variant_evaluate(6, &st_1, &st_5, &st_4, &__flag);
    api10->godot_variant_new_copy(&st_1, &st_4);
    api10->godot_variant_new_copy(&st_3, &Class_9_constants[5]);
    {
        godot_variant call_result = api10->godot_variant_call(&st_2, &Class_9__physics_process_strings[1], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_6, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(10, &st_6, &st_6, &st_6, &__flag);
    api10->godot_variant_new_copy(&st_4, &st_6);
    {
        godot_variant *args[] = {&st_1};
        godot_variant call_result = api10->godot_variant_call(&st_4, &Class_9__physics_process_strings[2], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_7, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_5, &st_7);
    api11->godot_variant_evaluate(8, &st_4, &st_5, &st_9, &__flag);
    api11->godot_variant_evaluate(7, &st_1, &st_9, &st_8, &__flag);
    api10->godot_variant_new_copy(&st_6, &st_8);
    {
        godot_variant call_result = api10->godot_variant_call(&st_6, &Class_9__physics_process_strings[1], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_9, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_7, &st_9);
    {
        godot_variant call_result = api10->godot_variant_call(&st_6, &Class_9__physics_process_strings[3], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_10, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_8, &st_10);
    api10->godot_variant_new_copy(&st_9, &Class_9__physics_process_local_const[1]);
    {
        godot_variant *args[] = {&Class_9__physics_process_local_const[2]};
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_9__physics_process_strings[4], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_12, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant call_result = api10->godot_variant_call(&st_12, &Class_9__physics_process_strings[5], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_12, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_10, &st_12);
    {
        godot_variant *args[] = {&Class_9__physics_process_local_const[3]};
        godot_variant call_result = api10->godot_variant_call(&global_classdb_array[77], &Class_9__physics_process_strings[6], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_11, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    __flag = api10->godot_variant_as_bool(&st_11);
    if (!__flag)
        goto _124;
    goto _101;
_124:
    printf("%i : _124\n", __LINE__);
    {
        godot_variant *args[] = {&Class_9__physics_process_local_const[5]};
        godot_variant call_result = api10->godot_variant_call(&global_classdb_array[77], &Class_9__physics_process_strings[6], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_11, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    __flag = api10->godot_variant_as_bool(&st_11);
    if (!__flag)
        goto _151;
    goto _133;
_133:
    printf("%i : _133\n", __LINE__);
    gd2c10->variant_get_named(&st_10, &Class_9__physics_process_string_names[7], &st_13, &__flag);
    gd2c10->variant_get(&st_13, &Class_9__physics_process_local_const[4], &st_13, &__flag);
    api11->godot_variant_evaluate(6, &st_9, &st_13, &st_12, &__flag);
    api10->godot_variant_new_copy(&st_9, &st_12);
    goto _151;
_151:
    printf("%i : _151\n", __LINE__);
    {
        godot_variant *args[] = {&Class_9__physics_process_local_const[6]};
        godot_variant call_result = api10->godot_variant_call(&global_classdb_array[77], &Class_9__physics_process_strings[6], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_11, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    __flag = api10->godot_variant_as_bool(&st_11);
    if (!__flag)
        goto _183;
    goto _160;
_183:
    printf("%i : _183\n", __LINE__);
    {
        godot_variant *args[] = {&Class_9__physics_process_local_const[8]};
        godot_variant call_result = api10->godot_variant_call(&global_classdb_array[77], &Class_9__physics_process_strings[6], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_11, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    __flag = api10->godot_variant_as_bool(&st_11);
    if (!__flag)
        goto _192;
    goto _1030;
_192:
    printf("%i : _192\n", __LINE__);
    {
        godot_variant *args[] = {&Class_9__physics_process_local_const[9]};
        godot_variant call_result = api10->godot_variant_call(&global_classdb_array[77], &Class_9__physics_process_strings[6], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_13, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_11, &st_13);
    {
        godot_variant *args[] = {&Class_9__physics_process_local_const[10]};
        godot_variant call_result = api10->godot_variant_call(&global_classdb_array[77], &Class_9__physics_process_strings[6], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_14, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_12, &st_14);
    {
        godot_variant *args[] = {&st_4};
        godot_variant call_result = api10->godot_variant_call(&st_9, &Class_9__physics_process_strings[2], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_17, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(8, &st_4, &st_17, &st_16, &__flag);
    api11->godot_variant_evaluate(7, &st_9, &st_16, &st_15, &__flag);
    {
        godot_variant call_result = api10->godot_variant_call(&st_15, &Class_9__physics_process_strings[1], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_15, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_13, &st_15);
    {
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_9__physics_process_strings[8], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_14, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    __flag = api10->godot_variant_as_bool(&st_14);
    if (!__flag)
        goto _902;
    goto _242;
_902:
    printf("%i : _902\n", __LINE__);
    api11->godot_variant_evaluate(4, &st_5, &Class_9__physics_process_local_const[7], &st_14, &__flag);
    __flag = api10->godot_variant_as_bool(&st_14);
    if (!__flag)
        goto _1025;
    goto _910;
_1025:
    printf("%i : _1025\n", __LINE__);
    api10->godot_variant_new_copy(&st_3, &Class_9_constants[1]);
    goto _915;
_915:
    printf("%i : _915\n", __LINE__);
    {
        godot_variant call_result = api10->godot_variant_call(&st_9, &Class_9__physics_process_strings[3], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_14, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(4, &st_14, &Class_9__physics_process_local_const[11], &st_14, &__flag);
    __flag = api10->godot_variant_as_bool(&st_14);
    if (!__flag)
        goto _981;
    goto _928;
_981:
    printf("%i : _981\n", __LINE__);
    __flag = api10->godot_variant_as_bool(&p_user_data->air_idle_deaccel);
    if (!__flag)
        goto _506;
    goto _984;
_506:
    printf("%i : _506\n", __LINE__);
    __flag = api10->godot_variant_as_bool(&p_user_data->jumping);
    if (!__flag)
        goto _509;
    goto _785;
_785:
    printf("%i : _785\n", __LINE__);
    api11->godot_variant_evaluate(2, &st_5, &Class_9__physics_process_local_const[7], &st_14, &__flag);
    __flag = api10->godot_variant_as_bool(&st_14);
    if (!__flag)
        goto _509;
    goto _793;
_793:
    printf("%i : _793\n", __LINE__);
    api10->godot_variant_new_bool(&st_14, true);
    goto _513;
_513:
    printf("%i : _513\n", __LINE__);
    __flag = api10->godot_variant_as_bool(&st_14);
    if (!__flag)
        goto _516;
    goto _780;
_516:
    printf("%i : _516\n", __LINE__);
    api11->godot_variant_evaluate(8, &st_4, &st_5, &st_16, &__flag);
    api11->godot_variant_evaluate(6, &st_6, &st_16, &st_15, &__flag);
    api10->godot_variant_new_copy(&st_1, &st_15);
    {
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_9__physics_process_strings[8], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_14, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    __flag = api10->godot_variant_as_bool(&st_14);
    if (!__flag)
        goto _537;
    goto _775;
_537:
    printf("%i : _537\n", __LINE__);
    {
        godot_variant call_result = api10->godot_variant_call(&st_2, &Class_9__physics_process_strings[1], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_14, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(10, &st_14, &st_14, &st_14, &__flag);
    {
        godot_variant *args[] = {&st_1, &st_14};
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_9__physics_process_strings[19], (const godot_variant **)args, 2, &__error);
        api10->godot_variant_new_copy(&st_14, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&p_user_data->linear_velocity, &st_14);
    api11->godot_variant_evaluate(4, &p_user_data->shoot_blend, &Class_9__physics_process_local_const[7], &st_14, &__flag);
    __flag = api10->godot_variant_as_bool(&st_14);
    if (!__flag)
        goto _565;
    goto _749;
_749:
    printf("%i : _749\n", __LINE__);
    api11->godot_variant_evaluate(8, &st_22, &Class_9_constants[2], &st_14, &__flag);
    api11->godot_variant_evaluate(7, &p_user_data->shoot_blend, &st_14, &st_14, &__flag);
    api10->godot_variant_new_copy(&p_user_data->shoot_blend, &st_14);
    api11->godot_variant_evaluate(2, &p_user_data->shoot_blend, &Class_9__physics_process_local_const[7], &st_14, &__flag);
    __flag = api10->godot_variant_as_bool(&st_14);
    if (!__flag)
        goto _565;
    goto _770;
_770:
    printf("%i : _770\n", __LINE__);
    api10->godot_variant_new_copy(&p_user_data->shoot_blend, &Class_9__physics_process_local_const[7]);
    goto _565;
_565:
    printf("%i : _565\n", __LINE__);
    __flag = api10->godot_variant_as_bool(&st_12);
    if (!__flag)
        goto _568;
    goto _737;
_737:
    printf("%i : _737\n", __LINE__);
    api11->godot_variant_evaluate(23, &p_user_data->prev_shoot, &p_user_data->prev_shoot, &st_14, &__flag);
    __flag = api10->godot_variant_as_bool(&st_14);
    if (!__flag)
        goto _568;
    goto _745;
_568:
    printf("%i : _568\n", __LINE__);
    api10->godot_variant_new_bool(&st_14, false);
    goto _572;
_572:
    printf("%i : _572\n", __LINE__);
    __flag = api10->godot_variant_as_bool(&st_14);
    if (!__flag)
        goto _673;
    goto _575;
_673:
    printf("%i : _673\n", __LINE__);
    api10->godot_variant_new_copy(&p_user_data->prev_shoot, &st_12);
    {
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_9__physics_process_strings[8], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_14, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    __flag = api10->godot_variant_as_bool(&st_14);
    if (!__flag)
        goto _684;
    goto _717;
_717:
    printf("%i : _717\n", __LINE__);
    {
        godot_variant *args[] = {&Class_9__physics_process_local_const[24]};
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_9__physics_process_strings[4], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_14, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(9, &st_8, &p_user_data->max_speed, &st_15, &__flag);
    {
        godot_variant *args[] = {&Class_9__physics_process_local_const[25], &st_15};
        api10->godot_variant_call(&st_14, &Class_9__physics_process_strings[28], (const godot_variant **)args, 2, &__error);
    }
    goto _684;
_684:
    printf("%i : _684\n", __LINE__);
    {
        godot_variant *args[] = {&Class_9__physics_process_local_const[24]};
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_9__physics_process_strings[4], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_14, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant *args[] = {&Class_9__physics_process_local_const[26], &st_3};
        api10->godot_variant_call(&st_14, &Class_9__physics_process_strings[29], (const godot_variant **)args, 2, &__error);
    }
    {
        godot_variant *args[] = {&Class_9__physics_process_local_const[24]};
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_9__physics_process_strings[4], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_14, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant *args[] = {&p_user_data->shoot_blend, &Class_9__physics_process_local_const[13]};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(45, (const godot_variant **)args, 2, &st_15, &err);
    }
    {
        godot_variant *args[] = {&Class_9__physics_process_local_const[27], &st_15};
        api10->godot_variant_call(&st_14, &Class_9__physics_process_strings[28], (const godot_variant **)args, 2, &__error);
    }
    goto _2147483646;
_2147483646:
    printf("%i : _2147483646\n", __LINE__);
    api10->godot_variant_destroy(&st_1);
    api10->godot_variant_destroy(&st_2);
    api10->godot_variant_destroy(&st_3);
    api10->godot_variant_destroy(&st_4);
    api10->godot_variant_destroy(&st_5);
    api10->godot_variant_destroy(&st_6);
    api10->godot_variant_destroy(&st_7);
    api10->godot_variant_destroy(&st_8);
    api10->godot_variant_destroy(&st_9);
    api10->godot_variant_destroy(&st_10);
    api10->godot_variant_destroy(&st_11);
    api10->godot_variant_destroy(&st_12);
    api10->godot_variant_destroy(&st_13);
    api10->godot_variant_destroy(&st_14);
    api10->godot_variant_destroy(&st_15);
    api10->godot_variant_destroy(&st_16);
    api10->godot_variant_destroy(&st_17);
    api10->godot_variant_destroy(&st_18);
    api10->godot_variant_destroy(&st_19);
    api10->godot_variant_destroy(&st_20);
    api10->godot_variant_destroy(&st_22);
    goto _cleanup;
_575:
    printf("%i : _575\n", __LINE__);
    api10->godot_variant_new_copy(&p_user_data->shoot_blend, &Class_9_constants[0]);
    {
        godot_variant call_result = api10->godot_variant_call(&Class_9__physics_process_local_const[20], &Class_9__physics_process_strings[22], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_16, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_14, &st_16);
    {
        godot_variant *args[] = {&Class_9__physics_process_local_const[21]};
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_9__physics_process_strings[4], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_15, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant call_result = api10->godot_variant_call(&st_15, &Class_9__physics_process_strings[5], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_15, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant call_result = api10->godot_variant_call(&st_15, &Class_9__physics_process_strings[23], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_15, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant *args[] = {&st_15};
        api10->godot_variant_call(&st_14, &Class_9__physics_process_strings[14], (const godot_variant **)args, 1, &__error);
    }
    {
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_9__physics_process_strings[24], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_15, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant *args[] = {&st_14};
        api10->godot_variant_call(&st_15, &Class_9__physics_process_strings[25], (const godot_variant **)args, 1, &__error);
    }
    {
        godot_variant *args[] = {&Class_9__physics_process_local_const[21]};
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_9__physics_process_strings[4], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_15, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant call_result = api10->godot_variant_call(&st_15, &Class_9__physics_process_strings[5], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_15, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    gd2c10->variant_get_named(&st_15, &Class_9__physics_process_string_names[7], &st_15, &__flag);
    gd2c10->variant_get(&st_15, &Class_9__physics_process_local_const[4], &st_15, &__flag);
    {
        godot_variant call_result = api10->godot_variant_call(&st_15, &Class_9__physics_process_strings[1], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_15, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(8, &st_15, &Class_9__physics_process_local_const[22], &st_15, &__flag);
    {
        godot_variant *args[] = {&st_15};
        api10->godot_variant_call(&st_14, &Class_9__physics_process_strings[26], (const godot_variant **)args, 1, &__error);
    }
    {
        godot_variant *args[] = {&p_user_data->__self};
        api10->godot_variant_call(&st_14, &Class_9__physics_process_strings[27], (const godot_variant **)args, 1, &__error);
    }
    {
        godot_variant *args[] = {&Class_9__physics_process_local_const[23]};
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_9__physics_process_strings[4], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_15, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        api10->godot_variant_call(&st_15, &Class_9__physics_process_strings[16], (const godot_variant **)(void *)0, 0, &__error);
    }
    goto _673;
_745:
    printf("%i : _745\n", __LINE__);
    api10->godot_variant_new_bool(&st_14, true);
    goto _572;
_775:
    printf("%i : _775\n", __LINE__);
    api10->godot_variant_new_copy(&p_user_data->movement_dir, &st_1);
    goto _537;
_780:
    printf("%i : _780\n", __LINE__);
    api10->godot_variant_new_copy(&p_user_data->jumping, &Class_9__physics_process_local_const[19]);
    goto _516;
_509:
    printf("%i : _509\n", __LINE__);
    api10->godot_variant_new_bool(&st_14, false);
    goto _513;
_984:
    printf("%i : _984\n", __LINE__);
    api11->godot_variant_evaluate(8, &p_user_data->deaccel, &Class_9__physics_process_local_const[18], &st_16, &__flag);
    api11->godot_variant_evaluate(8, &st_16, &st_22, &st_16, &__flag);
    api11->godot_variant_evaluate(7, &st_8, &st_16, &st_15, &__flag);
    api10->godot_variant_new_copy(&st_8, &st_15);
    api11->godot_variant_evaluate(2, &st_8, &Class_9__physics_process_local_const[7], &st_14, &__flag);
    __flag = api10->godot_variant_as_bool(&st_14);
    if (!__flag)
        goto _1010;
    goto _1020;
_1020:
    printf("%i : _1020\n", __LINE__);
    api10->godot_variant_new_copy(&st_8, &Class_9__physics_process_local_const[7]);
    goto _1010;
_1010:
    printf("%i : _1010\n", __LINE__);
    api11->godot_variant_evaluate(8, &st_7, &st_8, &st_15, &__flag);
    api10->godot_variant_new_copy(&st_6, &st_15);
    goto _506;
_928:
    printf("%i : _928\n", __LINE__);
    api11->godot_variant_evaluate(8, &p_user_data->accel, &Class_9__physics_process_local_const[18], &st_17, &__flag);
    api11->godot_variant_evaluate(8, &st_13, &st_17, &st_16, &__flag);
    api11->godot_variant_evaluate(8, &st_16, &st_22, &st_16, &__flag);
    api11->godot_variant_evaluate(6, &st_6, &st_16, &st_15, &__flag);
    api10->godot_variant_new_copy(&st_6, &st_15);
    {
        godot_variant call_result = api10->godot_variant_call(&st_6, &Class_9__physics_process_strings[3], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_14, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(4, &st_14, &p_user_data->max_speed, &st_14, &__flag);
    __flag = api10->godot_variant_as_bool(&st_14);
    if (!__flag)
        goto _964;
    goto _966;
_966:
    printf("%i : _966\n", __LINE__);
    {
        godot_variant call_result = api10->godot_variant_call(&st_6, &Class_9__physics_process_strings[1], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_15, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(8, &st_15, &p_user_data->max_speed, &st_15, &__flag);
    api10->godot_variant_new_copy(&st_6, &st_15);
    goto _964;
_964:
    printf("%i : _964\n", __LINE__);
    goto _506;
_910:
    printf("%i : _910\n", __LINE__);
    api10->godot_variant_new_copy(&st_3, &Class_9_constants[4]);
    goto _915;
_242:
    printf("%i : _242\n", __LINE__);
    api11->godot_variant_evaluate(4, &st_8, &Class_9__physics_process_local_const[11], &st_16, &__flag);
    __flag = api10->godot_variant_as_bool(&st_16);
    if (!__flag)
        goto _250;
    goto _874;
_250:
    printf("%i : _250\n", __LINE__);
    api10->godot_variant_new_bool(&st_16, false);
    goto _254;
_254:
    printf("%i : _254\n", __LINE__);
    api10->godot_variant_new_copy(&st_14, &st_16);
    {
        godot_variant call_result = api10->godot_variant_call(&st_9, &Class_9__physics_process_strings[3], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_15, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(4, &st_15, &Class_9__physics_process_local_const[11], &st_15, &__flag);
    __flag = api10->godot_variant_as_bool(&st_15);
    if (!__flag)
        goto _870;
    goto _270;
_270:
    printf("%i : _270\n", __LINE__);
    api11->godot_variant_evaluate(23, &st_14, &st_14, &st_15, &__flag);
    __flag = api10->godot_variant_as_bool(&st_15);
    if (!__flag)
        goto _870;
    goto _278;
_278:
    printf("%i : _278\n", __LINE__);
    api10->godot_variant_new_bool(&st_15, true);
    goto _282;
_282:
    printf("%i : _282\n", __LINE__);
    __flag = api10->godot_variant_as_bool(&st_15);
    if (!__flag)
        goto _285;
    goto _804;
_285:
    printf("%i : _285\n", __LINE__);
    api11->godot_variant_evaluate(8, &p_user_data->deaccel, &st_22, &st_17, &__flag);
    api11->godot_variant_evaluate(7, &st_8, &st_17, &st_16, &__flag);
    api10->godot_variant_new_copy(&st_8, &st_16);
    api11->godot_variant_evaluate(2, &st_8, &Class_9__physics_process_local_const[7], &st_15, &__flag);
    __flag = api10->godot_variant_as_bool(&st_15);
    if (!__flag)
        goto _311;
    goto _306;
_306:
    printf("%i : _306\n", __LINE__);
    api10->godot_variant_new_copy(&st_8, &Class_9__physics_process_local_const[7]);
    goto _311;
_311:
    printf("%i : _311\n", __LINE__);
    api11->godot_variant_evaluate(8, &st_7, &st_8, &st_16, &__flag);
    api10->godot_variant_new_copy(&st_6, &st_16);
    {
        godot_variant *args[] = {&Class_9__physics_process_local_const[14]};
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_9__physics_process_strings[4], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_17, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant call_result = api10->godot_variant_call(&st_17, &Class_9__physics_process_strings[10], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_17, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_15, &st_17);
    gd2c10->variant_get_named(&st_15, &Class_9__physics_process_string_names[7], &st_18, &__flag);
    gd2c10->variant_get(&st_18, &Class_9__physics_process_local_const[7], &st_18, &__flag);
    {
        godot_variant call_result = api10->godot_variant_call(&st_18, &Class_9__physics_process_strings[1], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_18, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(10, &st_18, &st_18, &st_18, &__flag);
    api10->godot_variant_new_copy(&st_16, &st_18);
    {
        godot_variant *args[] = {&st_4};
        godot_variant call_result = api10->godot_variant_call(&st_16, &Class_9__physics_process_strings[2], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_20, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(8, &st_4, &st_20, &st_19, &__flag);
    api11->godot_variant_evaluate(7, &st_16, &st_19, &st_18, &__flag);
    {
        godot_variant call_result = api10->godot_variant_call(&st_18, &Class_9__physics_process_strings[1], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_18, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_16, &st_18);
    api11->godot_variant_evaluate(4, &st_8, &Class_9__physics_process_local_const[7], &st_17, &__flag);
    __flag = api10->godot_variant_as_bool(&st_17);
    if (!__flag)
        goto _411;
    goto _386;
_386:
    printf("%i : _386\n", __LINE__);
    api11->godot_variant_evaluate(9, &Class_9__physics_process_local_const[13], &st_8, &st_18, &__flag);
    api11->godot_variant_evaluate(8, &st_18, &p_user_data->turn_speed, &st_18, &__flag);
    {
        godot_variant *args[] = {&st_16, &st_13, &st_22, &st_18, &st_4};
        godot_variant call_result = p_user_data->__vtable->methods[3](p_instance, p_method_data, p_user_data, 5, args);
        api10->godot_variant_new_copy(&st_18, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_16, &st_18);
    goto _411;
_411:
    printf("%i : _411\n", __LINE__);
    api11->godot_variant_evaluate(10, &st_16, &st_16, &st_19, &__flag);
    {
        godot_variant *args[] = {&st_4};
        godot_variant call_result = api10->godot_variant_call(&st_16, &Class_9__physics_process_strings[11], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_20, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant call_result = api10->godot_variant_call(&st_20, &Class_9__physics_process_strings[1], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_20, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(10, &st_20, &st_20, &st_20, &__flag);
    {
        godot_variant *args[] = {&st_19, &st_4, &st_20};
        gd2c10->variant_construct(&st_19, 12, 3, (const godot_variant **)args, &__error);
    }
    {
        godot_variant *args[] = {&Class_9_constants[3]};
        godot_variant call_result = api10->godot_variant_call(&st_19, &Class_9__physics_process_strings[12], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_19, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_17, &st_19);
    {
        godot_variant *args[] = {&Class_9__physics_process_local_const[14]};
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_9__physics_process_strings[4], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_18, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    gd2c10->variant_get_named(&st_15, &Class_9__physics_process_string_names[15], &st_19, &__flag);
    {
        godot_variant *args[] = {&st_17, &st_19};
        gd2c10->variant_construct(&st_19, 13, 2, (const godot_variant **)args, &__error);
    }
    {
        godot_variant *args[] = {&st_19};
        api10->godot_variant_call(&st_18, &Class_9__physics_process_strings[14], (const godot_variant **)args, 1, &__error);
    }
    api11->godot_variant_evaluate(23, &p_user_data->jumping, &p_user_data->jumping, &st_18, &__flag);
    __flag = api10->godot_variant_as_bool(&st_18);
    if (!__flag)
        goto _478;
    goto _797;
_478:
    printf("%i : _478\n", __LINE__);
    api10->godot_variant_new_bool(&st_18, false);
    goto _482;
_482:
    printf("%i : _482\n", __LINE__);
    __flag = api10->godot_variant_as_bool(&st_18);
    if (!__flag)
        goto _504;
    goto _485;
_504:
    printf("%i : _504\n", __LINE__);
    goto _506;
_485:
    printf("%i : _485\n", __LINE__);
    api10->godot_variant_new_copy(&st_5, &Class_9__physics_process_local_const[15]);
    api10->godot_variant_new_copy(&p_user_data->jumping, &Class_9__physics_process_local_const[16]);
    {
        godot_variant *args[] = {&Class_9__physics_process_local_const[17]};
        godot_variant call_result = api10->godot_variant_call(&p_user_data->__self, &Class_9__physics_process_strings[4], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_18, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        api10->godot_variant_call(&st_18, &Class_9__physics_process_strings[16], (const godot_variant **)(void *)0, 0, &__error);
    }
    goto _504;
_797:
    printf("%i : _797\n", __LINE__);
    __flag = api10->godot_variant_as_bool(&st_11);
    if (!__flag)
        goto _478;
    goto _800;
_800:
    printf("%i : _800\n", __LINE__);
    api10->godot_variant_new_bool(&st_18, true);
    goto _482;
_804:
    printf("%i : _804\n", __LINE__);
    api11->godot_variant_evaluate(4, &st_8, &Class_9__physics_process_local_const[12], &st_15, &__flag);
    __flag = api10->godot_variant_as_bool(&st_15);
    if (!__flag)
        goto _812;
    goto _842;
_812:
    printf("%i : _812\n", __LINE__);
    api10->godot_variant_new_copy(&st_7, &st_13);
    goto _817;
_817:
    printf("%i : _817\n", __LINE__);
    api11->godot_variant_evaluate(2, &st_8, &p_user_data->max_speed, &st_15, &__flag);
    __flag = api10->godot_variant_as_bool(&st_15);
    if (!__flag)
        goto _825;
    goto _827;
_827:
    printf("%i : _827\n", __LINE__);
    api11->godot_variant_evaluate(8, &p_user_data->accel, &st_22, &st_17, &__flag);
    api11->godot_variant_evaluate(6, &st_8, &st_17, &st_16, &__flag);
    api10->godot_variant_new_copy(&st_8, &st_16);
    goto _825;
_825:
    printf("%i : _825\n", __LINE__);
    goto _311;
_842:
    printf("%i : _842\n", __LINE__);
    api11->godot_variant_evaluate(9, &Class_9__physics_process_local_const[13], &st_8, &st_16, &__flag);
    api11->godot_variant_evaluate(8, &st_16, &p_user_data->turn_speed, &st_16, &__flag);
    {
        godot_variant *args[] = {&st_7, &st_13, &st_22, &st_16, &st_4};
        godot_variant call_result = p_user_data->__vtable->methods[3](p_instance, p_method_data, p_user_data, 5, args);
        api10->godot_variant_new_copy(&st_16, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_7, &st_16);
    api10->godot_variant_new_copy(&p_user_data->facing_dir, &st_7);
    goto _817;
_870:
    printf("%i : _870\n", __LINE__);
    api10->godot_variant_new_bool(&st_15, false);
    goto _282;
_874:
    printf("%i : _874\n", __LINE__);
    {
        godot_variant *args[] = {&st_7};
        godot_variant call_result = api10->godot_variant_call(&st_13, &Class_9__physics_process_strings[2], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_16, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant *args[] = {&st_16};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(7, (const godot_variant **)args, 1, &st_16, &err);
    }
    {
        godot_variant *args[] = {&st_16};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(37, (const godot_variant **)args, 1, &st_16, &err);
    }
    api11->godot_variant_evaluate(4, &st_16, &p_user_data->sharp_turn_threshold, &st_16, &__flag);
    __flag = api10->godot_variant_as_bool(&st_16);
    if (!__flag)
        goto _250;
    goto _898;
_898:
    printf("%i : _898\n", __LINE__);
    api10->godot_variant_new_bool(&st_16, true);
    goto _254;
_1030:
    printf("%i : _1030\n", __LINE__);
    gd2c10->variant_get_named(&st_10, &Class_9__physics_process_string_names[7], &st_13, &__flag);
    gd2c10->variant_get(&st_13, &Class_9__physics_process_local_const[7], &st_13, &__flag);
    api11->godot_variant_evaluate(6, &st_9, &st_13, &st_12, &__flag);
    api10->godot_variant_new_copy(&st_9, &st_12);
    goto _192;
_160:
    printf("%i : _160\n", __LINE__);
    gd2c10->variant_get_named(&st_10, &Class_9__physics_process_string_names[7], &st_13, &__flag);
    gd2c10->variant_get(&st_13, &Class_9__physics_process_local_const[7], &st_13, &__flag);
    api11->godot_variant_evaluate(10, &st_13, &st_13, &st_13, &__flag);
    api11->godot_variant_evaluate(6, &st_9, &st_13, &st_12, &__flag);
    api10->godot_variant_new_copy(&st_9, &st_12);
    goto _183;
_101:
    printf("%i : _101\n", __LINE__);
    gd2c10->variant_get_named(&st_10, &Class_9__physics_process_string_names[7], &st_13, &__flag);
    gd2c10->variant_get(&st_13, &Class_9__physics_process_local_const[4], &st_13, &__flag);
    api11->godot_variant_evaluate(10, &st_13, &st_13, &st_13, &__flag);
    api11->godot_variant_evaluate(6, &st_9, &st_13, &st_12, &__flag);
    api10->godot_variant_new_copy(&st_9, &st_12);
    goto _124;
_cleanup:
    //printf("Exit: Class_9__physics_process_func\n");
    return __return_value;
}
godot_variant Class_9__init_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    //printf("Enter: Class_9__init_func\n");
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_9__init_local_const_initialized)
    {
        {
            uint8_t data[] = {7, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__init_local_const[0], data, 16, &bytesRead, true);
        }
        {
            uint8_t data[] = {7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__init_local_const[1], data, 16, &bytesRead, true);
        }
        {
            uint8_t data[] = {1, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__init_local_const[2], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 40, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__init_local_const[3], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {1, 0, 0, 0, 1, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__init_local_const[4], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {3, 0, 0, 0, 0, 0, 152, 65};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__init_local_const[5], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {3, 0, 0, 0, 0, 0, 96, 65};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__init_local_const[6], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 140, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__init_local_const[7], data, 8, &bytesRead, true);
        }
        {
            uint8_t data[] = {3, 0, 1, 0, 205, 204, 204, 204, 204, 204, 8, 64};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__init_local_const[8], data, 12, &bytesRead, true);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9__init_local_const[9], data, 8, &bytesRead, true);
        }
        Class_9__init_local_const_initialized = 1;
    }
    goto _entry;
_entry:
    printf("%i : _entry\n", __LINE__);
    // DEFINE 67108864;
    // DEFINE 67108865;
    // DEFINE 67108866;
    // DEFINE 67108867;
    // DEFINE 67108868;
    // DEFINE 67108869;
    // DEFINE 67108870;
    // DEFINE 67108871;
    // DEFINE 67108872;
    // DEFINE 67108873;
    goto _0;
_0:
    printf("%i : _0\n", __LINE__);
    goto _2;
_2:
    printf("%i : _2\n", __LINE__);
    api10->godot_variant_new_copy(&p_user_data->facing_dir, &Class_9__init_local_const[0]);
    api10->godot_variant_new_copy(&p_user_data->movement_dir, &Class_9__init_local_const[1]);
    api10->godot_variant_new_copy(&p_user_data->jumping, &Class_9__init_local_const[2]);
    api10->godot_variant_new_copy(&p_user_data->turn_speed, &Class_9__init_local_const[3]);
    api10->godot_variant_new_copy(&p_user_data->keep_jump_inertia, &Class_9__init_local_const[4]);
    api10->godot_variant_new_copy(&p_user_data->air_idle_deaccel, &Class_9__init_local_const[2]);
    api10->godot_variant_new_copy(&p_user_data->accel, &Class_9__init_local_const[5]);
    api10->godot_variant_new_copy(&p_user_data->deaccel, &Class_9__init_local_const[6]);
    api10->godot_variant_new_copy(&p_user_data->sharp_turn_threshold, &Class_9__init_local_const[7]);
    api10->godot_variant_new_copy(&p_user_data->max_speed, &Class_9__init_local_const[8]);
    api10->godot_variant_new_copy(&p_user_data->prev_shoot, &Class_9__init_local_const[2]);
    api10->godot_variant_new_copy(&p_user_data->linear_velocity, &Class_9__init_local_const[1]);
    api10->godot_variant_new_copy(&p_user_data->shoot_blend, &Class_9__init_local_const[9]);
    goto _2147483646;
_2147483646:
    printf("%i : _2147483646\n", __LINE__);
    goto _cleanup;
_cleanup:
    //printf("Exit: Class_9__init_func\n");
    return __return_value;
}
godot_variant Class_9_adjust_facing_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    //printf("Enter: Class_9_adjust_facing_func\n");
    struct Class_9_struct_t *p_user_data = (struct Class_9_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_9_adjust_facing_local_const_initialized)
    {
        {
            uint8_t data[] = {3, 0, 1, 0, 252, 169, 241, 210, 77, 98, 80, 63};
            int bytesRead;
            gd2c10->variant_decode(&Class_9_adjust_facing_local_const[0], data, 12, &bytesRead, true);
        }
        {
            uint8_t data[] = {0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_9_adjust_facing_local_const[1], data, 4, &bytesRead, true);
        }
        {
            char data[] = {99, 114, 111, 115, 115};
            api10->godot_string_new(&Class_9_adjust_facing_strings[0]);
            api10->godot_string_parse_utf8_with_len(&Class_9_adjust_facing_strings[0], data, 5);
            api10->godot_string_name_new(&Class_9_adjust_facing_string_names[0], &Class_9_adjust_facing_strings[0]);
        }
        {
            char data[] = {110, 111, 114, 109, 97, 108, 105, 122, 101, 100};
            api10->godot_string_new(&Class_9_adjust_facing_strings[1]);
            api10->godot_string_parse_utf8_with_len(&Class_9_adjust_facing_strings[1], data, 10);
            api10->godot_string_name_new(&Class_9_adjust_facing_string_names[1], &Class_9_adjust_facing_strings[1]);
        }
        {
            char data[] = {100, 111, 116};
            api10->godot_string_new(&Class_9_adjust_facing_strings[2]);
            api10->godot_string_parse_utf8_with_len(&Class_9_adjust_facing_strings[2], data, 3);
            api10->godot_string_name_new(&Class_9_adjust_facing_string_names[2], &Class_9_adjust_facing_strings[2]);
        }
        {
            char data[] = {108, 101, 110, 103, 116, 104};
            api10->godot_string_new(&Class_9_adjust_facing_strings[3]);
            api10->godot_string_parse_utf8_with_len(&Class_9_adjust_facing_strings[3], data, 6);
            api10->godot_string_name_new(&Class_9_adjust_facing_string_names[3], &Class_9_adjust_facing_strings[3]);
        }
        Class_9_adjust_facing_local_const_initialized = 1;
    }
    godot_variant st_5;
    godot_variant st_6;
    godot_variant st_7;
    godot_variant st_8;
    godot_variant st_9;
    godot_variant st_10;
    godot_variant st_11;
    godot_variant st_12;
    godot_variant st_13;
    godot_variant st_14;
    godot_variant st_15;
    godot_variant st_16;
    godot_variant st_17;
    godot_variant st_18;
    godot_variant st_19;
    godot_variant st_20;
    goto _entry;
_entry:
    printf("%i : _entry\n", __LINE__);
    // <gd2c.bytecode.ParameterGDScriptOp object at 0x058C8E30>;
    // <gd2c.bytecode.ParameterGDScriptOp object at 0x058C8E50>;
    // <gd2c.bytecode.ParameterGDScriptOp object at 0x058C8E70>;
    // <gd2c.bytecode.ParameterGDScriptOp object at 0x058C8E90>;
    // <gd2c.bytecode.ParameterGDScriptOp object at 0x058C8EB0>;
    // DEFINE 67108864;
    // DEFINE 67108865;
    api10->godot_variant_new_nil(&st_5);
    api10->godot_variant_new_nil(&st_6);
    api10->godot_variant_new_nil(&st_7);
    api10->godot_variant_new_nil(&st_8);
    api10->godot_variant_new_nil(&st_9);
    api10->godot_variant_new_nil(&st_10);
    api10->godot_variant_new_nil(&st_11);
    api10->godot_variant_new_nil(&st_12);
    api10->godot_variant_new_nil(&st_13);
    api10->godot_variant_new_nil(&st_14);
    api10->godot_variant_new_nil(&st_15);
    if (p_num_args > 4)
        api10->godot_variant_new_copy(&st_16, p_args[4]);
    if (p_num_args > 3)
        api10->godot_variant_new_copy(&st_17, p_args[3]);
    if (p_num_args > 2)
        api10->godot_variant_new_copy(&st_18, p_args[2]);
    if (p_num_args > 1)
        api10->godot_variant_new_copy(&st_19, p_args[1]);
    if (p_num_args > 0)
        api10->godot_variant_new_copy(&st_20, p_args[0]);
    goto _0;
_0:
    printf("%i : _0\n", __LINE__);
    goto _2;
_2:
    printf("%i : _2\n", __LINE__);
    api10->godot_variant_new_copy(&st_5, &st_19);
    {
        godot_variant *args[] = {&st_16};
        godot_variant call_result = api10->godot_variant_call(&st_5, &Class_9_adjust_facing_strings[0], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_8, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    {
        godot_variant call_result = api10->godot_variant_call(&st_8, &Class_9_adjust_facing_strings[1], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_8, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_6, &st_8);
    {
        godot_variant *args[] = {&st_20};
        godot_variant call_result = api10->godot_variant_call(&st_5, &Class_9_adjust_facing_strings[2], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_9, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_7, &st_9);
    {
        godot_variant *args[] = {&st_20};
        godot_variant call_result = api10->godot_variant_call(&st_6, &Class_9_adjust_facing_strings[2], (const godot_variant **)args, 1, &__error);
        api10->godot_variant_new_copy(&st_10, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api10->godot_variant_new_copy(&st_8, &st_10);
    {
        godot_variant *args[] = {&st_8, &st_7};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(9, (const godot_variant **)args, 2, &st_11, &err);
    }
    api10->godot_variant_new_copy(&st_9, &st_11);
    {
        godot_variant *args[] = {&st_9};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(16, (const godot_variant **)args, 1, &st_10, &err);
    }
    api11->godot_variant_evaluate(2, &st_10, &Class_9_adjust_facing_local_const[0], &st_10, &__flag);
    __flag = api10->godot_variant_as_bool(&st_10);
    if (!__flag)
        goto _61;
    goto _59;
_61:
    printf("%i : _61\n", __LINE__);
    {
        godot_variant *args[] = {&st_9};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(17, (const godot_variant **)args, 1, &st_12, &err);
    }
    api10->godot_variant_new_copy(&st_10, &st_12);
    api11->godot_variant_evaluate(8, &st_9, &st_10, &st_12, &__flag);
    api10->godot_variant_new_copy(&st_9, &st_12);
    api11->godot_variant_evaluate(8, &st_9, &st_17, &st_13, &__flag);
    api11->godot_variant_evaluate(8, &st_13, &st_18, &st_13, &__flag);
    api10->godot_variant_new_copy(&st_11, &st_13);
    api10->godot_variant_new_copy(&st_12, &Class_9_adjust_facing_local_const[1]);
    api11->godot_variant_evaluate(2, &st_9, &st_11, &st_13, &__flag);
    __flag = api10->godot_variant_as_bool(&st_13);
    if (!__flag)
        goto _101;
    goto _156;
_156:
    printf("%i : _156\n", __LINE__);
    api10->godot_variant_new_copy(&st_12, &st_9);
    goto _106;
_106:
    printf("%i : _106\n", __LINE__);
    api11->godot_variant_evaluate(7, &st_9, &st_12, &st_14, &__flag);
    api11->godot_variant_evaluate(8, &st_14, &st_10, &st_14, &__flag);
    api10->godot_variant_new_copy(&st_9, &st_14);
    {
        godot_variant *args[] = {&st_9};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(1, (const godot_variant **)args, 1, &st_14, &err);
    }
    api11->godot_variant_evaluate(8, &st_5, &st_14, &st_13, &__flag);
    {
        godot_variant *args[] = {&st_9};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(0, (const godot_variant **)args, 1, &st_15, &err);
    }
    api11->godot_variant_evaluate(8, &st_6, &st_15, &st_14, &__flag);
    api11->godot_variant_evaluate(6, &st_13, &st_14, &st_13, &__flag);
    {
        godot_variant call_result = api10->godot_variant_call(&st_20, &Class_9_adjust_facing_strings[3], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_14, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    api11->godot_variant_evaluate(8, &st_13, &st_14, &st_13, &__flag);
    api10->godot_variant_new_copy(&__return_value, &st_13);
    goto _2147483646;
_2147483646:
    printf("%i : _2147483646\n", __LINE__);
    api10->godot_variant_destroy(&st_5);
    api10->godot_variant_destroy(&st_6);
    api10->godot_variant_destroy(&st_7);
    api10->godot_variant_destroy(&st_8);
    api10->godot_variant_destroy(&st_9);
    api10->godot_variant_destroy(&st_10);
    api10->godot_variant_destroy(&st_11);
    api10->godot_variant_destroy(&st_12);
    api10->godot_variant_destroy(&st_13);
    api10->godot_variant_destroy(&st_14);
    api10->godot_variant_destroy(&st_15);
    api10->godot_variant_destroy(&st_16);
    api10->godot_variant_destroy(&st_17);
    api10->godot_variant_destroy(&st_18);
    api10->godot_variant_destroy(&st_19);
    api10->godot_variant_destroy(&st_20);
    goto _cleanup;
_101:
    printf("%i : _101\n", __LINE__);
    api10->godot_variant_new_copy(&st_12, &st_11);
    goto _106;
_59:
    printf("%i : _59\n", __LINE__);
    api10->godot_variant_new_copy(&__return_value, &st_20);
    goto _2147483646;
_cleanup:
    //printf("Exit: Class_9_adjust_facing_func\n");
    return __return_value;
}
void Class_9_vtable_init()
{
    vtable_init(&Class_9_vtable, &vtable, 10, "Class_9", 4, (void *)0, Class_9_vtable_methods, Class_9_vtable_method_names);
    VTABLE_METHOD(Class_9_vtable, 0, "_ready", Class_9__ready_func, (void *)0);
    VTABLE_METHOD(Class_9_vtable, 1, "_physics_process", Class_9__physics_process_func, (void *)0);
    VTABLE_METHOD(Class_9_vtable, 2, "_init", Class_9__init_func, (void *)0);
    VTABLE_METHOD(Class_9_vtable, 3, "adjust_facing", Class_9_adjust_facing_func, (void *)0);
}
void GDN_EXPORT godot_gdnative_init(godot_gdnative_init_options *p_options)
{
    //printf("Enter: godot_gdnative_init\n");
    api10 = p_options->api_struct;

    const godot_gdnative_api_struct *extension = api10->next;
    while (extension)
    {
        if (extension->version.major == 1 && extension->version.minor == 1)
        {
            //printf("  Found api11\n");
            api11 = (const godot_gdnative_core_1_1_api_struct *)extension;
        }
        if (extension == extension->next)
            break;
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
                    //printf("  Found nativescript11\n");
                    nativescript11 = (const godot_gdnative_ext_nativescript_1_1_api_struct *)extension;
                }
                if (extension == extension->next)
                    break;
                extension = extension->next;
            }
        };
        break;

        default:
            break;
        }
    }

    gd2c_api_initialize();
    vtable_init_base();

    api10->godot_variant_new_nil(&__nil);
    //printf("Exit: godot_gdnative_init\n");
}
void GDN_EXPORT godot_gdnative_terminate(godot_gdnative_terminate_options *p_options)
{
    //printf("Enter: godot_gdnative_terminate\n");
    api10->godot_variant_destroy(&__nil);
    if (0 != Class_1__init_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_1__init_local_const[0]);
    }
    if (0 != Class_3__init_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_3__init_local_const[0]);
    }
    if (0 != Class_3__on_coin_body_enter_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_3__on_coin_body_enter_local_const[0]);
        api10->godot_variant_destroy(&Class_3__on_coin_body_enter_local_const[1]);
        api10->godot_variant_destroy(&Class_3__on_coin_body_enter_local_const[2]);
        api10->godot_variant_destroy(&Class_3__on_coin_body_enter_local_const[3]);
    }
    api10->godot_variant_destroy(&Class_5_constants[0]);
    api10->godot_variant_destroy(&Class_5_constants[1]);
    if (0 != Class_5__init_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_5__init_local_const[0]);
        api10->godot_variant_destroy(&Class_5__init_local_const[1]);
        api10->godot_variant_destroy(&Class_5__init_local_const[2]);
        api10->godot_variant_destroy(&Class_5__init_local_const[3]);
        api10->godot_variant_destroy(&Class_5__init_local_const[4]);
        api10->godot_variant_destroy(&Class_5__init_local_const[5]);
    }
    if (0 != Class_5__integrate_forces_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_5__integrate_forces_local_const[0]);
        api10->godot_variant_destroy(&Class_5__integrate_forces_local_const[1]);
        api10->godot_variant_destroy(&Class_5__integrate_forces_local_const[2]);
        api10->godot_variant_destroy(&Class_5__integrate_forces_local_const[3]);
        api10->godot_variant_destroy(&Class_5__integrate_forces_local_const[4]);
        api10->godot_variant_destroy(&Class_5__integrate_forces_local_const[5]);
        api10->godot_variant_destroy(&Class_5__integrate_forces_local_const[6]);
        api10->godot_variant_destroy(&Class_5__integrate_forces_local_const[7]);
        api10->godot_variant_destroy(&Class_5__integrate_forces_local_const[8]);
        api10->godot_variant_destroy(&Class_5__integrate_forces_local_const[9]);
        api10->godot_variant_destroy(&Class_5__integrate_forces_local_const[10]);
        api10->godot_variant_destroy(&Class_5__integrate_forces_local_const[11]);
        api10->godot_variant_destroy(&Class_5__integrate_forces_local_const[12]);
        api10->godot_variant_destroy(&Class_5__integrate_forces_local_const[13]);
        api10->godot_variant_destroy(&Class_5__integrate_forces_local_const[14]);
        api10->godot_variant_destroy(&Class_5__integrate_forces_local_const[15]);
    }
    if (0 != Class_7__ready_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_7__ready_local_const[0]);
    }
    if (0 != Class_7__physics_process_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_7__physics_process_local_const[0]);
        api10->godot_variant_destroy(&Class_7__physics_process_local_const[1]);
        api10->godot_variant_destroy(&Class_7__physics_process_local_const[2]);
        api10->godot_variant_destroy(&Class_7__physics_process_local_const[3]);
    }
    if (0 != Class_7__init_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_7__init_local_const[0]);
        api10->godot_variant_destroy(&Class_7__init_local_const[1]);
        api10->godot_variant_destroy(&Class_7__init_local_const[2]);
        api10->godot_variant_destroy(&Class_7__init_local_const[3]);
        api10->godot_variant_destroy(&Class_7__init_local_const[4]);
        api10->godot_variant_destroy(&Class_7__init_local_const[5]);
        api10->godot_variant_destroy(&Class_7__init_local_const[6]);
    }
    api10->godot_variant_destroy(&Class_9_constants[0]);
    api10->godot_variant_destroy(&Class_9_constants[1]);
    api10->godot_variant_destroy(&Class_9_constants[2]);
    api10->godot_variant_destroy(&Class_9_constants[3]);
    api10->godot_variant_destroy(&Class_9_constants[4]);
    api10->godot_variant_destroy(&Class_9_constants[5]);
    if (0 != Class_9__ready_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_9__ready_local_const[0]);
        api10->godot_variant_destroy(&Class_9__ready_local_const[1]);
    }
    if (0 != Class_9__physics_process_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[0]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[1]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[2]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[3]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[4]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[5]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[6]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[7]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[8]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[9]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[10]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[11]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[12]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[13]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[14]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[15]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[16]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[17]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[18]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[19]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[20]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[21]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[22]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[23]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[24]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[25]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[26]);
        api10->godot_variant_destroy(&Class_9__physics_process_local_const[27]);
    }
    if (0 != Class_9__init_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_9__init_local_const[0]);
        api10->godot_variant_destroy(&Class_9__init_local_const[1]);
        api10->godot_variant_destroy(&Class_9__init_local_const[2]);
        api10->godot_variant_destroy(&Class_9__init_local_const[3]);
        api10->godot_variant_destroy(&Class_9__init_local_const[4]);
        api10->godot_variant_destroy(&Class_9__init_local_const[5]);
        api10->godot_variant_destroy(&Class_9__init_local_const[6]);
        api10->godot_variant_destroy(&Class_9__init_local_const[7]);
        api10->godot_variant_destroy(&Class_9__init_local_const[8]);
        api10->godot_variant_destroy(&Class_9__init_local_const[9]);
    }
    if (0 != Class_9_adjust_facing_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_9_adjust_facing_local_const[0]);
        api10->godot_variant_destroy(&Class_9_adjust_facing_local_const[1]);
    }
    api10->godot_variant_destroy(&global_constants_array[0]);
    api10->godot_variant_destroy(&global_constants_array[1]);
    api10->godot_variant_destroy(&global_constants_array[2]);
    api10->godot_variant_destroy(&global_constants_array[3]);
    api10->godot_variant_destroy(&global_constants_array[4]);
    api10->godot_variant_destroy(&global_constants_array[5]);
    api10->godot_variant_destroy(&global_constants_array[6]);
    api10->godot_variant_destroy(&global_constants_array[7]);
    api10->godot_variant_destroy(&global_constants_array[8]);
    api10->godot_variant_destroy(&global_constants_array[9]);
    api10->godot_variant_destroy(&global_constants_array[10]);
    api10->godot_variant_destroy(&global_constants_array[11]);
    api10->godot_variant_destroy(&global_constants_array[12]);
    api10->godot_variant_destroy(&global_constants_array[13]);
    api10->godot_variant_destroy(&global_constants_array[14]);
    api10->godot_variant_destroy(&global_constants_array[15]);
    api10->godot_variant_destroy(&global_constants_array[16]);
    api10->godot_variant_destroy(&global_constants_array[17]);
    api10->godot_variant_destroy(&global_constants_array[18]);
    api10->godot_variant_destroy(&global_constants_array[19]);
    api10->godot_variant_destroy(&global_constants_array[20]);
    api10->godot_variant_destroy(&global_constants_array[21]);
    api10->godot_variant_destroy(&global_constants_array[22]);
    api10->godot_variant_destroy(&global_constants_array[23]);
    api10->godot_variant_destroy(&global_constants_array[24]);
    api10->godot_variant_destroy(&global_constants_array[25]);
    api10->godot_variant_destroy(&global_constants_array[26]);
    api10->godot_variant_destroy(&global_constants_array[27]);
    api10->godot_variant_destroy(&global_constants_array[28]);
    api10->godot_variant_destroy(&global_constants_array[29]);
    api10->godot_variant_destroy(&global_constants_array[30]);
    api10->godot_variant_destroy(&global_constants_array[31]);
    api10->godot_variant_destroy(&global_constants_array[32]);
    api10->godot_variant_destroy(&global_constants_array[33]);
    api10->godot_variant_destroy(&global_constants_array[34]);
    api10->godot_variant_destroy(&global_constants_array[35]);
    api10->godot_variant_destroy(&global_constants_array[36]);
    api10->godot_variant_destroy(&global_constants_array[37]);
    api10->godot_variant_destroy(&global_constants_array[38]);
    api10->godot_variant_destroy(&global_constants_array[39]);
    api10->godot_variant_destroy(&global_constants_array[40]);
    api10->godot_variant_destroy(&global_constants_array[41]);
    api10->godot_variant_destroy(&global_constants_array[42]);
    api10->godot_variant_destroy(&global_constants_array[43]);
    api10->godot_variant_destroy(&global_constants_array[44]);
    api10->godot_variant_destroy(&global_constants_array[45]);
    api10->godot_variant_destroy(&global_constants_array[46]);
    api10->godot_variant_destroy(&global_constants_array[47]);
    api10->godot_variant_destroy(&global_constants_array[48]);
    api10->godot_variant_destroy(&global_constants_array[49]);
    api10->godot_variant_destroy(&global_constants_array[50]);
    api10->godot_variant_destroy(&global_constants_array[51]);
    api10->godot_variant_destroy(&global_constants_array[52]);
    api10->godot_variant_destroy(&global_constants_array[53]);
    api10->godot_variant_destroy(&global_constants_array[54]);
    api10->godot_variant_destroy(&global_constants_array[55]);
    api10->godot_variant_destroy(&global_constants_array[56]);
    api10->godot_variant_destroy(&global_constants_array[57]);
    api10->godot_variant_destroy(&global_constants_array[58]);
    api10->godot_variant_destroy(&global_constants_array[59]);
    api10->godot_variant_destroy(&global_constants_array[60]);
    api10->godot_variant_destroy(&global_constants_array[61]);
    api10->godot_variant_destroy(&global_constants_array[62]);
    api10->godot_variant_destroy(&global_constants_array[63]);
    api10->godot_variant_destroy(&global_constants_array[64]);
    api10->godot_variant_destroy(&global_constants_array[65]);
    api10->godot_variant_destroy(&global_constants_array[66]);
    api10->godot_variant_destroy(&global_constants_array[67]);
    api10->godot_variant_destroy(&global_constants_array[68]);
    api10->godot_variant_destroy(&global_constants_array[69]);
    api10->godot_variant_destroy(&global_constants_array[70]);
    api10->godot_variant_destroy(&global_constants_array[71]);
    api10->godot_variant_destroy(&global_constants_array[72]);
    api10->godot_variant_destroy(&global_constants_array[73]);
    api10->godot_variant_destroy(&global_constants_array[74]);
    api10->godot_variant_destroy(&global_constants_array[75]);
    api10->godot_variant_destroy(&global_constants_array[76]);
    api10->godot_variant_destroy(&global_constants_array[77]);
    api10->godot_variant_destroy(&global_constants_array[78]);
    api10->godot_variant_destroy(&global_constants_array[79]);
    api10->godot_variant_destroy(&global_constants_array[80]);
    api10->godot_variant_destroy(&global_constants_array[81]);
    api10->godot_variant_destroy(&global_constants_array[82]);
    api10->godot_variant_destroy(&global_constants_array[83]);
    api10->godot_variant_destroy(&global_constants_array[84]);
    api10->godot_variant_destroy(&global_constants_array[85]);
    api10->godot_variant_destroy(&global_constants_array[86]);
    api10->godot_variant_destroy(&global_constants_array[87]);
    api10->godot_variant_destroy(&global_constants_array[88]);
    api10->godot_variant_destroy(&global_constants_array[89]);
    api10->godot_variant_destroy(&global_constants_array[90]);
    api10->godot_variant_destroy(&global_constants_array[91]);
    api10->godot_variant_destroy(&global_constants_array[92]);
    api10->godot_variant_destroy(&global_constants_array[93]);
    api10->godot_variant_destroy(&global_constants_array[94]);
    api10->godot_variant_destroy(&global_constants_array[95]);
    api10->godot_variant_destroy(&global_constants_array[96]);
    api10->godot_variant_destroy(&global_constants_array[97]);
    api10->godot_variant_destroy(&global_constants_array[98]);
    api10->godot_variant_destroy(&global_constants_array[99]);
    api10->godot_variant_destroy(&global_constants_array[100]);
    api10->godot_variant_destroy(&global_constants_array[101]);
    api10->godot_variant_destroy(&global_constants_array[102]);
    api10->godot_variant_destroy(&global_constants_array[103]);
    api10->godot_variant_destroy(&global_constants_array[104]);
    api10->godot_variant_destroy(&global_constants_array[105]);
    api10->godot_variant_destroy(&global_constants_array[106]);
    api10->godot_variant_destroy(&global_constants_array[107]);
    api10->godot_variant_destroy(&global_constants_array[108]);
    api10->godot_variant_destroy(&global_constants_array[109]);
    api10->godot_variant_destroy(&global_constants_array[110]);
    api10->godot_variant_destroy(&global_constants_array[111]);
    api10->godot_variant_destroy(&global_constants_array[112]);
    api10->godot_variant_destroy(&global_constants_array[113]);
    api10->godot_variant_destroy(&global_constants_array[114]);
    api10->godot_variant_destroy(&global_constants_array[115]);
    api10->godot_variant_destroy(&global_constants_array[116]);
    api10->godot_variant_destroy(&global_constants_array[117]);
    api10->godot_variant_destroy(&global_constants_array[118]);
    api10->godot_variant_destroy(&global_constants_array[119]);
    api10->godot_variant_destroy(&global_constants_array[120]);
    api10->godot_variant_destroy(&global_constants_array[121]);
    api10->godot_variant_destroy(&global_constants_array[122]);
    api10->godot_variant_destroy(&global_constants_array[123]);
    api10->godot_variant_destroy(&global_constants_array[124]);
    api10->godot_variant_destroy(&global_constants_array[125]);
    api10->godot_variant_destroy(&global_constants_array[126]);
    api10->godot_variant_destroy(&global_constants_array[127]);
    api10->godot_variant_destroy(&global_constants_array[128]);
    api10->godot_variant_destroy(&global_constants_array[129]);
    api10->godot_variant_destroy(&global_constants_array[130]);
    api10->godot_variant_destroy(&global_constants_array[131]);
    api10->godot_variant_destroy(&global_constants_array[132]);
    api10->godot_variant_destroy(&global_constants_array[133]);
    api10->godot_variant_destroy(&global_constants_array[134]);
    api10->godot_variant_destroy(&global_constants_array[135]);
    api10->godot_variant_destroy(&global_constants_array[136]);
    api10->godot_variant_destroy(&global_constants_array[137]);
    api10->godot_variant_destroy(&global_constants_array[138]);
    api10->godot_variant_destroy(&global_constants_array[139]);
    api10->godot_variant_destroy(&global_constants_array[140]);
    api10->godot_variant_destroy(&global_constants_array[141]);
    api10->godot_variant_destroy(&global_constants_array[142]);
    api10->godot_variant_destroy(&global_constants_array[143]);
    api10->godot_variant_destroy(&global_constants_array[144]);
    api10->godot_variant_destroy(&global_constants_array[145]);
    api10->godot_variant_destroy(&global_constants_array[146]);
    api10->godot_variant_destroy(&global_constants_array[147]);
    api10->godot_variant_destroy(&global_constants_array[148]);
    api10->godot_variant_destroy(&global_constants_array[149]);
    api10->godot_variant_destroy(&global_constants_array[150]);
    api10->godot_variant_destroy(&global_constants_array[151]);
    api10->godot_variant_destroy(&global_constants_array[152]);
    api10->godot_variant_destroy(&global_constants_array[153]);
    api10->godot_variant_destroy(&global_constants_array[154]);
    api10->godot_variant_destroy(&global_constants_array[155]);
    api10->godot_variant_destroy(&global_constants_array[156]);
    api10->godot_variant_destroy(&global_constants_array[157]);
    api10->godot_variant_destroy(&global_constants_array[158]);
    api10->godot_variant_destroy(&global_constants_array[159]);
    api10->godot_variant_destroy(&global_constants_array[160]);
    api10->godot_variant_destroy(&global_constants_array[161]);
    api10->godot_variant_destroy(&global_constants_array[162]);
    api10->godot_variant_destroy(&global_constants_array[163]);
    api10->godot_variant_destroy(&global_constants_array[164]);
    api10->godot_variant_destroy(&global_constants_array[165]);
    api10->godot_variant_destroy(&global_constants_array[166]);
    api10->godot_variant_destroy(&global_constants_array[167]);
    api10->godot_variant_destroy(&global_constants_array[168]);
    api10->godot_variant_destroy(&global_constants_array[169]);
    api10->godot_variant_destroy(&global_constants_array[170]);
    api10->godot_variant_destroy(&global_constants_array[171]);
    api10->godot_variant_destroy(&global_constants_array[172]);
    api10->godot_variant_destroy(&global_constants_array[173]);
    api10->godot_variant_destroy(&global_constants_array[174]);
    api10->godot_variant_destroy(&global_constants_array[175]);
    api10->godot_variant_destroy(&global_constants_array[176]);
    api10->godot_variant_destroy(&global_constants_array[177]);
    api10->godot_variant_destroy(&global_constants_array[178]);
    api10->godot_variant_destroy(&global_constants_array[179]);
    api10->godot_variant_destroy(&global_constants_array[180]);
    api10->godot_variant_destroy(&global_constants_array[181]);
    api10->godot_variant_destroy(&global_constants_array[182]);
    api10->godot_variant_destroy(&global_constants_array[183]);
    api10->godot_variant_destroy(&global_constants_array[184]);
    api10->godot_variant_destroy(&global_constants_array[185]);
    api10->godot_variant_destroy(&global_constants_array[186]);
    api10->godot_variant_destroy(&global_constants_array[187]);
    api10->godot_variant_destroy(&global_constants_array[188]);
    api10->godot_variant_destroy(&global_constants_array[189]);
    api10->godot_variant_destroy(&global_constants_array[190]);
    api10->godot_variant_destroy(&global_constants_array[191]);
    api10->godot_variant_destroy(&global_constants_array[192]);
    api10->godot_variant_destroy(&global_constants_array[193]);
    api10->godot_variant_destroy(&global_constants_array[194]);
    api10->godot_variant_destroy(&global_constants_array[195]);
    api10->godot_variant_destroy(&global_constants_array[196]);
    api10->godot_variant_destroy(&global_constants_array[197]);
    api10->godot_variant_destroy(&global_constants_array[198]);
    api10->godot_variant_destroy(&global_constants_array[199]);
    api10->godot_variant_destroy(&global_constants_array[200]);
    api10->godot_variant_destroy(&global_constants_array[201]);
    api10->godot_variant_destroy(&global_constants_array[202]);
    api10->godot_variant_destroy(&global_constants_array[203]);
    api10->godot_variant_destroy(&global_constants_array[204]);
    api10->godot_variant_destroy(&global_constants_array[205]);
    api10->godot_variant_destroy(&global_constants_array[206]);
    api10->godot_variant_destroy(&global_constants_array[207]);
    api10->godot_variant_destroy(&global_constants_array[208]);
    api10->godot_variant_destroy(&global_constants_array[209]);
    api10->godot_variant_destroy(&global_constants_array[210]);
    api10->godot_variant_destroy(&global_constants_array[211]);
    api10->godot_variant_destroy(&global_constants_array[212]);
    api10->godot_variant_destroy(&global_constants_array[213]);
    api10->godot_variant_destroy(&global_constants_array[214]);
    api10->godot_variant_destroy(&global_constants_array[215]);
    api10->godot_variant_destroy(&global_constants_array[216]);
    api10->godot_variant_destroy(&global_constants_array[217]);
    api10->godot_variant_destroy(&global_constants_array[218]);
    api10->godot_variant_destroy(&global_constants_array[219]);
    api10->godot_variant_destroy(&global_constants_array[220]);
    api10->godot_variant_destroy(&global_constants_array[221]);
    api10->godot_variant_destroy(&global_constants_array[222]);
    api10->godot_variant_destroy(&global_constants_array[223]);
    api10->godot_variant_destroy(&global_constants_array[224]);
    api10->godot_variant_destroy(&global_constants_array[225]);
    api10->godot_variant_destroy(&global_constants_array[226]);
    api10->godot_variant_destroy(&global_constants_array[227]);
    api10->godot_variant_destroy(&global_constants_array[228]);
    api10->godot_variant_destroy(&global_constants_array[229]);
    api10->godot_variant_destroy(&global_constants_array[230]);
    api10->godot_variant_destroy(&global_constants_array[231]);
    api10->godot_variant_destroy(&global_constants_array[232]);
    api10->godot_variant_destroy(&global_constants_array[233]);
    api10->godot_variant_destroy(&global_constants_array[234]);
    api10->godot_variant_destroy(&global_constants_array[235]);
    api10->godot_variant_destroy(&global_constants_array[236]);
    api10->godot_variant_destroy(&global_constants_array[237]);
    api10->godot_variant_destroy(&global_constants_array[238]);
    api10->godot_variant_destroy(&global_constants_array[239]);
    api10->godot_variant_destroy(&global_constants_array[240]);
    api10->godot_variant_destroy(&global_constants_array[241]);
    api10->godot_variant_destroy(&global_constants_array[242]);
    api10->godot_variant_destroy(&global_constants_array[243]);
    api10->godot_variant_destroy(&global_constants_array[244]);
    api10->godot_variant_destroy(&global_constants_array[245]);
    api10->godot_variant_destroy(&global_constants_array[246]);
    api10->godot_variant_destroy(&global_constants_array[247]);
    api10->godot_variant_destroy(&global_constants_array[248]);
    api10->godot_variant_destroy(&global_constants_array[249]);
    api10->godot_variant_destroy(&global_constants_array[250]);
    api10->godot_variant_destroy(&global_constants_array[251]);
    api10->godot_variant_destroy(&global_constants_array[252]);
    api10->godot_variant_destroy(&global_constants_array[253]);
    api10->godot_variant_destroy(&global_constants_array[254]);
    api10->godot_variant_destroy(&global_constants_array[255]);
    api10->godot_variant_destroy(&global_constants_array[256]);
    api10->godot_variant_destroy(&global_constants_array[257]);
    api10->godot_variant_destroy(&global_constants_array[258]);
    api10->godot_variant_destroy(&global_constants_array[259]);
    api10->godot_variant_destroy(&global_constants_array[260]);
    api10->godot_variant_destroy(&global_constants_array[261]);
    api10->godot_variant_destroy(&global_constants_array[262]);
    api10->godot_variant_destroy(&global_constants_array[263]);
    api10->godot_variant_destroy(&global_constants_array[264]);
    api10->godot_variant_destroy(&global_constants_array[265]);
    api10->godot_variant_destroy(&global_constants_array[266]);
    api10->godot_variant_destroy(&global_constants_array[267]);
    api10->godot_variant_destroy(&global_constants_array[268]);
    api10->godot_variant_destroy(&global_constants_array[269]);
    api10->godot_variant_destroy(&global_constants_array[270]);
    api10->godot_variant_destroy(&global_constants_array[271]);
    api10->godot_variant_destroy(&global_constants_array[272]);
    api10->godot_variant_destroy(&global_constants_array[273]);
    api10->godot_variant_destroy(&global_constants_array[274]);
    api10->godot_variant_destroy(&global_constants_array[275]);
    api10->godot_variant_destroy(&global_constants_array[276]);
    api10->godot_variant_destroy(&global_constants_array[277]);
    api10->godot_variant_destroy(&global_constants_array[278]);
    api10->godot_variant_destroy(&global_constants_array[279]);
    api10->godot_variant_destroy(&global_constants_array[280]);
    api10->godot_variant_destroy(&global_constants_array[281]);
    api10->godot_variant_destroy(&global_constants_array[282]);
    api10->godot_variant_destroy(&global_constants_array[283]);
    api10->godot_variant_destroy(&global_constants_array[284]);
    api10->godot_variant_destroy(&global_constants_array[285]);
    api10->godot_variant_destroy(&global_constants_array[286]);
    api10->godot_variant_destroy(&global_constants_array[287]);
    api10->godot_variant_destroy(&global_constants_array[288]);
    api10->godot_variant_destroy(&global_constants_array[289]);
    api10->godot_variant_destroy(&global_constants_array[290]);
    api10->godot_variant_destroy(&global_constants_array[291]);
    api10->godot_variant_destroy(&global_constants_array[292]);
    api10->godot_variant_destroy(&global_constants_array[293]);
    api10->godot_variant_destroy(&global_constants_array[294]);
    api10->godot_variant_destroy(&global_constants_array[295]);
    api10->godot_variant_destroy(&global_constants_array[296]);
    api10->godot_variant_destroy(&global_constants_array[297]);
    api10->godot_variant_destroy(&global_constants_array[298]);
    api10->godot_variant_destroy(&global_constants_array[299]);
    api10->godot_variant_destroy(&global_constants_array[300]);
    api10->godot_variant_destroy(&global_constants_array[301]);
    api10->godot_variant_destroy(&global_constants_array[302]);
    api10->godot_variant_destroy(&global_constants_array[303]);
    api10->godot_variant_destroy(&global_constants_array[304]);
    api10->godot_variant_destroy(&global_constants_array[305]);
    api10->godot_variant_destroy(&global_constants_array[306]);
    api10->godot_variant_destroy(&global_constants_array[307]);
    api10->godot_variant_destroy(&global_constants_array[308]);
    api10->godot_variant_destroy(&global_constants_array[309]);
    api10->godot_variant_destroy(&global_constants_array[310]);
    api10->godot_variant_destroy(&global_constants_array[311]);
    api10->godot_variant_destroy(&global_constants_array[312]);
    api10->godot_variant_destroy(&global_constants_array[313]);
    api10->godot_variant_destroy(&global_constants_array[314]);
    api10->godot_variant_destroy(&global_constants_array[315]);
    api10->godot_variant_destroy(&global_constants_array[316]);
    api10->godot_variant_destroy(&global_constants_array[317]);
    api10->godot_variant_destroy(&global_constants_array[318]);
    api10->godot_variant_destroy(&global_constants_array[319]);
    api10->godot_variant_destroy(&global_constants_array[320]);
    api10->godot_variant_destroy(&global_constants_array[321]);
    api10->godot_variant_destroy(&global_constants_array[322]);
    api10->godot_variant_destroy(&global_constants_array[323]);
    api10->godot_variant_destroy(&global_constants_array[324]);
    api10->godot_variant_destroy(&global_constants_array[325]);
    api10->godot_variant_destroy(&global_constants_array[326]);
    api10->godot_variant_destroy(&global_constants_array[327]);
    api10->godot_variant_destroy(&global_constants_array[328]);
    api10->godot_variant_destroy(&global_constants_array[329]);
    api10->godot_variant_destroy(&global_constants_array[330]);
    api10->godot_variant_destroy(&global_constants_array[331]);
    api10->godot_variant_destroy(&global_constants_array[332]);
    api10->godot_variant_destroy(&global_constants_array[333]);
    api10->godot_variant_destroy(&global_constants_array[334]);
    api10->godot_variant_destroy(&global_constants_array[335]);
    api10->godot_variant_destroy(&global_constants_array[336]);
    api10->godot_variant_destroy(&global_constants_array[337]);
    api10->godot_variant_destroy(&global_constants_array[338]);
    api10->godot_variant_destroy(&global_constants_array[339]);
    api10->godot_variant_destroy(&global_constants_array[340]);
    api10->godot_variant_destroy(&global_constants_array[341]);
    api10->godot_variant_destroy(&global_constants_array[342]);
    api10->godot_variant_destroy(&global_constants_array[343]);
    api10->godot_variant_destroy(&global_constants_array[344]);
    api10->godot_variant_destroy(&global_constants_array[345]);
    api10->godot_variant_destroy(&global_constants_array[346]);
    api10->godot_variant_destroy(&global_constants_array[347]);
    api10->godot_variant_destroy(&global_constants_array[348]);
    api10->godot_variant_destroy(&global_constants_array[349]);
    api10->godot_variant_destroy(&global_constants_array[350]);
    api10->godot_variant_destroy(&global_constants_array[351]);
    api10->godot_variant_destroy(&global_constants_array[352]);
    api10->godot_variant_destroy(&global_constants_array[353]);
    api10->godot_variant_destroy(&global_constants_array[354]);
    api10->godot_variant_destroy(&global_constants_array[355]);
    api10->godot_variant_destroy(&global_constants_array[356]);
    api10->godot_variant_destroy(&global_constants_array[357]);
    api10->godot_variant_destroy(&global_constants_array[358]);
    api10->godot_variant_destroy(&global_constants_array[359]);
    api10->godot_variant_destroy(&global_constants_array[360]);
    api10->godot_variant_destroy(&global_constants_array[361]);
    api10->godot_variant_destroy(&global_constants_array[362]);
    api10->godot_variant_destroy(&global_constants_array[363]);
    api10->godot_variant_destroy(&global_constants_array[364]);
    api10->godot_variant_destroy(&global_constants_array[365]);
    api10->godot_variant_destroy(&global_constants_array[366]);
    api10->godot_variant_destroy(&global_constants_array[367]);
    api10->godot_variant_destroy(&global_constants_array[368]);
    api10->godot_variant_destroy(&global_constants_array[369]);
    api10->godot_variant_destroy(&global_constants_array[370]);
    api10->godot_variant_destroy(&global_constants_array[371]);
    api10->godot_variant_destroy(&global_constants_array[372]);
    api10->godot_variant_destroy(&global_constants_array[373]);
    api10->godot_variant_destroy(&global_constants_array[374]);
    api10->godot_variant_destroy(&global_constants_array[375]);
    api10->godot_variant_destroy(&global_constants_array[376]);
    api10->godot_variant_destroy(&global_constants_array[377]);
    api10->godot_variant_destroy(&global_constants_array[378]);
    api10->godot_variant_destroy(&global_constants_array[379]);
    api10->godot_variant_destroy(&global_constants_array[380]);
    api10->godot_variant_destroy(&global_constants_array[381]);
    api10->godot_variant_destroy(&global_constants_array[382]);
    api10->godot_variant_destroy(&global_constants_array[383]);
    api10->godot_variant_destroy(&global_constants_array[384]);
    api10->godot_variant_destroy(&global_constants_array[385]);
    api10->godot_variant_destroy(&global_constants_array[386]);
    api10->godot_variant_destroy(&global_constants_array[387]);
    api10->godot_variant_destroy(&global_constants_array[388]);
    api10->godot_variant_destroy(&global_constants_array[389]);
    api10->godot_variant_destroy(&global_constants_array[390]);
    api10->godot_variant_destroy(&global_constants_array[391]);
    api10->godot_variant_destroy(&global_constants_array[392]);
    api10->godot_variant_destroy(&global_constants_array[393]);
    api10->godot_variant_destroy(&global_constants_array[394]);
    api10->godot_variant_destroy(&global_constants_array[395]);
    api10->godot_variant_destroy(&global_constants_array[396]);
    api10->godot_variant_destroy(&global_constants_array[397]);
    api10->godot_variant_destroy(&global_constants_array[398]);
    api10->godot_variant_destroy(&global_constants_array[399]);
    api10->godot_variant_destroy(&global_constants_array[400]);
    api10->godot_variant_destroy(&global_constants_array[401]);
    api10->godot_variant_destroy(&global_constants_array[402]);
    api10->godot_variant_destroy(&global_constants_array[403]);
    api10->godot_variant_destroy(&global_constants_array[404]);
    api10->godot_variant_destroy(&global_constants_array[405]);
    api10->godot_variant_destroy(&global_constants_array[406]);
    api10->godot_variant_destroy(&global_constants_array[407]);
    api10->godot_variant_destroy(&global_constants_array[408]);
    api10->godot_variant_destroy(&global_constants_array[409]);
    api10->godot_variant_destroy(&global_constants_array[410]);
    api10->godot_variant_destroy(&global_constants_array[411]);
    api10->godot_variant_destroy(&global_constants_array[412]);
    api10->godot_variant_destroy(&global_constants_array[413]);
    api10->godot_variant_destroy(&global_constants_array[414]);
    api10->godot_variant_destroy(&global_constants_array[415]);
    api10->godot_variant_destroy(&global_constants_array[416]);
    api10->godot_variant_destroy(&global_constants_array[417]);
    api10->godot_variant_destroy(&global_constants_array[418]);
    api10->godot_variant_destroy(&global_constants_array[419]);
    api10->godot_variant_destroy(&global_constants_array[420]);
    api10->godot_variant_destroy(&global_constants_array[421]);
    api10->godot_variant_destroy(&global_constants_array[422]);
    api10->godot_variant_destroy(&global_constants_array[423]);
    api10->godot_variant_destroy(&global_constants_array[424]);
    api10->godot_variant_destroy(&global_constants_array[425]);
    api10->godot_variant_destroy(&global_constants_array[426]);
    api10->godot_variant_destroy(&global_constants_array[427]);
    api10->godot_variant_destroy(&global_constants_array[428]);
    api10->godot_variant_destroy(&global_constants_array[429]);
    api10->godot_variant_destroy(&global_constants_array[430]);
    api10->godot_variant_destroy(&global_constants_array[431]);
    api10->godot_variant_destroy(&global_constants_array[432]);
    api10->godot_variant_destroy(&global_constants_array[433]);
    api10->godot_variant_destroy(&global_constants_array[434]);
    api10->godot_variant_destroy(&global_constants_array[435]);
    api10->godot_variant_destroy(&global_constants_array[436]);
    api10->godot_variant_destroy(&global_constants_array[437]);
    api10->godot_variant_destroy(&global_constants_array[438]);
    api10->godot_variant_destroy(&global_constants_array[439]);
    api10->godot_variant_destroy(&global_constants_array[440]);
    api10->godot_variant_destroy(&global_constants_array[441]);
    api10->godot_variant_destroy(&global_constants_array[442]);
    api10->godot_variant_destroy(&global_constants_array[443]);
    api10->godot_variant_destroy(&global_constants_array[444]);
    api10->godot_variant_destroy(&global_constants_array[445]);
    api10->godot_variant_destroy(&global_constants_array[446]);
    api10->godot_variant_destroy(&global_constants_array[447]);
    api10->godot_variant_destroy(&global_constants_array[448]);
    api10->godot_variant_destroy(&global_constants_array[449]);
    api10->godot_variant_destroy(&global_constants_array[450]);
    api10->godot_variant_destroy(&global_constants_array[451]);
    api10->godot_variant_destroy(&global_constants_array[452]);
    api10->godot_variant_destroy(&global_constants_array[453]);
    api10->godot_variant_destroy(&global_constants_array[454]);
    api10->godot_variant_destroy(&global_constants_array[455]);
    api10->godot_variant_destroy(&global_constants_array[456]);
    api10->godot_variant_destroy(&global_constants_array[457]);
    api10->godot_variant_destroy(&global_constants_array[458]);
    api10->godot_variant_destroy(&global_constants_array[459]);
    api10->godot_variant_destroy(&global_constants_array[460]);
    api10->godot_variant_destroy(&global_constants_array[461]);
    api10->godot_variant_destroy(&global_constants_array[462]);
    api10->godot_variant_destroy(&global_constants_array[463]);
    api10->godot_variant_destroy(&global_constants_array[464]);
    api10->godot_variant_destroy(&global_constants_array[465]);
    api10->godot_variant_destroy(&global_constants_array[466]);
    api10->godot_variant_destroy(&global_constants_array[467]);
    api10->godot_variant_destroy(&global_constants_array[468]);
    api10->godot_variant_destroy(&global_constants_array[469]);
    api10->godot_variant_destroy(&global_constants_array[470]);
    api10->godot_variant_destroy(&global_constants_array[471]);
    api10->godot_variant_destroy(&global_constants_array[472]);
    api10->godot_variant_destroy(&global_constants_array[473]);
    api10->godot_variant_destroy(&global_constants_array[474]);
    api10->godot_variant_destroy(&global_constants_array[475]);
    api10->godot_variant_destroy(&global_constants_array[476]);
    api10->godot_variant_destroy(&global_constants_array[477]);
    api10->godot_variant_destroy(&global_constants_array[478]);
    api10->godot_variant_destroy(&global_constants_array[479]);
    api10->godot_variant_destroy(&global_constants_array[480]);
    api10->godot_variant_destroy(&global_constants_array[481]);
    api10->godot_variant_destroy(&global_constants_array[482]);
    api10->godot_variant_destroy(&global_constants_array[483]);
    api10->godot_variant_destroy(&global_constants_array[484]);
    api10->godot_variant_destroy(&global_constants_array[485]);
    api10->godot_variant_destroy(&global_constants_array[486]);
    api10->godot_variant_destroy(&global_hard_coded_constants_array[0]);
    api10->godot_variant_destroy(&global_hard_coded_constants_array[1]);
    api10->godot_variant_destroy(&global_hard_coded_constants_array[2]);
    api10->godot_variant_destroy(&global_hard_coded_constants_array[3]);
    api10->godot_variant_destroy(&global_classdb_array[0]);
    api10->godot_variant_destroy(&global_classdb_array[1]);
    api10->godot_variant_destroy(&global_classdb_array[2]);
    api10->godot_variant_destroy(&global_classdb_array[3]);
    api10->godot_variant_destroy(&global_classdb_array[4]);
    api10->godot_variant_destroy(&global_classdb_array[5]);
    api10->godot_variant_destroy(&global_classdb_array[6]);
    api10->godot_variant_destroy(&global_classdb_array[7]);
    api10->godot_variant_destroy(&global_classdb_array[8]);
    api10->godot_variant_destroy(&global_classdb_array[9]);
    api10->godot_variant_destroy(&global_classdb_array[10]);
    api10->godot_variant_destroy(&global_classdb_array[11]);
    api10->godot_variant_destroy(&global_classdb_array[12]);
    api10->godot_variant_destroy(&global_classdb_array[13]);
    api10->godot_variant_destroy(&global_classdb_array[14]);
    api10->godot_variant_destroy(&global_classdb_array[15]);
    api10->godot_variant_destroy(&global_classdb_array[16]);
    api10->godot_variant_destroy(&global_classdb_array[17]);
    api10->godot_variant_destroy(&global_classdb_array[18]);
    api10->godot_variant_destroy(&global_classdb_array[19]);
    api10->godot_variant_destroy(&global_classdb_array[20]);
    api10->godot_variant_destroy(&global_classdb_array[21]);
    api10->godot_variant_destroy(&global_classdb_array[22]);
    api10->godot_variant_destroy(&global_classdb_array[23]);
    api10->godot_variant_destroy(&global_classdb_array[24]);
    api10->godot_variant_destroy(&global_classdb_array[25]);
    api10->godot_variant_destroy(&global_classdb_array[26]);
    api10->godot_variant_destroy(&global_classdb_array[27]);
    api10->godot_variant_destroy(&global_classdb_array[28]);
    api10->godot_variant_destroy(&global_classdb_array[29]);
    api10->godot_variant_destroy(&global_classdb_array[30]);
    api10->godot_variant_destroy(&global_classdb_array[31]);
    api10->godot_variant_destroy(&global_classdb_array[32]);
    api10->godot_variant_destroy(&global_classdb_array[33]);
    api10->godot_variant_destroy(&global_classdb_array[34]);
    api10->godot_variant_destroy(&global_classdb_array[35]);
    api10->godot_variant_destroy(&global_classdb_array[36]);
    api10->godot_variant_destroy(&global_classdb_array[37]);
    api10->godot_variant_destroy(&global_classdb_array[38]);
    api10->godot_variant_destroy(&global_classdb_array[39]);
    api10->godot_variant_destroy(&global_classdb_array[40]);
    api10->godot_variant_destroy(&global_classdb_array[41]);
    api10->godot_variant_destroy(&global_classdb_array[42]);
    api10->godot_variant_destroy(&global_classdb_array[43]);
    api10->godot_variant_destroy(&global_classdb_array[44]);
    api10->godot_variant_destroy(&global_classdb_array[45]);
    api10->godot_variant_destroy(&global_classdb_array[46]);
    api10->godot_variant_destroy(&global_classdb_array[47]);
    api10->godot_variant_destroy(&global_classdb_array[48]);
    api10->godot_variant_destroy(&global_classdb_array[49]);
    api10->godot_variant_destroy(&global_classdb_array[50]);
    api10->godot_variant_destroy(&global_classdb_array[51]);
    api10->godot_variant_destroy(&global_classdb_array[52]);
    api10->godot_variant_destroy(&global_classdb_array[53]);
    api10->godot_variant_destroy(&global_classdb_array[54]);
    api10->godot_variant_destroy(&global_classdb_array[55]);
    api10->godot_variant_destroy(&global_classdb_array[56]);
    api10->godot_variant_destroy(&global_classdb_array[57]);
    api10->godot_variant_destroy(&global_classdb_array[58]);
    api10->godot_variant_destroy(&global_classdb_array[59]);
    api10->godot_variant_destroy(&global_classdb_array[60]);
    api10->godot_variant_destroy(&global_classdb_array[61]);
    api10->godot_variant_destroy(&global_classdb_array[62]);
    api10->godot_variant_destroy(&global_classdb_array[63]);
    api10->godot_variant_destroy(&global_classdb_array[64]);
    api10->godot_variant_destroy(&global_classdb_array[65]);
    api10->godot_variant_destroy(&global_classdb_array[66]);
    api10->godot_variant_destroy(&global_classdb_array[67]);
    api10->godot_variant_destroy(&global_classdb_array[68]);
    api10->godot_variant_destroy(&global_classdb_array[69]);
    api10->godot_variant_destroy(&global_classdb_array[70]);
    api10->godot_variant_destroy(&global_classdb_array[71]);
    api10->godot_variant_destroy(&global_classdb_array[72]);
    api10->godot_variant_destroy(&global_classdb_array[73]);
    api10->godot_variant_destroy(&global_classdb_array[74]);
    api10->godot_variant_destroy(&global_classdb_array[75]);
    api10->godot_variant_destroy(&global_classdb_array[76]);
    api10->godot_variant_destroy(&global_classdb_array[77]);
    api10->godot_variant_destroy(&global_classdb_array[78]);
    api10->godot_variant_destroy(&global_classdb_array[79]);
    api10->godot_variant_destroy(&global_classdb_array[80]);
    api10->godot_variant_destroy(&global_classdb_array[81]);
    api10->godot_variant_destroy(&global_classdb_array[82]);
    api10->godot_variant_destroy(&global_classdb_array[83]);
    api10->godot_variant_destroy(&global_classdb_array[84]);
    api10->godot_variant_destroy(&global_classdb_array[85]);
    api10->godot_variant_destroy(&global_classdb_array[86]);
    api10->godot_variant_destroy(&global_classdb_array[87]);
    api10->godot_variant_destroy(&global_classdb_array[88]);
    api10->godot_variant_destroy(&global_classdb_array[89]);
    api10->godot_variant_destroy(&global_classdb_array[90]);
    api10->godot_variant_destroy(&global_classdb_array[91]);
    api10->godot_variant_destroy(&global_classdb_array[92]);
    api10->godot_variant_destroy(&global_classdb_array[93]);
    api10->godot_variant_destroy(&global_classdb_array[94]);
    api10->godot_variant_destroy(&global_classdb_array[95]);
    api10->godot_variant_destroy(&global_classdb_array[96]);
    api10->godot_variant_destroy(&global_classdb_array[97]);
    api10->godot_variant_destroy(&global_classdb_array[98]);
    api10->godot_variant_destroy(&global_classdb_array[99]);
    api10->godot_variant_destroy(&global_classdb_array[100]);
    api10->godot_variant_destroy(&global_classdb_array[101]);
    api10->godot_variant_destroy(&global_classdb_array[102]);
    api10->godot_variant_destroy(&global_classdb_array[103]);
    api10->godot_variant_destroy(&global_classdb_array[104]);
    api10->godot_variant_destroy(&global_classdb_array[105]);
    api10->godot_variant_destroy(&global_classdb_array[106]);
    api10->godot_variant_destroy(&global_classdb_array[107]);
    api10->godot_variant_destroy(&global_classdb_array[108]);
    api10->godot_variant_destroy(&global_classdb_array[109]);
    api10->godot_variant_destroy(&global_classdb_array[110]);
    api10->godot_variant_destroy(&global_classdb_array[111]);
    api10->godot_variant_destroy(&global_classdb_array[112]);
    api10->godot_variant_destroy(&global_classdb_array[113]);
    api10->godot_variant_destroy(&global_classdb_array[114]);
    api10->godot_variant_destroy(&global_classdb_array[115]);
    api10->godot_variant_destroy(&global_classdb_array[116]);
    api10->godot_variant_destroy(&global_classdb_array[117]);
    api10->godot_variant_destroy(&global_classdb_array[118]);
    api10->godot_variant_destroy(&global_classdb_array[119]);
    api10->godot_variant_destroy(&global_classdb_array[120]);
    api10->godot_variant_destroy(&global_classdb_array[121]);
    api10->godot_variant_destroy(&global_classdb_array[122]);
    api10->godot_variant_destroy(&global_classdb_array[123]);
    api10->godot_variant_destroy(&global_classdb_array[124]);
    api10->godot_variant_destroy(&global_classdb_array[125]);
    api10->godot_variant_destroy(&global_classdb_array[126]);
    api10->godot_variant_destroy(&global_classdb_array[127]);
    api10->godot_variant_destroy(&global_classdb_array[128]);
    api10->godot_variant_destroy(&global_classdb_array[129]);
    api10->godot_variant_destroy(&global_classdb_array[130]);
    api10->godot_variant_destroy(&global_classdb_array[131]);
    api10->godot_variant_destroy(&global_classdb_array[132]);
    api10->godot_variant_destroy(&global_classdb_array[133]);
    api10->godot_variant_destroy(&global_classdb_array[134]);
    api10->godot_variant_destroy(&global_classdb_array[135]);
    api10->godot_variant_destroy(&global_classdb_array[136]);
    api10->godot_variant_destroy(&global_classdb_array[137]);
    api10->godot_variant_destroy(&global_classdb_array[138]);
    api10->godot_variant_destroy(&global_classdb_array[139]);
    api10->godot_variant_destroy(&global_classdb_array[140]);
    api10->godot_variant_destroy(&global_classdb_array[141]);
    api10->godot_variant_destroy(&global_classdb_array[142]);
    api10->godot_variant_destroy(&global_classdb_array[143]);
    api10->godot_variant_destroy(&global_classdb_array[144]);
    api10->godot_variant_destroy(&global_classdb_array[145]);
    api10->godot_variant_destroy(&global_classdb_array[146]);
    api10->godot_variant_destroy(&global_classdb_array[147]);
    api10->godot_variant_destroy(&global_classdb_array[148]);
    api10->godot_variant_destroy(&global_classdb_array[149]);
    api10->godot_variant_destroy(&global_classdb_array[150]);
    api10->godot_variant_destroy(&global_classdb_array[151]);
    api10->godot_variant_destroy(&global_classdb_array[152]);
    api10->godot_variant_destroy(&global_classdb_array[153]);
    api10->godot_variant_destroy(&global_classdb_array[154]);
    api10->godot_variant_destroy(&global_classdb_array[155]);
    api10->godot_variant_destroy(&global_classdb_array[156]);
    api10->godot_variant_destroy(&global_classdb_array[157]);
    api10->godot_variant_destroy(&global_classdb_array[158]);
    api10->godot_variant_destroy(&global_classdb_array[159]);
    api10->godot_variant_destroy(&global_classdb_array[160]);
    api10->godot_variant_destroy(&global_classdb_array[161]);
    api10->godot_variant_destroy(&global_classdb_array[162]);
    api10->godot_variant_destroy(&global_classdb_array[163]);
    api10->godot_variant_destroy(&global_classdb_array[164]);
    api10->godot_variant_destroy(&global_classdb_array[165]);
    api10->godot_variant_destroy(&global_classdb_array[166]);
    api10->godot_variant_destroy(&global_classdb_array[167]);
    api10->godot_variant_destroy(&global_classdb_array[168]);
    api10->godot_variant_destroy(&global_classdb_array[169]);
    api10->godot_variant_destroy(&global_classdb_array[170]);
    api10->godot_variant_destroy(&global_classdb_array[171]);
    api10->godot_variant_destroy(&global_classdb_array[172]);
    api10->godot_variant_destroy(&global_classdb_array[173]);
    api10->godot_variant_destroy(&global_classdb_array[174]);
    api10->godot_variant_destroy(&global_classdb_array[175]);
    api10->godot_variant_destroy(&global_classdb_array[176]);
    api10->godot_variant_destroy(&global_classdb_array[177]);
    api10->godot_variant_destroy(&global_classdb_array[178]);
    api10->godot_variant_destroy(&global_classdb_array[179]);
    api10->godot_variant_destroy(&global_classdb_array[180]);
    api10->godot_variant_destroy(&global_classdb_array[181]);
    api10->godot_variant_destroy(&global_classdb_array[182]);
    api10->godot_variant_destroy(&global_classdb_array[183]);
    api10->godot_variant_destroy(&global_classdb_array[184]);
    api10->godot_variant_destroy(&global_classdb_array[185]);
    api10->godot_variant_destroy(&global_classdb_array[186]);
    api10->godot_variant_destroy(&global_classdb_array[187]);
    api10->godot_variant_destroy(&global_classdb_array[188]);
    api10->godot_variant_destroy(&global_classdb_array[189]);
    api10->godot_variant_destroy(&global_classdb_array[190]);
    api10->godot_variant_destroy(&global_classdb_array[191]);
    api10->godot_variant_destroy(&global_classdb_array[192]);
    api10->godot_variant_destroy(&global_classdb_array[193]);
    api10->godot_variant_destroy(&global_classdb_array[194]);
    api10->godot_variant_destroy(&global_classdb_array[195]);
    api10->godot_variant_destroy(&global_classdb_array[196]);
    api10->godot_variant_destroy(&global_classdb_array[197]);
    api10->godot_variant_destroy(&global_classdb_array[198]);
    api10->godot_variant_destroy(&global_classdb_array[199]);
    api10->godot_variant_destroy(&global_classdb_array[200]);
    api10->godot_variant_destroy(&global_classdb_array[201]);
    api10->godot_variant_destroy(&global_classdb_array[202]);
    api10->godot_variant_destroy(&global_classdb_array[203]);
    api10->godot_variant_destroy(&global_classdb_array[204]);
    api10->godot_variant_destroy(&global_classdb_array[205]);
    api10->godot_variant_destroy(&global_classdb_array[206]);
    api10->godot_variant_destroy(&global_classdb_array[207]);
    api10->godot_variant_destroy(&global_classdb_array[208]);
    api10->godot_variant_destroy(&global_classdb_array[209]);
    api10->godot_variant_destroy(&global_classdb_array[210]);
    api10->godot_variant_destroy(&global_classdb_array[211]);
    api10->godot_variant_destroy(&global_classdb_array[212]);
    api10->godot_variant_destroy(&global_classdb_array[213]);
    api10->godot_variant_destroy(&global_classdb_array[214]);
    api10->godot_variant_destroy(&global_classdb_array[215]);
    api10->godot_variant_destroy(&global_classdb_array[216]);
    api10->godot_variant_destroy(&global_classdb_array[217]);
    api10->godot_variant_destroy(&global_classdb_array[218]);
    api10->godot_variant_destroy(&global_classdb_array[219]);
    api10->godot_variant_destroy(&global_classdb_array[220]);
    api10->godot_variant_destroy(&global_classdb_array[221]);
    api10->godot_variant_destroy(&global_classdb_array[222]);
    api10->godot_variant_destroy(&global_classdb_array[223]);
    api10->godot_variant_destroy(&global_classdb_array[224]);
    api10->godot_variant_destroy(&global_classdb_array[225]);
    api10->godot_variant_destroy(&global_classdb_array[226]);
    api10->godot_variant_destroy(&global_classdb_array[227]);
    api10->godot_variant_destroy(&global_classdb_array[228]);
    api10->godot_variant_destroy(&global_classdb_array[229]);
    api10->godot_variant_destroy(&global_classdb_array[230]);
    api10->godot_variant_destroy(&global_classdb_array[231]);
    api10->godot_variant_destroy(&global_classdb_array[232]);
    api10->godot_variant_destroy(&global_classdb_array[233]);
    api10->godot_variant_destroy(&global_classdb_array[234]);
    api10->godot_variant_destroy(&global_classdb_array[235]);
    api10->godot_variant_destroy(&global_classdb_array[236]);
    api10->godot_variant_destroy(&global_classdb_array[237]);
    api10->godot_variant_destroy(&global_classdb_array[238]);
    api10->godot_variant_destroy(&global_classdb_array[239]);
    api10->godot_variant_destroy(&global_classdb_array[240]);
    api10->godot_variant_destroy(&global_classdb_array[241]);
    api10->godot_variant_destroy(&global_classdb_array[242]);
    api10->godot_variant_destroy(&global_classdb_array[243]);
    api10->godot_variant_destroy(&global_classdb_array[244]);
    api10->godot_variant_destroy(&global_classdb_array[245]);
    api10->godot_variant_destroy(&global_classdb_array[246]);
    api10->godot_variant_destroy(&global_classdb_array[247]);
    api10->godot_variant_destroy(&global_classdb_array[248]);
    api10->godot_variant_destroy(&global_classdb_array[249]);
    api10->godot_variant_destroy(&global_classdb_array[250]);
    api10->godot_variant_destroy(&global_classdb_array[251]);
    api10->godot_variant_destroy(&global_classdb_array[252]);
    api10->godot_variant_destroy(&global_classdb_array[253]);
    api10->godot_variant_destroy(&global_classdb_array[254]);
    api10->godot_variant_destroy(&global_classdb_array[255]);
    api10->godot_variant_destroy(&global_classdb_array[256]);
    api10->godot_variant_destroy(&global_classdb_array[257]);
    api10->godot_variant_destroy(&global_classdb_array[258]);
    api10->godot_variant_destroy(&global_classdb_array[259]);
    api10->godot_variant_destroy(&global_classdb_array[260]);
    api10->godot_variant_destroy(&global_classdb_array[261]);
    api10->godot_variant_destroy(&global_classdb_array[262]);
    api10->godot_variant_destroy(&global_classdb_array[263]);
    api10->godot_variant_destroy(&global_classdb_array[264]);
    api10->godot_variant_destroy(&global_classdb_array[265]);
    api10->godot_variant_destroy(&global_classdb_array[266]);
    api10->godot_variant_destroy(&global_classdb_array[267]);
    api10->godot_variant_destroy(&global_classdb_array[268]);
    api10->godot_variant_destroy(&global_classdb_array[269]);
    api10->godot_variant_destroy(&global_classdb_array[270]);
    api10->godot_variant_destroy(&global_classdb_array[271]);
    api10->godot_variant_destroy(&global_classdb_array[272]);
    api10->godot_variant_destroy(&global_classdb_array[273]);
    api10->godot_variant_destroy(&global_classdb_array[274]);
    api10->godot_variant_destroy(&global_classdb_array[275]);
    api10->godot_variant_destroy(&global_classdb_array[276]);
    api10->godot_variant_destroy(&global_classdb_array[277]);
    api10->godot_variant_destroy(&global_classdb_array[278]);
    api10->godot_variant_destroy(&global_classdb_array[279]);
    api10->godot_variant_destroy(&global_classdb_array[280]);
    api10->godot_variant_destroy(&global_classdb_array[281]);
    api10->godot_variant_destroy(&global_classdb_array[282]);
    api10->godot_variant_destroy(&global_classdb_array[283]);
    api10->godot_variant_destroy(&global_classdb_array[284]);
    api10->godot_variant_destroy(&global_classdb_array[285]);
    api10->godot_variant_destroy(&global_classdb_array[286]);
    api10->godot_variant_destroy(&global_classdb_array[287]);
    api10->godot_variant_destroy(&global_classdb_array[288]);
    api10->godot_variant_destroy(&global_classdb_array[289]);
    api10->godot_variant_destroy(&global_classdb_array[290]);
    api10->godot_variant_destroy(&global_classdb_array[291]);
    api10->godot_variant_destroy(&global_classdb_array[292]);
    api10->godot_variant_destroy(&global_classdb_array[293]);
    api10->godot_variant_destroy(&global_classdb_array[294]);
    api10->godot_variant_destroy(&global_classdb_array[295]);
    api10->godot_variant_destroy(&global_classdb_array[296]);
    api10->godot_variant_destroy(&global_classdb_array[297]);
    api10->godot_variant_destroy(&global_classdb_array[298]);
    api10->godot_variant_destroy(&global_classdb_array[299]);
    api10->godot_variant_destroy(&global_classdb_array[300]);
    api10->godot_variant_destroy(&global_classdb_array[301]);
    api10->godot_variant_destroy(&global_classdb_array[302]);
    api10->godot_variant_destroy(&global_classdb_array[303]);
    api10->godot_variant_destroy(&global_classdb_array[304]);
    api10->godot_variant_destroy(&global_classdb_array[305]);
    api10->godot_variant_destroy(&global_classdb_array[306]);
    api10->godot_variant_destroy(&global_classdb_array[307]);
    api10->godot_variant_destroy(&global_classdb_array[308]);
    api10->godot_variant_destroy(&global_classdb_array[309]);
    api10->godot_variant_destroy(&global_classdb_array[310]);
    api10->godot_variant_destroy(&global_classdb_array[311]);
    api10->godot_variant_destroy(&global_classdb_array[312]);
    api10->godot_variant_destroy(&global_classdb_array[313]);
    api10->godot_variant_destroy(&global_classdb_array[314]);
    api10->godot_variant_destroy(&global_classdb_array[315]);
    api10->godot_variant_destroy(&global_classdb_array[316]);
    api10->godot_variant_destroy(&global_classdb_array[317]);
    api10->godot_variant_destroy(&global_classdb_array[318]);
    api10->godot_variant_destroy(&global_classdb_array[319]);
    api10->godot_variant_destroy(&global_classdb_array[320]);
    api10->godot_variant_destroy(&global_classdb_array[321]);
    api10->godot_variant_destroy(&global_classdb_array[322]);
    api10->godot_variant_destroy(&global_classdb_array[323]);
    api10->godot_variant_destroy(&global_classdb_array[324]);
    api10->godot_variant_destroy(&global_classdb_array[325]);
    api10->godot_variant_destroy(&global_classdb_array[326]);
    api10->godot_variant_destroy(&global_classdb_array[327]);
    api10->godot_variant_destroy(&global_classdb_array[328]);
    api10->godot_variant_destroy(&global_classdb_array[329]);
    api10->godot_variant_destroy(&global_classdb_array[330]);
    api10->godot_variant_destroy(&global_classdb_array[331]);
    api10->godot_variant_destroy(&global_classdb_array[332]);
    api10->godot_variant_destroy(&global_classdb_array[333]);
    api10->godot_variant_destroy(&global_classdb_array[334]);
    api10->godot_variant_destroy(&global_classdb_array[335]);
    api10->godot_variant_destroy(&global_classdb_array[336]);
    api10->godot_variant_destroy(&global_classdb_array[337]);
    api10->godot_variant_destroy(&global_classdb_array[338]);
    api10->godot_variant_destroy(&global_classdb_array[339]);
    api10->godot_variant_destroy(&global_classdb_array[340]);
    api10->godot_variant_destroy(&global_classdb_array[341]);
    api10->godot_variant_destroy(&global_classdb_array[342]);
    api10->godot_variant_destroy(&global_classdb_array[343]);
    api10->godot_variant_destroy(&global_classdb_array[344]);
    api10->godot_variant_destroy(&global_classdb_array[345]);
    api10->godot_variant_destroy(&global_classdb_array[346]);
    api10->godot_variant_destroy(&global_classdb_array[347]);
    api10->godot_variant_destroy(&global_classdb_array[348]);
    api10->godot_variant_destroy(&global_classdb_array[349]);
    api10->godot_variant_destroy(&global_classdb_array[350]);
    api10->godot_variant_destroy(&global_classdb_array[351]);
    api10->godot_variant_destroy(&global_classdb_array[352]);
    api10->godot_variant_destroy(&global_classdb_array[353]);
    api10->godot_variant_destroy(&global_classdb_array[354]);
    api10->godot_variant_destroy(&global_classdb_array[355]);
    api10->godot_variant_destroy(&global_classdb_array[356]);
    api10->godot_variant_destroy(&global_classdb_array[357]);
    api10->godot_variant_destroy(&global_classdb_array[358]);
    api10->godot_variant_destroy(&global_classdb_array[359]);
    api10->godot_variant_destroy(&global_classdb_array[360]);
    api10->godot_variant_destroy(&global_classdb_array[361]);
    api10->godot_variant_destroy(&global_classdb_array[362]);
    api10->godot_variant_destroy(&global_classdb_array[363]);
    api10->godot_variant_destroy(&global_classdb_array[364]);
    api10->godot_variant_destroy(&global_classdb_array[365]);
    api10->godot_variant_destroy(&global_classdb_array[366]);
    api10->godot_variant_destroy(&global_classdb_array[367]);
    api10->godot_variant_destroy(&global_classdb_array[368]);
    api10->godot_variant_destroy(&global_classdb_array[369]);
    api10->godot_variant_destroy(&global_classdb_array[370]);
    api10->godot_variant_destroy(&global_classdb_array[371]);
    api10->godot_variant_destroy(&global_classdb_array[372]);
    api10->godot_variant_destroy(&global_classdb_array[373]);
    api10->godot_variant_destroy(&global_classdb_array[374]);
    api10->godot_variant_destroy(&global_classdb_array[375]);
    api10->godot_variant_destroy(&global_classdb_array[376]);
    api10->godot_variant_destroy(&global_classdb_array[377]);
    api10->godot_variant_destroy(&global_classdb_array[378]);
    api10->godot_variant_destroy(&global_classdb_array[379]);
    api10->godot_variant_destroy(&global_classdb_array[380]);
    api10->godot_variant_destroy(&global_classdb_array[381]);
    api10->godot_variant_destroy(&global_classdb_array[382]);
    api10->godot_variant_destroy(&global_classdb_array[383]);
    api10->godot_variant_destroy(&global_classdb_array[384]);
    api10->godot_variant_destroy(&global_classdb_array[385]);
    api10->godot_variant_destroy(&global_classdb_array[386]);
    api10->godot_variant_destroy(&global_classdb_array[387]);
    api10->godot_variant_destroy(&global_classdb_array[388]);
    api10->godot_variant_destroy(&global_classdb_array[389]);
    api10->godot_variant_destroy(&global_classdb_array[390]);
    api10->godot_variant_destroy(&global_classdb_array[391]);
    api10->godot_variant_destroy(&global_classdb_array[392]);
    api10->godot_variant_destroy(&global_classdb_array[393]);
    api10->godot_variant_destroy(&global_classdb_array[394]);
    api10->godot_variant_destroy(&global_classdb_array[395]);
    api10->godot_variant_destroy(&global_classdb_array[396]);
    api10->godot_variant_destroy(&global_classdb_array[397]);
    api10->godot_variant_destroy(&global_classdb_array[398]);
    api10->godot_variant_destroy(&global_classdb_array[399]);
    api10->godot_variant_destroy(&global_classdb_array[400]);
    api10->godot_variant_destroy(&global_classdb_array[401]);
    api10->godot_variant_destroy(&global_classdb_array[402]);
    api10->godot_variant_destroy(&global_classdb_array[403]);
    api10->godot_variant_destroy(&global_classdb_array[404]);
    api10->godot_variant_destroy(&global_classdb_array[405]);
    api10->godot_variant_destroy(&global_classdb_array[406]);
    api10->godot_variant_destroy(&global_classdb_array[407]);
    api10->godot_variant_destroy(&global_classdb_array[408]);
    api10->godot_variant_destroy(&global_classdb_array[409]);
    api10->godot_variant_destroy(&global_classdb_array[410]);
    api10->godot_variant_destroy(&global_classdb_array[411]);
    api10->godot_variant_destroy(&global_classdb_array[412]);
    api10->godot_variant_destroy(&global_classdb_array[413]);
    api10->godot_variant_destroy(&global_classdb_array[414]);
    api10->godot_variant_destroy(&global_classdb_array[415]);
    api10->godot_variant_destroy(&global_classdb_array[416]);
    api10->godot_variant_destroy(&global_classdb_array[417]);
    api10->godot_variant_destroy(&global_classdb_array[418]);
    api10->godot_variant_destroy(&global_classdb_array[419]);
    api10->godot_variant_destroy(&global_classdb_array[420]);
    api10->godot_variant_destroy(&global_classdb_array[421]);
    api10->godot_variant_destroy(&global_classdb_array[422]);
    api10->godot_variant_destroy(&global_classdb_array[423]);
    api10->godot_variant_destroy(&global_classdb_array[424]);
    api10->godot_variant_destroy(&global_classdb_array[425]);
    api10->godot_variant_destroy(&global_classdb_array[426]);
    api10->godot_variant_destroy(&global_classdb_array[427]);
    api10->godot_variant_destroy(&global_classdb_array[428]);
    api10->godot_variant_destroy(&global_classdb_array[429]);
    api10->godot_variant_destroy(&global_classdb_array[430]);
    api10->godot_variant_destroy(&global_classdb_array[431]);
    api10->godot_variant_destroy(&global_classdb_array[432]);
    api10->godot_variant_destroy(&global_classdb_array[433]);
    api10->godot_variant_destroy(&global_classdb_array[434]);
    api10->godot_variant_destroy(&global_classdb_array[435]);
    api10->godot_variant_destroy(&global_classdb_array[436]);
    api10->godot_variant_destroy(&global_classdb_array[437]);
    api10->godot_variant_destroy(&global_classdb_array[438]);
    api10->godot_variant_destroy(&global_classdb_array[439]);
    api10->godot_variant_destroy(&global_classdb_array[440]);
    api10->godot_variant_destroy(&global_classdb_array[441]);
    api10->godot_variant_destroy(&global_classdb_array[442]);
    api10->godot_variant_destroy(&global_classdb_array[443]);
    api10->godot_variant_destroy(&global_classdb_array[444]);
    api10->godot_variant_destroy(&global_classdb_array[445]);
    api10->godot_variant_destroy(&global_classdb_array[446]);
    api10->godot_variant_destroy(&global_classdb_array[447]);
    api10->godot_variant_destroy(&global_classdb_array[448]);
    api10->godot_variant_destroy(&global_classdb_array[449]);
    api10->godot_variant_destroy(&global_classdb_array[450]);
    api10->godot_variant_destroy(&global_classdb_array[451]);
    api10->godot_variant_destroy(&global_classdb_array[452]);
    api10->godot_variant_destroy(&global_classdb_array[453]);
    api10->godot_variant_destroy(&global_classdb_array[454]);
    api10->godot_variant_destroy(&global_classdb_array[455]);
    api10->godot_variant_destroy(&global_classdb_array[456]);
    api10->godot_variant_destroy(&global_classdb_array[457]);
    api10->godot_variant_destroy(&global_classdb_array[458]);
    api10->godot_variant_destroy(&global_classdb_array[459]);
    api10->godot_variant_destroy(&global_classdb_array[460]);
    api10->godot_variant_destroy(&global_classdb_array[461]);
    api10->godot_variant_destroy(&global_classdb_array[462]);
    api10->godot_variant_destroy(&global_classdb_array[463]);
    api10->godot_variant_destroy(&global_classdb_array[464]);
    api10->godot_variant_destroy(&global_classdb_array[465]);
    api10->godot_variant_destroy(&global_classdb_array[466]);
    api10->godot_variant_destroy(&global_classdb_array[467]);
    api10->godot_variant_destroy(&global_classdb_array[468]);
    api10->godot_variant_destroy(&global_classdb_array[469]);
    api10->godot_variant_destroy(&global_classdb_array[470]);
    api10->godot_variant_destroy(&global_classdb_array[471]);
    api10->godot_variant_destroy(&global_classdb_array[472]);
    api10->godot_variant_destroy(&global_classdb_array[473]);
    api10->godot_variant_destroy(&global_classdb_array[474]);
    api10->godot_variant_destroy(&global_classdb_array[475]);
    api10->godot_variant_destroy(&global_classdb_array[476]);
    api10->godot_variant_destroy(&global_classdb_array[477]);
    api10->godot_variant_destroy(&global_classdb_array[478]);
    api10->godot_variant_destroy(&global_classdb_array[479]);
    api10->godot_variant_destroy(&global_classdb_array[480]);
    api10->godot_variant_destroy(&global_classdb_array[481]);
    api10->godot_variant_destroy(&global_classdb_array[482]);
    api10->godot_variant_destroy(&global_classdb_array[483]);
    api10->godot_variant_destroy(&global_classdb_array[484]);
    api10->godot_variant_destroy(&global_classdb_array[485]);
    api10->godot_variant_destroy(&global_classdb_array[486]);
    api10->godot_variant_destroy(&global_classdb_array[487]);
    api10->godot_variant_destroy(&global_classdb_array[488]);
    api10->godot_variant_destroy(&global_classdb_array[489]);
    api10->godot_variant_destroy(&global_classdb_array[490]);
    api10->godot_variant_destroy(&global_classdb_array[491]);
    api10->godot_variant_destroy(&global_classdb_array[492]);
    api10->godot_variant_destroy(&global_classdb_array[493]);
    api10->godot_variant_destroy(&global_classdb_array[494]);
    api10->godot_variant_destroy(&global_classdb_array[495]);
    api10->godot_variant_destroy(&global_classdb_array[496]);
    api10->godot_variant_destroy(&global_classdb_array[497]);
    api10->godot_variant_destroy(&global_classdb_array[498]);
    api10->godot_variant_destroy(&global_classdb_array[499]);
    api10->godot_variant_destroy(&global_classdb_array[500]);
    api10->godot_variant_destroy(&global_classdb_array[501]);
    api10->godot_variant_destroy(&global_classdb_array[502]);
    api10->godot_variant_destroy(&global_classdb_array[503]);
    api10->godot_variant_destroy(&global_classdb_array[504]);
    api10->godot_variant_destroy(&global_classdb_array[505]);
    api10->godot_variant_destroy(&global_classdb_array[506]);
    api10->godot_variant_destroy(&global_classdb_array[507]);
    api10->godot_variant_destroy(&global_classdb_array[508]);
    api10->godot_variant_destroy(&global_classdb_array[509]);
    api10->godot_variant_destroy(&global_classdb_array[510]);
    api10->godot_variant_destroy(&global_classdb_array[511]);
    api10->godot_variant_destroy(&global_classdb_array[512]);
    api10->godot_variant_destroy(&global_classdb_array[513]);
    api10->godot_variant_destroy(&global_classdb_array[514]);
    api10->godot_variant_destroy(&global_classdb_array[515]);
    api10->godot_variant_destroy(&global_classdb_array[516]);
    api10->godot_variant_destroy(&global_classdb_array[517]);
    api10->godot_variant_destroy(&global_classdb_array[518]);
    api10->godot_variant_destroy(&global_classdb_array[519]);
    api10->godot_variant_destroy(&global_classdb_array[520]);
    api10->godot_variant_destroy(&global_classdb_array[521]);
    api10->godot_variant_destroy(&global_classdb_array[522]);
    api10->godot_variant_destroy(&global_classdb_array[523]);
    api10->godot_variant_destroy(&global_classdb_array[524]);
    api10->godot_variant_destroy(&global_classdb_array[525]);
    api10->godot_variant_destroy(&global_classdb_array[526]);
    api10->godot_variant_destroy(&global_classdb_array[527]);
    api10->godot_variant_destroy(&global_classdb_array[528]);
    api10->godot_variant_destroy(&global_classdb_array[529]);
    api10->godot_variant_destroy(&global_classdb_array[530]);
    api10->godot_variant_destroy(&global_classdb_array[531]);
    api10->godot_variant_destroy(&global_classdb_array[532]);
    api10->godot_variant_destroy(&global_classdb_array[533]);
    api10->godot_variant_destroy(&global_classdb_array[534]);
    api10->godot_variant_destroy(&global_classdb_array[535]);
    api10->godot_variant_destroy(&global_classdb_array[536]);
    api10->godot_variant_destroy(&global_classdb_array[537]);
    api10->godot_variant_destroy(&global_classdb_array[538]);
    api10->godot_variant_destroy(&global_classdb_array[539]);
    api10->godot_variant_destroy(&global_classdb_array[540]);
    api10->godot_variant_destroy(&global_classdb_array[541]);
    api10->godot_variant_destroy(&global_classdb_array[542]);
    api10->godot_variant_destroy(&global_classdb_array[543]);
    api10->godot_variant_destroy(&global_classdb_array[544]);
    api10->godot_variant_destroy(&global_classdb_array[545]);
    api10->godot_variant_destroy(&global_classdb_array[546]);
    api10->godot_variant_destroy(&global_classdb_array[547]);
    api10->godot_variant_destroy(&global_classdb_array[548]);
    api10->godot_variant_destroy(&global_classdb_array[549]);
    api10->godot_variant_destroy(&global_classdb_array[550]);
    api10->godot_variant_destroy(&global_classdb_array[551]);
    api10->godot_variant_destroy(&global_classdb_array[552]);
    api10->godot_variant_destroy(&global_classdb_array[553]);
    api10->godot_variant_destroy(&global_classdb_array[554]);
    api10->godot_variant_destroy(&global_classdb_array[555]);
    api10->godot_variant_destroy(&global_classdb_array[556]);
    api10->godot_variant_destroy(&global_classdb_array[557]);
    api10->godot_variant_destroy(&global_classdb_array[558]);
    api10->godot_variant_destroy(&global_classdb_array[559]);
    api10->godot_variant_destroy(&global_classdb_array[560]);
    api10->godot_variant_destroy(&global_classdb_array[561]);
    api10->godot_variant_destroy(&global_classdb_array[562]);
    api10->godot_variant_destroy(&global_classdb_array[563]);
    api10->godot_variant_destroy(&global_classdb_array[564]);
    api10->godot_variant_destroy(&global_classdb_array[565]);
    api10->godot_variant_destroy(&global_classdb_array[566]);
    api10->godot_variant_destroy(&global_classdb_array[567]);
    api10->godot_variant_destroy(&global_classdb_array[568]);
    api10->godot_variant_destroy(&global_classdb_array[569]);
    api10->godot_variant_destroy(&global_classdb_array[570]);
    api10->godot_variant_destroy(&global_classdb_array[571]);
    api10->godot_variant_destroy(&global_classdb_array[572]);
    api10->godot_variant_destroy(&global_classdb_array[573]);
    api10->godot_variant_destroy(&global_classdb_array[574]);
    api10->godot_variant_destroy(&global_classdb_array[575]);
    api10->godot_variant_destroy(&global_classdb_array[576]);
    api10->godot_variant_destroy(&global_classdb_array[577]);
    api10->godot_variant_destroy(&global_classdb_array[578]);
    api10->godot_variant_destroy(&global_classdb_array[579]);
    api10->godot_variant_destroy(&global_classdb_array[580]);
    api10->godot_variant_destroy(&global_classdb_array[581]);
    api10->godot_variant_destroy(&global_classdb_array[582]);
    api10->godot_variant_destroy(&global_classdb_array[583]);
    api10->godot_variant_destroy(&global_classdb_array[584]);
    api10->godot_variant_destroy(&global_classdb_array[585]);
    api10->godot_variant_destroy(&global_classdb_array[586]);
    api10->godot_variant_destroy(&global_singletons_array[0]);
    api10->godot_variant_destroy(&global_singletons_array[1]);
    api10->godot_variant_destroy(&global_singletons_array[2]);
    api10->godot_variant_destroy(&global_singletons_array[3]);
    api10->godot_variant_destroy(&global_singletons_array[4]);
    api10->godot_variant_destroy(&global_singletons_array[5]);
    api10->godot_variant_destroy(&global_singletons_array[6]);
    api10->godot_variant_destroy(&global_singletons_array[7]);
    api10->godot_variant_destroy(&global_singletons_array[8]);
    api10->godot_variant_destroy(&global_singletons_array[9]);
    api10->godot_variant_destroy(&global_singletons_array[10]);
    api10->godot_variant_destroy(&global_singletons_array[11]);
    api10->godot_variant_destroy(&global_singletons_array[12]);
    api10->godot_variant_destroy(&global_singletons_array[13]);
    api10->godot_variant_destroy(&global_singletons_array[14]);
    api10->godot_variant_destroy(&global_singletons_array[15]);
    api10->godot_variant_destroy(&global_singletons_array[16]);
    api10->godot_variant_destroy(&global_singletons_array[17]);
    api10->godot_variant_destroy(&global_singletons_array[18]);
    api10->godot_variant_destroy(&global_singletons_array[19]);
    api10->godot_variant_destroy(&global_singletons_array[20]);
}
void GDN_EXPORT godot_nativescript_init(void *p_handle)
{
    //printf("Enter: godot_nativescript_init\n");

    {
        //printf("  Register class: Class_1\n");
        godot_instance_create_func create = {NULL, NULL, NULL};
        create.create_func = Class_1_ctor;
        godot_instance_destroy_func destroy = {NULL, NULL, NULL};
        destroy.destroy_func = Class_1_dtor;
        nativescript10->godot_nativescript_register_class(p_handle, "Class_1", "RigidBody", create, destroy);
    }
    {
        //printf("  Register method: __gd2c_is_class_instanceof\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &__gd2c_is_class_instanceof;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "__gd2c_is_class_instanceof", attributes, method);
    }
    {
        //printf("  Register method: Class_1__init_func\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_1__init_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "_init", attributes, method);
    }
    {
        //printf("  Register member: disabled\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_1_set_disabled;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_1_get_disabled;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_1", "disabled", &attributes, setter, getter);
    }
    Class_1_vtable_init();
    {
        //printf("  Register class: Class_3\n");
        godot_instance_create_func create = {NULL, NULL, NULL};
        create.create_func = Class_3_ctor;
        godot_instance_destroy_func destroy = {NULL, NULL, NULL};
        destroy.destroy_func = Class_3_dtor;
        nativescript10->godot_nativescript_register_class(p_handle, "Class_3", "Area", create, destroy);
    }
    {
        //printf("  Register method: __gd2c_is_class_instanceof\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &__gd2c_is_class_instanceof;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_3", "__gd2c_is_class_instanceof", attributes, method);
    }
    {
        //printf("  Register method: Class_3__init_func\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_3__init_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_3", "_init", attributes, method);
    }
    {
        //printf("  Register method: Class_3__on_coin_body_enter_func\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_3__on_coin_body_enter_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_3", "_on_coin_body_enter", attributes, method);
    }
    {
        //printf("  Register member: taken\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_3_set_taken;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_3_get_taken;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_3", "taken", &attributes, setter, getter);
    }
    Class_3_vtable_init();
    {
        //printf("  Register class: Class_5\n");
        godot_instance_create_func create = {NULL, NULL, NULL};
        create.create_func = Class_5_ctor;
        godot_instance_destroy_func destroy = {NULL, NULL, NULL};
        destroy.destroy_func = Class_5_dtor;
        nativescript10->godot_nativescript_register_class(p_handle, "Class_5", "RigidBody", create, destroy);
    }
    {
        //printf("  Register method: __gd2c_is_class_instanceof\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &__gd2c_is_class_instanceof;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_5", "__gd2c_is_class_instanceof", attributes, method);
    }
    {
        //printf("  Register method: Class_5__init_func\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_5__init_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_5", "_init", attributes, method);
    }
    {
        //printf("  Register method: Class_5__die_func\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_5__die_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_5", "_die", attributes, method);
    }
    {
        //printf("  Register method: Class_5__integrate_forces_func\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_5__integrate_forces_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_5", "_integrate_forces", attributes, method);
    }
    {
        //printf("  Register member: accel\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_5_set_accel;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_5_get_accel;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_5", "accel", &attributes, setter, getter);
    }
    {
        //printf("  Register member: deaccel\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_5_set_deaccel;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_5_get_deaccel;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_5", "deaccel", &attributes, setter, getter);
    }
    {
        //printf("  Register member: prev_advance\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_5_set_prev_advance;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_5_get_prev_advance;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_5", "prev_advance", &attributes, setter, getter);
    }
    {
        //printf("  Register member: max_speed\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_5_set_max_speed;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_5_get_max_speed;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_5", "max_speed", &attributes, setter, getter);
    }
    {
        //printf("  Register member: rot_speed\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_5_set_rot_speed;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_5_get_rot_speed;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_5", "rot_speed", &attributes, setter, getter);
    }
    {
        //printf("  Register member: dying\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_5_set_dying;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_5_get_dying;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_5", "dying", &attributes, setter, getter);
    }
    {
        //printf("  Register member: rot_dir\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_5_set_rot_dir;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_5_get_rot_dir;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_5", "rot_dir", &attributes, setter, getter);
    }
    Class_5_vtable_init();
    {
        //printf("  Register class: Class_7\n");
        godot_instance_create_func create = {NULL, NULL, NULL};
        create.create_func = Class_7_ctor;
        godot_instance_destroy_func destroy = {NULL, NULL, NULL};
        destroy.destroy_func = Class_7_dtor;
        nativescript10->godot_nativescript_register_class(p_handle, "Class_7", "Camera", create, destroy);
    }
    {
        //printf("  Register method: __gd2c_is_class_instanceof\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &__gd2c_is_class_instanceof;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_7", "__gd2c_is_class_instanceof", attributes, method);
    }
    {
        //printf("  Register method: Class_7__ready_func\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_7__ready_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_7", "_ready", attributes, method);
    }
    {
        //printf("  Register method: Class_7__physics_process_func\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_7__physics_process_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_7", "_physics_process", attributes, method);
    }
    {
        //printf("  Register method: Class_7__init_func\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_7__init_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_7", "_init", attributes, method);
    }
    {
        //printf("  Register member: min_height\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_7_set_min_height;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_7_get_min_height;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_7", "min_height", &attributes, setter, getter);
    }
    {
        //printf("  Register member: max_height\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_7_set_max_height;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_7_get_max_height;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_7", "max_height", &attributes, setter, getter);
    }
    {
        //printf("  Register member: max_distance\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_7_set_max_distance;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_7_get_max_distance;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_7", "max_distance", &attributes, setter, getter);
    }
    {
        //printf("  Register member: min_distance\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_7_set_min_distance;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_7_get_min_distance;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_7", "min_distance", &attributes, setter, getter);
    }
    {
        //printf("  Register member: autoturn_ray_aperture\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_7_set_autoturn_ray_aperture;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_7_get_autoturn_ray_aperture;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_7", "autoturn_ray_aperture", &attributes, setter, getter);
    }
    {
        //printf("  Register member: angle_v_adjust\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_7_set_angle_v_adjust;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_7_get_angle_v_adjust;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_7", "angle_v_adjust", &attributes, setter, getter);
    }
    {
        //printf("  Register member: autoturn_speed\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_7_set_autoturn_speed;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_7_get_autoturn_speed;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_7", "autoturn_speed", &attributes, setter, getter);
    }
    {
        //printf("  Register member: collision_exception\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_7_set_collision_exception;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_7_get_collision_exception;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_7", "collision_exception", &attributes, setter, getter);
    }
    Class_7_vtable_init();
    {
        //printf("  Register class: Class_9\n");
        godot_instance_create_func create = {NULL, NULL, NULL};
        create.create_func = Class_9_ctor;
        godot_instance_destroy_func destroy = {NULL, NULL, NULL};
        destroy.destroy_func = Class_9_dtor;
        nativescript10->godot_nativescript_register_class(p_handle, "Class_9", "KinematicBody", create, destroy);
    }
    {
        //printf("  Register method: __gd2c_is_class_instanceof\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &__gd2c_is_class_instanceof;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_9", "__gd2c_is_class_instanceof", attributes, method);
    }
    {
        //printf("  Register method: Class_9__ready_func\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_9__ready_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_9", "_ready", attributes, method);
    }
    {
        //printf("  Register method: Class_9__physics_process_func\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_9__physics_process_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_9", "_physics_process", attributes, method);
    }
    {
        //printf("  Register method: Class_9__init_func\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_9__init_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_9", "_init", attributes, method);
    }
    {
        //printf("  Register method: Class_9_adjust_facing_func\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_9_adjust_facing_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_9", "adjust_facing", attributes, method);
    }
    {
        //printf("  Register member: linear_velocity\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_9_set_linear_velocity;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_9_get_linear_velocity;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_9", "linear_velocity", &attributes, setter, getter);
    }
    {
        //printf("  Register member: accel\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_9_set_accel;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_9_get_accel;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_9", "accel", &attributes, setter, getter);
    }
    {
        //printf("  Register member: shoot_blend\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_9_set_shoot_blend;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_9_get_shoot_blend;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_9", "shoot_blend", &attributes, setter, getter);
    }
    {
        //printf("  Register member: facing_dir\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_9_set_facing_dir;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_9_get_facing_dir;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_9", "facing_dir", &attributes, setter, getter);
    }
    {
        //printf("  Register member: prev_shoot\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_9_set_prev_shoot;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_9_get_prev_shoot;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_9", "prev_shoot", &attributes, setter, getter);
    }
    {
        //printf("  Register member: sharp_turn_threshold\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_9_set_sharp_turn_threshold;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_9_get_sharp_turn_threshold;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_9", "sharp_turn_threshold", &attributes, setter, getter);
    }
    {
        //printf("  Register member: jumping\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_9_set_jumping;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_9_get_jumping;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_9", "jumping", &attributes, setter, getter);
    }
    {
        //printf("  Register member: turn_speed\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_9_set_turn_speed;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_9_get_turn_speed;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_9", "turn_speed", &attributes, setter, getter);
    }
    {
        //printf("  Register member: movement_dir\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_9_set_movement_dir;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_9_get_movement_dir;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_9", "movement_dir", &attributes, setter, getter);
    }
    {
        //printf("  Register member: max_speed\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_9_set_max_speed;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_9_get_max_speed;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_9", "max_speed", &attributes, setter, getter);
    }
    {
        //printf("  Register member: keep_jump_inertia\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_9_set_keep_jump_inertia;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_9_get_keep_jump_inertia;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_9", "keep_jump_inertia", &attributes, setter, getter);
    }
    {
        //printf("  Register member: air_idle_deaccel\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_9_set_air_idle_deaccel;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_9_get_air_idle_deaccel;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_9", "air_idle_deaccel", &attributes, setter, getter);
    }
    {
        //printf("  Register member: deaccel\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_9_set_deaccel;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_9_get_deaccel;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_9", "deaccel", &attributes, setter, getter);
    }
    Class_9_vtable_init();
    api10->godot_variant_new_int(&global_constants_array[0], 0);
    api10->godot_variant_new_int(&global_constants_array[1], 1);
    api10->godot_variant_new_int(&global_constants_array[2], 2);
    api10->godot_variant_new_int(&global_constants_array[3], 3);
    api10->godot_variant_new_int(&global_constants_array[4], 0);
    api10->godot_variant_new_int(&global_constants_array[5], 1);
    api10->godot_variant_new_int(&global_constants_array[6], 2);
    api10->godot_variant_new_int(&global_constants_array[7], 3);
    api10->godot_variant_new_int(&global_constants_array[8], 1);
    api10->godot_variant_new_int(&global_constants_array[9], 0);
    api10->godot_variant_new_int(&global_constants_array[10], 0);
    api10->godot_variant_new_int(&global_constants_array[11], 1);
    api10->godot_variant_new_int(&global_constants_array[12], 2);
    api10->godot_variant_new_int(&global_constants_array[13], 0);
    api10->godot_variant_new_int(&global_constants_array[14], 1);
    api10->godot_variant_new_int(&global_constants_array[15], 2);
    api10->godot_variant_new_int(&global_constants_array[16], 16777216);
    api10->godot_variant_new_int(&global_constants_array[17], 16777217);
    api10->godot_variant_new_int(&global_constants_array[18], 16777218);
    api10->godot_variant_new_int(&global_constants_array[19], 16777219);
    api10->godot_variant_new_int(&global_constants_array[20], 16777220);
    api10->godot_variant_new_int(&global_constants_array[21], 16777221);
    api10->godot_variant_new_int(&global_constants_array[22], 16777222);
    api10->godot_variant_new_int(&global_constants_array[23], 16777223);
    api10->godot_variant_new_int(&global_constants_array[24], 16777224);
    api10->godot_variant_new_int(&global_constants_array[25], 16777225);
    api10->godot_variant_new_int(&global_constants_array[26], 16777226);
    api10->godot_variant_new_int(&global_constants_array[27], 16777227);
    api10->godot_variant_new_int(&global_constants_array[28], 16777228);
    api10->godot_variant_new_int(&global_constants_array[29], 16777229);
    api10->godot_variant_new_int(&global_constants_array[30], 16777230);
    api10->godot_variant_new_int(&global_constants_array[31], 16777231);
    api10->godot_variant_new_int(&global_constants_array[32], 16777232);
    api10->godot_variant_new_int(&global_constants_array[33], 16777233);
    api10->godot_variant_new_int(&global_constants_array[34], 16777234);
    api10->godot_variant_new_int(&global_constants_array[35], 16777235);
    api10->godot_variant_new_int(&global_constants_array[36], 16777236);
    api10->godot_variant_new_int(&global_constants_array[37], 16777237);
    api10->godot_variant_new_int(&global_constants_array[38], 16777238);
    api10->godot_variant_new_int(&global_constants_array[39], 16777239);
    api10->godot_variant_new_int(&global_constants_array[40], 16777240);
    api10->godot_variant_new_int(&global_constants_array[41], 16777241);
    api10->godot_variant_new_int(&global_constants_array[42], 16777242);
    api10->godot_variant_new_int(&global_constants_array[43], 16777243);
    api10->godot_variant_new_int(&global_constants_array[44], 16777244);
    api10->godot_variant_new_int(&global_constants_array[45], 16777245);
    api10->godot_variant_new_int(&global_constants_array[46], 16777246);
    api10->godot_variant_new_int(&global_constants_array[47], 16777247);
    api10->godot_variant_new_int(&global_constants_array[48], 16777248);
    api10->godot_variant_new_int(&global_constants_array[49], 16777249);
    api10->godot_variant_new_int(&global_constants_array[50], 16777250);
    api10->godot_variant_new_int(&global_constants_array[51], 16777251);
    api10->godot_variant_new_int(&global_constants_array[52], 16777252);
    api10->godot_variant_new_int(&global_constants_array[53], 16777253);
    api10->godot_variant_new_int(&global_constants_array[54], 16777254);
    api10->godot_variant_new_int(&global_constants_array[55], 16777255);
    api10->godot_variant_new_int(&global_constants_array[56], 16777256);
    api10->godot_variant_new_int(&global_constants_array[57], 16777257);
    api10->godot_variant_new_int(&global_constants_array[58], 16777258);
    api10->godot_variant_new_int(&global_constants_array[59], 16777259);
    api10->godot_variant_new_int(&global_constants_array[60], 16777345);
    api10->godot_variant_new_int(&global_constants_array[61], 16777346);
    api10->godot_variant_new_int(&global_constants_array[62], 16777347);
    api10->godot_variant_new_int(&global_constants_array[63], 16777348);
    api10->godot_variant_new_int(&global_constants_array[64], 16777349);
    api10->godot_variant_new_int(&global_constants_array[65], 16777350);
    api10->godot_variant_new_int(&global_constants_array[66], 16777351);
    api10->godot_variant_new_int(&global_constants_array[67], 16777352);
    api10->godot_variant_new_int(&global_constants_array[68], 16777353);
    api10->godot_variant_new_int(&global_constants_array[69], 16777354);
    api10->godot_variant_new_int(&global_constants_array[70], 16777355);
    api10->godot_variant_new_int(&global_constants_array[71], 16777356);
    api10->godot_variant_new_int(&global_constants_array[72], 16777357);
    api10->godot_variant_new_int(&global_constants_array[73], 16777358);
    api10->godot_variant_new_int(&global_constants_array[74], 16777359);
    api10->godot_variant_new_int(&global_constants_array[75], 16777260);
    api10->godot_variant_new_int(&global_constants_array[76], 16777261);
    api10->godot_variant_new_int(&global_constants_array[77], 16777262);
    api10->godot_variant_new_int(&global_constants_array[78], 16777263);
    api10->godot_variant_new_int(&global_constants_array[79], 16777264);
    api10->godot_variant_new_int(&global_constants_array[80], 16777265);
    api10->godot_variant_new_int(&global_constants_array[81], 16777266);
    api10->godot_variant_new_int(&global_constants_array[82], 16777267);
    api10->godot_variant_new_int(&global_constants_array[83], 16777280);
    api10->godot_variant_new_int(&global_constants_array[84], 16777281);
    api10->godot_variant_new_int(&global_constants_array[85], 16777282);
    api10->godot_variant_new_int(&global_constants_array[86], 16777283);
    api10->godot_variant_new_int(&global_constants_array[87], 16777284);
    api10->godot_variant_new_int(&global_constants_array[88], 16777285);
    api10->godot_variant_new_int(&global_constants_array[89], 16777286);
    api10->godot_variant_new_int(&global_constants_array[90], 16777287);
    api10->godot_variant_new_int(&global_constants_array[91], 16777288);
    api10->godot_variant_new_int(&global_constants_array[92], 16777289);
    api10->godot_variant_new_int(&global_constants_array[93], 16777290);
    api10->godot_variant_new_int(&global_constants_array[94], 16777291);
    api10->godot_variant_new_int(&global_constants_array[95], 16777292);
    api10->godot_variant_new_int(&global_constants_array[96], 16777293);
    api10->godot_variant_new_int(&global_constants_array[97], 16777294);
    api10->godot_variant_new_int(&global_constants_array[98], 16777295);
    api10->godot_variant_new_int(&global_constants_array[99], 16777296);
    api10->godot_variant_new_int(&global_constants_array[100], 16777297);
    api10->godot_variant_new_int(&global_constants_array[101], 16777298);
    api10->godot_variant_new_int(&global_constants_array[102], 16777299);
    api10->godot_variant_new_int(&global_constants_array[103], 16777300);
    api10->godot_variant_new_int(&global_constants_array[104], 16777301);
    api10->godot_variant_new_int(&global_constants_array[105], 16777302);
    api10->godot_variant_new_int(&global_constants_array[106], 16777303);
    api10->godot_variant_new_int(&global_constants_array[107], 16777304);
    api10->godot_variant_new_int(&global_constants_array[108], 16777305);
    api10->godot_variant_new_int(&global_constants_array[109], 16777306);
    api10->godot_variant_new_int(&global_constants_array[110], 16777307);
    api10->godot_variant_new_int(&global_constants_array[111], 16777308);
    api10->godot_variant_new_int(&global_constants_array[112], 16777309);
    api10->godot_variant_new_int(&global_constants_array[113], 16777310);
    api10->godot_variant_new_int(&global_constants_array[114], 16777311);
    api10->godot_variant_new_int(&global_constants_array[115], 16777312);
    api10->godot_variant_new_int(&global_constants_array[116], 16777313);
    api10->godot_variant_new_int(&global_constants_array[117], 16777314);
    api10->godot_variant_new_int(&global_constants_array[118], 16777315);
    api10->godot_variant_new_int(&global_constants_array[119], 16777316);
    api10->godot_variant_new_int(&global_constants_array[120], 16777317);
    api10->godot_variant_new_int(&global_constants_array[121], 16777318);
    api10->godot_variant_new_int(&global_constants_array[122], 16777319);
    api10->godot_variant_new_int(&global_constants_array[123], 33554431);
    api10->godot_variant_new_int(&global_constants_array[124], 32);
    api10->godot_variant_new_int(&global_constants_array[125], 33);
    api10->godot_variant_new_int(&global_constants_array[126], 34);
    api10->godot_variant_new_int(&global_constants_array[127], 35);
    api10->godot_variant_new_int(&global_constants_array[128], 36);
    api10->godot_variant_new_int(&global_constants_array[129], 37);
    api10->godot_variant_new_int(&global_constants_array[130], 38);
    api10->godot_variant_new_int(&global_constants_array[131], 39);
    api10->godot_variant_new_int(&global_constants_array[132], 40);
    api10->godot_variant_new_int(&global_constants_array[133], 41);
    api10->godot_variant_new_int(&global_constants_array[134], 42);
    api10->godot_variant_new_int(&global_constants_array[135], 43);
    api10->godot_variant_new_int(&global_constants_array[136], 44);
    api10->godot_variant_new_int(&global_constants_array[137], 45);
    api10->godot_variant_new_int(&global_constants_array[138], 46);
    api10->godot_variant_new_int(&global_constants_array[139], 47);
    api10->godot_variant_new_int(&global_constants_array[140], 48);
    api10->godot_variant_new_int(&global_constants_array[141], 49);
    api10->godot_variant_new_int(&global_constants_array[142], 50);
    api10->godot_variant_new_int(&global_constants_array[143], 51);
    api10->godot_variant_new_int(&global_constants_array[144], 52);
    api10->godot_variant_new_int(&global_constants_array[145], 53);
    api10->godot_variant_new_int(&global_constants_array[146], 54);
    api10->godot_variant_new_int(&global_constants_array[147], 55);
    api10->godot_variant_new_int(&global_constants_array[148], 56);
    api10->godot_variant_new_int(&global_constants_array[149], 57);
    api10->godot_variant_new_int(&global_constants_array[150], 58);
    api10->godot_variant_new_int(&global_constants_array[151], 59);
    api10->godot_variant_new_int(&global_constants_array[152], 60);
    api10->godot_variant_new_int(&global_constants_array[153], 61);
    api10->godot_variant_new_int(&global_constants_array[154], 62);
    api10->godot_variant_new_int(&global_constants_array[155], 63);
    api10->godot_variant_new_int(&global_constants_array[156], 64);
    api10->godot_variant_new_int(&global_constants_array[157], 65);
    api10->godot_variant_new_int(&global_constants_array[158], 66);
    api10->godot_variant_new_int(&global_constants_array[159], 67);
    api10->godot_variant_new_int(&global_constants_array[160], 68);
    api10->godot_variant_new_int(&global_constants_array[161], 69);
    api10->godot_variant_new_int(&global_constants_array[162], 70);
    api10->godot_variant_new_int(&global_constants_array[163], 71);
    api10->godot_variant_new_int(&global_constants_array[164], 72);
    api10->godot_variant_new_int(&global_constants_array[165], 73);
    api10->godot_variant_new_int(&global_constants_array[166], 74);
    api10->godot_variant_new_int(&global_constants_array[167], 75);
    api10->godot_variant_new_int(&global_constants_array[168], 76);
    api10->godot_variant_new_int(&global_constants_array[169], 77);
    api10->godot_variant_new_int(&global_constants_array[170], 78);
    api10->godot_variant_new_int(&global_constants_array[171], 79);
    api10->godot_variant_new_int(&global_constants_array[172], 80);
    api10->godot_variant_new_int(&global_constants_array[173], 81);
    api10->godot_variant_new_int(&global_constants_array[174], 82);
    api10->godot_variant_new_int(&global_constants_array[175], 83);
    api10->godot_variant_new_int(&global_constants_array[176], 84);
    api10->godot_variant_new_int(&global_constants_array[177], 85);
    api10->godot_variant_new_int(&global_constants_array[178], 86);
    api10->godot_variant_new_int(&global_constants_array[179], 87);
    api10->godot_variant_new_int(&global_constants_array[180], 88);
    api10->godot_variant_new_int(&global_constants_array[181], 89);
    api10->godot_variant_new_int(&global_constants_array[182], 90);
    api10->godot_variant_new_int(&global_constants_array[183], 91);
    api10->godot_variant_new_int(&global_constants_array[184], 92);
    api10->godot_variant_new_int(&global_constants_array[185], 93);
    api10->godot_variant_new_int(&global_constants_array[186], 94);
    api10->godot_variant_new_int(&global_constants_array[187], 95);
    api10->godot_variant_new_int(&global_constants_array[188], 96);
    api10->godot_variant_new_int(&global_constants_array[189], 123);
    api10->godot_variant_new_int(&global_constants_array[190], 124);
    api10->godot_variant_new_int(&global_constants_array[191], 125);
    api10->godot_variant_new_int(&global_constants_array[192], 126);
    api10->godot_variant_new_int(&global_constants_array[193], 160);
    api10->godot_variant_new_int(&global_constants_array[194], 161);
    api10->godot_variant_new_int(&global_constants_array[195], 162);
    api10->godot_variant_new_int(&global_constants_array[196], 163);
    api10->godot_variant_new_int(&global_constants_array[197], 164);
    api10->godot_variant_new_int(&global_constants_array[198], 165);
    api10->godot_variant_new_int(&global_constants_array[199], 166);
    api10->godot_variant_new_int(&global_constants_array[200], 167);
    api10->godot_variant_new_int(&global_constants_array[201], 168);
    api10->godot_variant_new_int(&global_constants_array[202], 169);
    api10->godot_variant_new_int(&global_constants_array[203], 170);
    api10->godot_variant_new_int(&global_constants_array[204], 171);
    api10->godot_variant_new_int(&global_constants_array[205], 172);
    api10->godot_variant_new_int(&global_constants_array[206], 173);
    api10->godot_variant_new_int(&global_constants_array[207], 174);
    api10->godot_variant_new_int(&global_constants_array[208], 175);
    api10->godot_variant_new_int(&global_constants_array[209], 176);
    api10->godot_variant_new_int(&global_constants_array[210], 177);
    api10->godot_variant_new_int(&global_constants_array[211], 178);
    api10->godot_variant_new_int(&global_constants_array[212], 179);
    api10->godot_variant_new_int(&global_constants_array[213], 180);
    api10->godot_variant_new_int(&global_constants_array[214], 181);
    api10->godot_variant_new_int(&global_constants_array[215], 182);
    api10->godot_variant_new_int(&global_constants_array[216], 183);
    api10->godot_variant_new_int(&global_constants_array[217], 184);
    api10->godot_variant_new_int(&global_constants_array[218], 185);
    api10->godot_variant_new_int(&global_constants_array[219], 186);
    api10->godot_variant_new_int(&global_constants_array[220], 187);
    api10->godot_variant_new_int(&global_constants_array[221], 188);
    api10->godot_variant_new_int(&global_constants_array[222], 189);
    api10->godot_variant_new_int(&global_constants_array[223], 190);
    api10->godot_variant_new_int(&global_constants_array[224], 191);
    api10->godot_variant_new_int(&global_constants_array[225], 192);
    api10->godot_variant_new_int(&global_constants_array[226], 193);
    api10->godot_variant_new_int(&global_constants_array[227], 194);
    api10->godot_variant_new_int(&global_constants_array[228], 195);
    api10->godot_variant_new_int(&global_constants_array[229], 196);
    api10->godot_variant_new_int(&global_constants_array[230], 197);
    api10->godot_variant_new_int(&global_constants_array[231], 198);
    api10->godot_variant_new_int(&global_constants_array[232], 199);
    api10->godot_variant_new_int(&global_constants_array[233], 200);
    api10->godot_variant_new_int(&global_constants_array[234], 201);
    api10->godot_variant_new_int(&global_constants_array[235], 202);
    api10->godot_variant_new_int(&global_constants_array[236], 203);
    api10->godot_variant_new_int(&global_constants_array[237], 204);
    api10->godot_variant_new_int(&global_constants_array[238], 205);
    api10->godot_variant_new_int(&global_constants_array[239], 206);
    api10->godot_variant_new_int(&global_constants_array[240], 207);
    api10->godot_variant_new_int(&global_constants_array[241], 208);
    api10->godot_variant_new_int(&global_constants_array[242], 209);
    api10->godot_variant_new_int(&global_constants_array[243], 210);
    api10->godot_variant_new_int(&global_constants_array[244], 211);
    api10->godot_variant_new_int(&global_constants_array[245], 212);
    api10->godot_variant_new_int(&global_constants_array[246], 213);
    api10->godot_variant_new_int(&global_constants_array[247], 214);
    api10->godot_variant_new_int(&global_constants_array[248], 215);
    api10->godot_variant_new_int(&global_constants_array[249], 216);
    api10->godot_variant_new_int(&global_constants_array[250], 217);
    api10->godot_variant_new_int(&global_constants_array[251], 218);
    api10->godot_variant_new_int(&global_constants_array[252], 219);
    api10->godot_variant_new_int(&global_constants_array[253], 220);
    api10->godot_variant_new_int(&global_constants_array[254], 221);
    api10->godot_variant_new_int(&global_constants_array[255], 222);
    api10->godot_variant_new_int(&global_constants_array[256], 223);
    api10->godot_variant_new_int(&global_constants_array[257], 247);
    api10->godot_variant_new_int(&global_constants_array[258], 255);
    api10->godot_variant_new_int(&global_constants_array[259], 33554431);
    api10->godot_variant_new_int(&global_constants_array[260], -16777216);
    api10->godot_variant_new_int(&global_constants_array[261], 33554432);
    api10->godot_variant_new_int(&global_constants_array[262], 67108864);
    api10->godot_variant_new_int(&global_constants_array[263], 134217728);
    api10->godot_variant_new_int(&global_constants_array[264], 268435456);
    api10->godot_variant_new_int(&global_constants_array[265], 268435456);
    api10->godot_variant_new_int(&global_constants_array[266], 536870912);
    api10->godot_variant_new_int(&global_constants_array[267], 1073741824);
    api10->godot_variant_new_int(&global_constants_array[268], 1);
    api10->godot_variant_new_int(&global_constants_array[269], 2);
    api10->godot_variant_new_int(&global_constants_array[270], 3);
    api10->godot_variant_new_int(&global_constants_array[271], 8);
    api10->godot_variant_new_int(&global_constants_array[272], 9);
    api10->godot_variant_new_int(&global_constants_array[273], 4);
    api10->godot_variant_new_int(&global_constants_array[274], 5);
    api10->godot_variant_new_int(&global_constants_array[275], 6);
    api10->godot_variant_new_int(&global_constants_array[276], 7);
    api10->godot_variant_new_int(&global_constants_array[277], 1);
    api10->godot_variant_new_int(&global_constants_array[278], 2);
    api10->godot_variant_new_int(&global_constants_array[279], 4);
    api10->godot_variant_new_int(&global_constants_array[280], 128);
    api10->godot_variant_new_int(&global_constants_array[281], 256);
    api10->godot_variant_new_int(&global_constants_array[282], 0);
    api10->godot_variant_new_int(&global_constants_array[283], 1);
    api10->godot_variant_new_int(&global_constants_array[284], 2);
    api10->godot_variant_new_int(&global_constants_array[285], 3);
    api10->godot_variant_new_int(&global_constants_array[286], 4);
    api10->godot_variant_new_int(&global_constants_array[287], 5);
    api10->godot_variant_new_int(&global_constants_array[288], 6);
    api10->godot_variant_new_int(&global_constants_array[289], 7);
    api10->godot_variant_new_int(&global_constants_array[290], 8);
    api10->godot_variant_new_int(&global_constants_array[291], 9);
    api10->godot_variant_new_int(&global_constants_array[292], 10);
    api10->godot_variant_new_int(&global_constants_array[293], 11);
    api10->godot_variant_new_int(&global_constants_array[294], 12);
    api10->godot_variant_new_int(&global_constants_array[295], 13);
    api10->godot_variant_new_int(&global_constants_array[296], 14);
    api10->godot_variant_new_int(&global_constants_array[297], 15);
    api10->godot_variant_new_int(&global_constants_array[298], 16);
    api10->godot_variant_new_int(&global_constants_array[299], 1);
    api10->godot_variant_new_int(&global_constants_array[300], 0);
    api10->godot_variant_new_int(&global_constants_array[301], 2);
    api10->godot_variant_new_int(&global_constants_array[302], 3);
    api10->godot_variant_new_int(&global_constants_array[303], 1);
    api10->godot_variant_new_int(&global_constants_array[304], 0);
    api10->godot_variant_new_int(&global_constants_array[305], 2);
    api10->godot_variant_new_int(&global_constants_array[306], 3);
    api10->godot_variant_new_int(&global_constants_array[307], 1);
    api10->godot_variant_new_int(&global_constants_array[308], 0);
    api10->godot_variant_new_int(&global_constants_array[309], 3);
    api10->godot_variant_new_int(&global_constants_array[310], 2);
    api10->godot_variant_new_int(&global_constants_array[311], 10);
    api10->godot_variant_new_int(&global_constants_array[312], 11);
    api10->godot_variant_new_int(&global_constants_array[313], 12);
    api10->godot_variant_new_int(&global_constants_array[314], 13);
    api10->godot_variant_new_int(&global_constants_array[315], 14);
    api10->godot_variant_new_int(&global_constants_array[316], 15);
    api10->godot_variant_new_int(&global_constants_array[317], 4);
    api10->godot_variant_new_int(&global_constants_array[318], 6);
    api10->godot_variant_new_int(&global_constants_array[319], 8);
    api10->godot_variant_new_int(&global_constants_array[320], 5);
    api10->godot_variant_new_int(&global_constants_array[321], 7);
    api10->godot_variant_new_int(&global_constants_array[322], 9);
    api10->godot_variant_new_int(&global_constants_array[323], 0);
    api10->godot_variant_new_int(&global_constants_array[324], 1);
    api10->godot_variant_new_int(&global_constants_array[325], 2);
    api10->godot_variant_new_int(&global_constants_array[326], 3);
    api10->godot_variant_new_int(&global_constants_array[327], 4);
    api10->godot_variant_new_int(&global_constants_array[328], 5);
    api10->godot_variant_new_int(&global_constants_array[329], 6);
    api10->godot_variant_new_int(&global_constants_array[330], 7);
    api10->godot_variant_new_int(&global_constants_array[331], 8);
    api10->godot_variant_new_int(&global_constants_array[332], 9);
    api10->godot_variant_new_int(&global_constants_array[333], 10);
    api10->godot_variant_new_int(&global_constants_array[334], 0);
    api10->godot_variant_new_int(&global_constants_array[335], 1);
    api10->godot_variant_new_int(&global_constants_array[336], 2);
    api10->godot_variant_new_int(&global_constants_array[337], 3);
    api10->godot_variant_new_int(&global_constants_array[338], 6);
    api10->godot_variant_new_int(&global_constants_array[339], 7);
    api10->godot_variant_new_int(&global_constants_array[340], 8);
    api10->godot_variant_new_int(&global_constants_array[341], 9);
    api10->godot_variant_new_int(&global_constants_array[342], 10);
    api10->godot_variant_new_int(&global_constants_array[343], 11);
    api10->godot_variant_new_int(&global_constants_array[344], 12);
    api10->godot_variant_new_int(&global_constants_array[345], 13);
    api10->godot_variant_new_int(&global_constants_array[346], 14);
    api10->godot_variant_new_int(&global_constants_array[347], 0);
    api10->godot_variant_new_int(&global_constants_array[348], 1);
    api10->godot_variant_new_int(&global_constants_array[349], 2);
    api10->godot_variant_new_int(&global_constants_array[350], 3);
    api10->godot_variant_new_int(&global_constants_array[351], 4);
    api10->godot_variant_new_int(&global_constants_array[352], 5);
    api10->godot_variant_new_int(&global_constants_array[353], 6);
    api10->godot_variant_new_int(&global_constants_array[354], 7);
    api10->godot_variant_new_int(&global_constants_array[355], 8);
    api10->godot_variant_new_int(&global_constants_array[356], 9);
    api10->godot_variant_new_int(&global_constants_array[357], 10);
    api10->godot_variant_new_int(&global_constants_array[358], 11);
    api10->godot_variant_new_int(&global_constants_array[359], 12);
    api10->godot_variant_new_int(&global_constants_array[360], 13);
    api10->godot_variant_new_int(&global_constants_array[361], 14);
    api10->godot_variant_new_int(&global_constants_array[362], 15);
    api10->godot_variant_new_int(&global_constants_array[363], 16);
    api10->godot_variant_new_int(&global_constants_array[364], 17);
    api10->godot_variant_new_int(&global_constants_array[365], 18);
    api10->godot_variant_new_int(&global_constants_array[366], 19);
    api10->godot_variant_new_int(&global_constants_array[367], 20);
    api10->godot_variant_new_int(&global_constants_array[368], 43);
    api10->godot_variant_new_int(&global_constants_array[369], 21);
    api10->godot_variant_new_int(&global_constants_array[370], 22);
    api10->godot_variant_new_int(&global_constants_array[371], 23);
    api10->godot_variant_new_int(&global_constants_array[372], 24);
    api10->godot_variant_new_int(&global_constants_array[373], 28);
    api10->godot_variant_new_int(&global_constants_array[374], 30);
    api10->godot_variant_new_int(&global_constants_array[375], 31);
    api10->godot_variant_new_int(&global_constants_array[376], 32);
    api10->godot_variant_new_int(&global_constants_array[377], 33);
    api10->godot_variant_new_int(&global_constants_array[378], 34);
    api10->godot_variant_new_int(&global_constants_array[379], 35);
    api10->godot_variant_new_int(&global_constants_array[380], 36);
    api10->godot_variant_new_int(&global_constants_array[381], 37);
    api10->godot_variant_new_int(&global_constants_array[382], 38);
    api10->godot_variant_new_int(&global_constants_array[383], 39);
    api10->godot_variant_new_int(&global_constants_array[384], 40);
    api10->godot_variant_new_int(&global_constants_array[385], 44);
    api10->godot_variant_new_int(&global_constants_array[386], 46);
    api10->godot_variant_new_int(&global_constants_array[387], 47);
    api10->godot_variant_new_int(&global_constants_array[388], 0);
    api10->godot_variant_new_int(&global_constants_array[389], 1);
    api10->godot_variant_new_int(&global_constants_array[390], 2);
    api10->godot_variant_new_int(&global_constants_array[391], 3);
    api10->godot_variant_new_int(&global_constants_array[392], 4);
    api10->godot_variant_new_int(&global_constants_array[393], 5);
    api10->godot_variant_new_int(&global_constants_array[394], 7);
    api10->godot_variant_new_int(&global_constants_array[395], 8);
    api10->godot_variant_new_int(&global_constants_array[396], 9);
    api10->godot_variant_new_int(&global_constants_array[397], 10);
    api10->godot_variant_new_int(&global_constants_array[398], 11);
    api10->godot_variant_new_int(&global_constants_array[399], 12);
    api10->godot_variant_new_int(&global_constants_array[400], 13);
    api10->godot_variant_new_int(&global_constants_array[401], 14);
    api10->godot_variant_new_int(&global_constants_array[402], 15);
    api10->godot_variant_new_int(&global_constants_array[403], 16);
    api10->godot_variant_new_int(&global_constants_array[404], 17);
    api10->godot_variant_new_int(&global_constants_array[405], 18);
    api10->godot_variant_new_int(&global_constants_array[406], 19);
    api10->godot_variant_new_int(&global_constants_array[407], 20);
    api10->godot_variant_new_int(&global_constants_array[408], 21);
    api10->godot_variant_new_int(&global_constants_array[409], 22);
    api10->godot_variant_new_int(&global_constants_array[410], 1);
    api10->godot_variant_new_int(&global_constants_array[411], 2);
    api10->godot_variant_new_int(&global_constants_array[412], 4);
    api10->godot_variant_new_int(&global_constants_array[413], 8);
    api10->godot_variant_new_int(&global_constants_array[414], 16);
    api10->godot_variant_new_int(&global_constants_array[415], 32);
    api10->godot_variant_new_int(&global_constants_array[416], 64);
    api10->godot_variant_new_int(&global_constants_array[417], 128);
    api10->godot_variant_new_int(&global_constants_array[418], 256);
    api10->godot_variant_new_int(&global_constants_array[419], 2048);
    api10->godot_variant_new_int(&global_constants_array[420], 4096);
    api10->godot_variant_new_int(&global_constants_array[421], 8192);
    api10->godot_variant_new_int(&global_constants_array[422], 7);
    api10->godot_variant_new_int(&global_constants_array[423], 71);
    api10->godot_variant_new_int(&global_constants_array[424], 5);
    api10->godot_variant_new_int(&global_constants_array[425], 1);
    api10->godot_variant_new_int(&global_constants_array[426], 2);
    api10->godot_variant_new_int(&global_constants_array[427], 4);
    api10->godot_variant_new_int(&global_constants_array[428], 8);
    api10->godot_variant_new_int(&global_constants_array[429], 16);
    api10->godot_variant_new_int(&global_constants_array[430], 32);
    api10->godot_variant_new_int(&global_constants_array[431], 64);
    api10->godot_variant_new_int(&global_constants_array[432], 1);
    api10->godot_variant_new_int(&global_constants_array[433], 0);
    api10->godot_variant_new_int(&global_constants_array[434], 1);
    api10->godot_variant_new_int(&global_constants_array[435], 2);
    api10->godot_variant_new_int(&global_constants_array[436], 3);
    api10->godot_variant_new_int(&global_constants_array[437], 4);
    api10->godot_variant_new_int(&global_constants_array[438], 5);
    api10->godot_variant_new_int(&global_constants_array[439], 6);
    api10->godot_variant_new_int(&global_constants_array[440], 7);
    api10->godot_variant_new_int(&global_constants_array[441], 8);
    api10->godot_variant_new_int(&global_constants_array[442], 9);
    api10->godot_variant_new_int(&global_constants_array[443], 10);
    api10->godot_variant_new_int(&global_constants_array[444], 11);
    api10->godot_variant_new_int(&global_constants_array[445], 12);
    api10->godot_variant_new_int(&global_constants_array[446], 13);
    api10->godot_variant_new_int(&global_constants_array[447], 14);
    api10->godot_variant_new_int(&global_constants_array[448], 15);
    api10->godot_variant_new_int(&global_constants_array[449], 16);
    api10->godot_variant_new_int(&global_constants_array[450], 17);
    api10->godot_variant_new_int(&global_constants_array[451], 18);
    api10->godot_variant_new_int(&global_constants_array[452], 19);
    api10->godot_variant_new_int(&global_constants_array[453], 20);
    api10->godot_variant_new_int(&global_constants_array[454], 21);
    api10->godot_variant_new_int(&global_constants_array[455], 22);
    api10->godot_variant_new_int(&global_constants_array[456], 23);
    api10->godot_variant_new_int(&global_constants_array[457], 24);
    api10->godot_variant_new_int(&global_constants_array[458], 25);
    api10->godot_variant_new_int(&global_constants_array[459], 26);
    api10->godot_variant_new_int(&global_constants_array[460], 27);
    api10->godot_variant_new_int(&global_constants_array[461], 0);
    api10->godot_variant_new_int(&global_constants_array[462], 1);
    api10->godot_variant_new_int(&global_constants_array[463], 2);
    api10->godot_variant_new_int(&global_constants_array[464], 3);
    api10->godot_variant_new_int(&global_constants_array[465], 4);
    api10->godot_variant_new_int(&global_constants_array[466], 5);
    api10->godot_variant_new_int(&global_constants_array[467], 6);
    api10->godot_variant_new_int(&global_constants_array[468], 7);
    api10->godot_variant_new_int(&global_constants_array[469], 8);
    api10->godot_variant_new_int(&global_constants_array[470], 9);
    api10->godot_variant_new_int(&global_constants_array[471], 10);
    api10->godot_variant_new_int(&global_constants_array[472], 11);
    api10->godot_variant_new_int(&global_constants_array[473], 12);
    api10->godot_variant_new_int(&global_constants_array[474], 13);
    api10->godot_variant_new_int(&global_constants_array[475], 14);
    api10->godot_variant_new_int(&global_constants_array[476], 15);
    api10->godot_variant_new_int(&global_constants_array[477], 16);
    api10->godot_variant_new_int(&global_constants_array[478], 17);
    api10->godot_variant_new_int(&global_constants_array[479], 18);
    api10->godot_variant_new_int(&global_constants_array[480], 19);
    api10->godot_variant_new_int(&global_constants_array[481], 20);
    api10->godot_variant_new_int(&global_constants_array[482], 21);
    api10->godot_variant_new_int(&global_constants_array[483], 22);
    api10->godot_variant_new_int(&global_constants_array[484], 23);
    api10->godot_variant_new_int(&global_constants_array[485], 24);
    api10->godot_variant_new_int(&global_constants_array[486], 25);
    api10->godot_variant_new_real(&global_hard_coded_constants_array[0], 3.141593);
    api10->godot_variant_new_real(&global_hard_coded_constants_array[1], 6.283185);
    api10->godot_variant_new_real(&global_hard_coded_constants_array[2], INFINITY);
    api10->godot_variant_new_real(&global_hard_coded_constants_array[3], NAN);
    {
        // Object
        char data[] = {79, 98, 106, 101, 99, 116};
        register_classdb_global(&global_classdb_array[0], (const char *)data, 6);
    }
    {
        // TranslationLoaderPO
        char data[] = {84, 114, 97, 110, 115, 108, 97, 116, 105, 111, 110, 76, 111, 97, 100, 101, 114, 80, 79};
        register_classdb_global(&global_classdb_array[1], (const char *)data, 19);
    }
    {
        // Reference
        char data[] = {82, 101, 102, 101, 114, 101, 110, 99, 101};
        register_classdb_global(&global_classdb_array[2], (const char *)data, 9);
    }
    {
        // ResourceFormatLoader
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 76, 111, 97, 100, 101, 114};
        register_classdb_global(&global_classdb_array[3], (const char *)data, 20);
    }
    {
        // ResourceFormatSaverBinary
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 83, 97, 118, 101, 114, 66, 105, 110, 97, 114, 121};
        register_classdb_global(&global_classdb_array[4], (const char *)data, 25);
    }
    {
        // ResourceFormatImporter
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 73, 109, 112, 111, 114, 116, 101, 114};
        register_classdb_global(&global_classdb_array[5], (const char *)data, 22);
    }
    {
        // ResourceFormatLoaderImage
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 76, 111, 97, 100, 101, 114, 73, 109, 97, 103, 101};
        register_classdb_global(&global_classdb_array[6], (const char *)data, 25);
    }
    {
        // ResourceFormatLoaderBinary
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 76, 111, 97, 100, 101, 114, 66, 105, 110, 97, 114, 121};
        register_classdb_global(&global_classdb_array[7], (const char *)data, 26);
    }
    {
        // ResourceFormatSaver
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 83, 97, 118, 101, 114};
        register_classdb_global(&global_classdb_array[8], (const char *)data, 19);
    }
    {
        // Resource
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101};
        register_classdb_global(&global_classdb_array[9], (const char *)data, 8);
    }
    {
        // Image
        char data[] = {73, 109, 97, 103, 101};
        register_classdb_global(&global_classdb_array[10], (const char *)data, 5);
    }
    {
        // WeakRef
        char data[] = {87, 101, 97, 107, 82, 101, 102};
        register_classdb_global(&global_classdb_array[11], (const char *)data, 7);
    }
    {
        // Script
        char data[] = {83, 99, 114, 105, 112, 116};
        register_classdb_global(&global_classdb_array[12], (const char *)data, 6);
    }
    {
        // InputEventMouseMotion
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 77, 111, 117, 115, 101, 77, 111, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[13], (const char *)data, 21);
    }
    {
        // InputEventMouseButton
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 77, 111, 117, 115, 101, 66, 117, 116, 116, 111, 110};
        register_classdb_global(&global_classdb_array[14], (const char *)data, 21);
    }
    {
        // InputEventScreenDrag
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 83, 99, 114, 101, 101, 110, 68, 114, 97, 103};
        register_classdb_global(&global_classdb_array[15], (const char *)data, 20);
    }
    {
        // InputEventJoypadButton
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 74, 111, 121, 112, 97, 100, 66, 117, 116, 116, 111, 110};
        register_classdb_global(&global_classdb_array[16], (const char *)data, 22);
    }
    {
        // InputEventJoypadMotion
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 74, 111, 121, 112, 97, 100, 77, 111, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[17], (const char *)data, 22);
    }
    {
        // InputEvent
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116};
        register_classdb_global(&global_classdb_array[18], (const char *)data, 10);
    }
    {
        // InputEventWithModifiers
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 87, 105, 116, 104, 77, 111, 100, 105, 102, 105, 101, 114, 115};
        register_classdb_global(&global_classdb_array[19], (const char *)data, 23);
    }
    {
        // InputEventKey
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 75, 101, 121};
        register_classdb_global(&global_classdb_array[20], (const char *)data, 13);
    }
    {
        // InputEventMouse
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 77, 111, 117, 115, 101};
        register_classdb_global(&global_classdb_array[21], (const char *)data, 15);
    }
    {
        // InputEventGesture
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 71, 101, 115, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[22], (const char *)data, 17);
    }
    {
        // InputEventPanGesture
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 80, 97, 110, 71, 101, 115, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[23], (const char *)data, 20);
    }
    {
        // InputEventScreenTouch
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 83, 99, 114, 101, 101, 110, 84, 111, 117, 99, 104};
        register_classdb_global(&global_classdb_array[24], (const char *)data, 21);
    }
    {
        // InputEventAction
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 65, 99, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[25], (const char *)data, 16);
    }
    {
        // InputEventMagnifyGesture
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 77, 97, 103, 110, 105, 102, 121, 71, 101, 115, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[26], (const char *)data, 24);
    }
    {
        // InputEventMIDI
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 77, 73, 68, 73};
        register_classdb_global(&global_classdb_array[27], (const char *)data, 14);
    }
    {
        // FuncRef
        char data[] = {70, 117, 110, 99, 82, 101, 102};
        register_classdb_global(&global_classdb_array[28], (const char *)data, 7);
    }
    {
        // StreamPeer
        char data[] = {83, 116, 114, 101, 97, 109, 80, 101, 101, 114};
        register_classdb_global(&global_classdb_array[29], (const char *)data, 10);
    }
    {
        // StreamPeerBuffer
        char data[] = {83, 116, 114, 101, 97, 109, 80, 101, 101, 114, 66, 117, 102, 102, 101, 114};
        register_classdb_global(&global_classdb_array[30], (const char *)data, 16);
    }
    {
        // StreamPeerSSL
        char data[] = {83, 116, 114, 101, 97, 109, 80, 101, 101, 114, 83, 83, 76};
        register_classdb_global(&global_classdb_array[31], (const char *)data, 13);
    }
    {
        // PacketPeer
        char data[] = {80, 97, 99, 107, 101, 116, 80, 101, 101, 114};
        register_classdb_global(&global_classdb_array[32], (const char *)data, 10);
    }
    {
        // TCP_Server
        char data[] = {84, 67, 80, 95, 83, 101, 114, 118, 101, 114};
        register_classdb_global(&global_classdb_array[33], (const char *)data, 10);
    }
    {
        // StreamPeerTCP
        char data[] = {83, 116, 114, 101, 97, 109, 80, 101, 101, 114, 84, 67, 80};
        register_classdb_global(&global_classdb_array[34], (const char *)data, 13);
    }
    {
        // PacketPeerUDP
        char data[] = {80, 97, 99, 107, 101, 116, 80, 101, 101, 114, 85, 68, 80};
        register_classdb_global(&global_classdb_array[35], (const char *)data, 13);
    }
    {
        // IP
        char data[] = {73, 80};
        register_classdb_global(&global_classdb_array[36], (const char *)data, 2);
    }
    {
        // HTTPClient
        char data[] = {72, 84, 84, 80, 67, 108, 105, 101, 110, 116};
        register_classdb_global(&global_classdb_array[37], (const char *)data, 10);
    }
    {
        // PHashTranslation
        char data[] = {80, 72, 97, 115, 104, 84, 114, 97, 110, 115, 108, 97, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[38], (const char *)data, 16);
    }
    {
        // UndoRedo
        char data[] = {85, 110, 100, 111, 82, 101, 100, 111};
        register_classdb_global(&global_classdb_array[39], (const char *)data, 8);
    }
    {
        // MultiplayerAPI
        char data[] = {77, 117, 108, 116, 105, 112, 108, 97, 121, 101, 114, 65, 80, 73};
        register_classdb_global(&global_classdb_array[40], (const char *)data, 14);
    }
    {
        // NetworkedMultiplayerPeer
        char data[] = {78, 101, 116, 119, 111, 114, 107, 101, 100, 77, 117, 108, 116, 105, 112, 108, 97, 121, 101, 114, 80, 101, 101, 114};
        register_classdb_global(&global_classdb_array[41], (const char *)data, 24);
    }
    {
        // PacketPeerStream
        char data[] = {80, 97, 99, 107, 101, 116, 80, 101, 101, 114, 83, 116, 114, 101, 97, 109};
        register_classdb_global(&global_classdb_array[42], (const char *)data, 16);
    }
    {
        // MainLoop
        char data[] = {77, 97, 105, 110, 76, 111, 111, 112};
        register_classdb_global(&global_classdb_array[43], (const char *)data, 8);
    }
    {
        // Translation
        char data[] = {84, 114, 97, 110, 115, 108, 97, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[44], (const char *)data, 11);
    }
    {
        // TriangleMesh
        char data[] = {84, 114, 105, 97, 110, 103, 108, 101, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[45], (const char *)data, 12);
    }
    {
        // ResourceInteractiveLoader
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 73, 110, 116, 101, 114, 97, 99, 116, 105, 118, 101, 76, 111, 97, 100, 101, 114};
        register_classdb_global(&global_classdb_array[46], (const char *)data, 25);
    }
    {
        // _File
        char data[] = {95, 70, 105, 108, 101};
        register_classdb_global(&global_classdb_array[47], (const char *)data, 5);
    }
    {
        // ConfigFile
        char data[] = {67, 111, 110, 102, 105, 103, 70, 105, 108, 101};
        register_classdb_global(&global_classdb_array[48], (const char *)data, 10);
    }
    {
        // _Thread
        char data[] = {95, 84, 104, 114, 101, 97, 100};
        register_classdb_global(&global_classdb_array[49], (const char *)data, 7);
    }
    {
        // _Mutex
        char data[] = {95, 77, 117, 116, 101, 120};
        register_classdb_global(&global_classdb_array[50], (const char *)data, 6);
    }
    {
        // _Directory
        char data[] = {95, 68, 105, 114, 101, 99, 116, 111, 114, 121};
        register_classdb_global(&global_classdb_array[51], (const char *)data, 10);
    }
    {
        // _Semaphore
        char data[] = {95, 83, 101, 109, 97, 112, 104, 111, 114, 101};
        register_classdb_global(&global_classdb_array[52], (const char *)data, 10);
    }
    {
        // XMLParser
        char data[] = {88, 77, 76, 80, 97, 114, 115, 101, 114};
        register_classdb_global(&global_classdb_array[53], (const char *)data, 9);
    }
    {
        // PCKPacker
        char data[] = {80, 67, 75, 80, 97, 99, 107, 101, 114};
        register_classdb_global(&global_classdb_array[54], (const char *)data, 9);
    }
    {
        // _Engine
        char data[] = {95, 69, 110, 103, 105, 110, 101};
        register_classdb_global(&global_classdb_array[55], (const char *)data, 7);
    }
    {
        // EncodedObjectAsID
        char data[] = {69, 110, 99, 111, 100, 101, 100, 79, 98, 106, 101, 99, 116, 65, 115, 73, 68};
        register_classdb_global(&global_classdb_array[56], (const char *)data, 17);
    }
    {
        // RandomNumberGenerator
        char data[] = {82, 97, 110, 100, 111, 109, 78, 117, 109, 98, 101, 114, 71, 101, 110, 101, 114, 97, 116, 111, 114};
        register_classdb_global(&global_classdb_array[57], (const char *)data, 21);
    }
    {
        // PackedDataContainer
        char data[] = {80, 97, 99, 107, 101, 100, 68, 97, 116, 97, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[58], (const char *)data, 19);
    }
    {
        // AStar
        char data[] = {65, 83, 116, 97, 114};
        register_classdb_global(&global_classdb_array[59], (const char *)data, 5);
    }
    {
        // JSONParseResult
        char data[] = {74, 83, 79, 78, 80, 97, 114, 115, 101, 82, 101, 115, 117, 108, 116};
        register_classdb_global(&global_classdb_array[60], (const char *)data, 15);
    }
    {
        // PackedDataContainerRef
        char data[] = {80, 97, 99, 107, 101, 100, 68, 97, 116, 97, 67, 111, 110, 116, 97, 105, 110, 101, 114, 82, 101, 102};
        register_classdb_global(&global_classdb_array[61], (const char *)data, 22);
    }
    {
        // _ResourceLoader
        char data[] = {95, 82, 101, 115, 111, 117, 114, 99, 101, 76, 111, 97, 100, 101, 114};
        register_classdb_global(&global_classdb_array[62], (const char *)data, 15);
    }
    {
        // IP_Unix
        char data[] = {73, 80, 95, 85, 110, 105, 120};
        register_classdb_global(&global_classdb_array[63], (const char *)data, 7);
    }
    {
        // _Geometry
        char data[] = {95, 71, 101, 111, 109, 101, 116, 114, 121};
        register_classdb_global(&global_classdb_array[64], (const char *)data, 9);
    }
    {
        // _ResourceSaver
        char data[] = {95, 82, 101, 115, 111, 117, 114, 99, 101, 83, 97, 118, 101, 114};
        register_classdb_global(&global_classdb_array[65], (const char *)data, 14);
    }
    {
        // _OS
        char data[] = {95, 79, 83};
        register_classdb_global(&global_classdb_array[66], (const char *)data, 3);
    }
    {
        // ResourceSaverPNG
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 83, 97, 118, 101, 114, 80, 78, 71};
        register_classdb_global(&global_classdb_array[67], (const char *)data, 16);
    }
    {
        // _JSON
        char data[] = {95, 74, 83, 79, 78};
        register_classdb_global(&global_classdb_array[68], (const char *)data, 5);
    }
    {
        // _ClassDB
        char data[] = {95, 67, 108, 97, 115, 115, 68, 66};
        register_classdb_global(&global_classdb_array[69], (const char *)data, 8);
    }
    {
        // ProjectSettings
        char data[] = {80, 114, 111, 106, 101, 99, 116, 83, 101, 116, 116, 105, 110, 103, 115};
        register_classdb_global(&global_classdb_array[70], (const char *)data, 15);
    }
    {
        // _Marshalls
        char data[] = {95, 77, 97, 114, 115, 104, 97, 108, 108, 115};
        register_classdb_global(&global_classdb_array[71], (const char *)data, 10);
    }
    {
        // InputMap
        char data[] = {73, 110, 112, 117, 116, 77, 97, 112};
        register_classdb_global(&global_classdb_array[72], (const char *)data, 8);
    }
    {
        // TranslationServer
        char data[] = {84, 114, 97, 110, 115, 108, 97, 116, 105, 111, 110, 83, 101, 114, 118, 101, 114};
        register_classdb_global(&global_classdb_array[73], (const char *)data, 17);
    }
    {
        // Performance
        char data[] = {80, 101, 114, 102, 111, 114, 109, 97, 110, 99, 101};
        register_classdb_global(&global_classdb_array[74], (const char *)data, 11);
    }
    {
        // VisualServer
        char data[] = {86, 105, 115, 117, 97, 108, 83, 101, 114, 118, 101, 114};
        register_classdb_global(&global_classdb_array[75], (const char *)data, 12);
    }
    {
        // InputDefault
        char data[] = {73, 110, 112, 117, 116, 68, 101, 102, 97, 117, 108, 116};
        register_classdb_global(&global_classdb_array[76], (const char *)data, 12);
    }
    {
        // Input
        char data[] = {73, 110, 112, 117, 116};
        register_classdb_global(&global_classdb_array[77], (const char *)data, 5);
    }
    {
        // AudioEffectDelay
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 68, 101, 108, 97, 121};
        register_classdb_global(&global_classdb_array[78], (const char *)data, 16);
    }
    {
        // AudioServer
        char data[] = {65, 117, 100, 105, 111, 83, 101, 114, 118, 101, 114};
        register_classdb_global(&global_classdb_array[79], (const char *)data, 11);
    }
    {
        // ARVRServer
        char data[] = {65, 82, 86, 82, 83, 101, 114, 118, 101, 114};
        register_classdb_global(&global_classdb_array[80], (const char *)data, 10);
    }
    {
        // Expression
        char data[] = {69, 120, 112, 114, 101, 115, 115, 105, 111, 110};
        register_classdb_global(&global_classdb_array[81], (const char *)data, 10);
    }
    {
        // PhysicsServer
        char data[] = {80, 104, 121, 115, 105, 99, 115, 83, 101, 114, 118, 101, 114};
        register_classdb_global(&global_classdb_array[82], (const char *)data, 13);
    }
    {
        // Physics2DServer
        char data[] = {80, 104, 121, 115, 105, 99, 115, 50, 68, 83, 101, 114, 118, 101, 114};
        register_classdb_global(&global_classdb_array[83], (const char *)data, 15);
    }
    {
        // ARVRInterface
        char data[] = {65, 82, 86, 82, 73, 110, 116, 101, 114, 102, 97, 99, 101};
        register_classdb_global(&global_classdb_array[84], (const char *)data, 13);
    }
    {
        // AudioStream
        char data[] = {65, 117, 100, 105, 111, 83, 116, 114, 101, 97, 109};
        register_classdb_global(&global_classdb_array[85], (const char *)data, 11);
    }
    {
        // AudioStreamMicrophone
        char data[] = {65, 117, 100, 105, 111, 83, 116, 114, 101, 97, 109, 77, 105, 99, 114, 111, 112, 104, 111, 110, 101};
        register_classdb_global(&global_classdb_array[86], (const char *)data, 21);
    }
    {
        // AudioStreamRandomPitch
        char data[] = {65, 117, 100, 105, 111, 83, 116, 114, 101, 97, 109, 82, 97, 110, 100, 111, 109, 80, 105, 116, 99, 104};
        register_classdb_global(&global_classdb_array[87], (const char *)data, 22);
    }
    {
        // ARVRPositionalTracker
        char data[] = {65, 82, 86, 82, 80, 111, 115, 105, 116, 105, 111, 110, 97, 108, 84, 114, 97, 99, 107, 101, 114};
        register_classdb_global(&global_classdb_array[88], (const char *)data, 21);
    }
    {
        // AudioStreamPlayback
        char data[] = {65, 117, 100, 105, 111, 83, 116, 114, 101, 97, 109, 80, 108, 97, 121, 98, 97, 99, 107};
        register_classdb_global(&global_classdb_array[89], (const char *)data, 19);
    }
    {
        // AudioEffect
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116};
        register_classdb_global(&global_classdb_array[90], (const char *)data, 11);
    }
    {
        // AudioEffectAmplify
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 65, 109, 112, 108, 105, 102, 121};
        register_classdb_global(&global_classdb_array[91], (const char *)data, 18);
    }
    {
        // AudioEffectEQ
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 69, 81};
        register_classdb_global(&global_classdb_array[92], (const char *)data, 13);
    }
    {
        // AudioBusLayout
        char data[] = {65, 117, 100, 105, 111, 66, 117, 115, 76, 97, 121, 111, 117, 116};
        register_classdb_global(&global_classdb_array[93], (const char *)data, 14);
    }
    {
        // AudioEffectFilter
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 70, 105, 108, 116, 101, 114};
        register_classdb_global(&global_classdb_array[94], (const char *)data, 17);
    }
    {
        // AudioEffectReverb
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 82, 101, 118, 101, 114, 98};
        register_classdb_global(&global_classdb_array[95], (const char *)data, 17);
    }
    {
        // AudioEffectLowPassFilter
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 76, 111, 119, 80, 97, 115, 115, 70, 105, 108, 116, 101, 114};
        register_classdb_global(&global_classdb_array[96], (const char *)data, 24);
    }
    {
        // AudioEffectHighPassFilter
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 72, 105, 103, 104, 80, 97, 115, 115, 70, 105, 108, 116, 101, 114};
        register_classdb_global(&global_classdb_array[97], (const char *)data, 25);
    }
    {
        // AudioEffectEQ10
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 69, 81, 49, 48};
        register_classdb_global(&global_classdb_array[98], (const char *)data, 15);
    }
    {
        // AudioEffectBandLimitFilter
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 66, 97, 110, 100, 76, 105, 109, 105, 116, 70, 105, 108, 116, 101, 114};
        register_classdb_global(&global_classdb_array[99], (const char *)data, 26);
    }
    {
        // AudioEffectEQ6
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 69, 81, 54};
        register_classdb_global(&global_classdb_array[100], (const char *)data, 14);
    }
    {
        // AudioEffectNotchFilter
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 78, 111, 116, 99, 104, 70, 105, 108, 116, 101, 114};
        register_classdb_global(&global_classdb_array[101], (const char *)data, 22);
    }
    {
        // AudioEffectDistortion
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 68, 105, 115, 116, 111, 114, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[102], (const char *)data, 21);
    }
    {
        // AudioEffectLowShelfFilter
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 76, 111, 119, 83, 104, 101, 108, 102, 70, 105, 108, 116, 101, 114};
        register_classdb_global(&global_classdb_array[103], (const char *)data, 25);
    }
    {
        // AudioEffectHighShelfFilter
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 72, 105, 103, 104, 83, 104, 101, 108, 102, 70, 105, 108, 116, 101, 114};
        register_classdb_global(&global_classdb_array[104], (const char *)data, 26);
    }
    {
        // AudioEffectBandPassFilter
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 66, 97, 110, 100, 80, 97, 115, 115, 70, 105, 108, 116, 101, 114};
        register_classdb_global(&global_classdb_array[105], (const char *)data, 25);
    }
    {
        // AudioEffectEQ21
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 69, 81, 50, 49};
        register_classdb_global(&global_classdb_array[106], (const char *)data, 15);
    }
    {
        // AudioEffectStereoEnhance
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 83, 116, 101, 114, 101, 111, 69, 110, 104, 97, 110, 99, 101};
        register_classdb_global(&global_classdb_array[107], (const char *)data, 24);
    }
    {
        // AudioEffectPanner
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 80, 97, 110, 110, 101, 114};
        register_classdb_global(&global_classdb_array[108], (const char *)data, 17);
    }
    {
        // AudioEffectChorus
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 67, 104, 111, 114, 117, 115};
        register_classdb_global(&global_classdb_array[109], (const char *)data, 17);
    }
    {
        // AudioEffectCompressor
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 67, 111, 109, 112, 114, 101, 115, 115, 111, 114};
        register_classdb_global(&global_classdb_array[110], (const char *)data, 21);
    }
    {
        // AudioEffectPhaser
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 80, 104, 97, 115, 101, 114};
        register_classdb_global(&global_classdb_array[111], (const char *)data, 17);
    }
    {
        // AudioEffectLimiter
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 76, 105, 109, 105, 116, 101, 114};
        register_classdb_global(&global_classdb_array[112], (const char *)data, 18);
    }
    {
        // AudioEffectPitchShift
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 80, 105, 116, 99, 104, 83, 104, 105, 102, 116};
        register_classdb_global(&global_classdb_array[113], (const char *)data, 21);
    }
    {
        // Physics2DDirectBodyState
        char data[] = {80, 104, 121, 115, 105, 99, 115, 50, 68, 68, 105, 114, 101, 99, 116, 66, 111, 100, 121, 83, 116, 97, 116, 101};
        register_classdb_global(&global_classdb_array[114], (const char *)data, 24);
    }
    {
        // AudioEffectRecord
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 82, 101, 99, 111, 114, 100};
        register_classdb_global(&global_classdb_array[115], (const char *)data, 17);
    }
    {
        // Physics2DShapeQueryParameters
        char data[] = {80, 104, 121, 115, 105, 99, 115, 50, 68, 83, 104, 97, 112, 101, 81, 117, 101, 114, 121, 80, 97, 114, 97, 109, 101, 116, 101, 114, 115};
        register_classdb_global(&global_classdb_array[116], (const char *)data, 29);
    }
    {
        // Physics2DShapeQueryResult
        char data[] = {80, 104, 121, 115, 105, 99, 115, 50, 68, 83, 104, 97, 112, 101, 81, 117, 101, 114, 121, 82, 101, 115, 117, 108, 116};
        register_classdb_global(&global_classdb_array[117], (const char *)data, 25);
    }
    {
        // Physics2DDirectSpaceState
        char data[] = {80, 104, 121, 115, 105, 99, 115, 50, 68, 68, 105, 114, 101, 99, 116, 83, 112, 97, 99, 101, 83, 116, 97, 116, 101};
        register_classdb_global(&global_classdb_array[118], (const char *)data, 25);
    }
    {
        // Physics2DTestMotionResult
        char data[] = {80, 104, 121, 115, 105, 99, 115, 50, 68, 84, 101, 115, 116, 77, 111, 116, 105, 111, 110, 82, 101, 115, 117, 108, 116};
        register_classdb_global(&global_classdb_array[119], (const char *)data, 25);
    }
    {
        // PhysicsShapeQueryParameters
        char data[] = {80, 104, 121, 115, 105, 99, 115, 83, 104, 97, 112, 101, 81, 117, 101, 114, 121, 80, 97, 114, 97, 109, 101, 116, 101, 114, 115};
        register_classdb_global(&global_classdb_array[120], (const char *)data, 27);
    }
    {
        // PhysicsDirectBodyState
        char data[] = {80, 104, 121, 115, 105, 99, 115, 68, 105, 114, 101, 99, 116, 66, 111, 100, 121, 83, 116, 97, 116, 101};
        register_classdb_global(&global_classdb_array[121], (const char *)data, 22);
    }
    {
        // PhysicsDirectSpaceState
        char data[] = {80, 104, 121, 115, 105, 99, 115, 68, 105, 114, 101, 99, 116, 83, 112, 97, 99, 101, 83, 116, 97, 116, 101};
        register_classdb_global(&global_classdb_array[122], (const char *)data, 23);
    }
    {
        // PhysicsShapeQueryResult
        char data[] = {80, 104, 121, 115, 105, 99, 115, 83, 104, 97, 112, 101, 81, 117, 101, 114, 121, 82, 101, 115, 117, 108, 116};
        register_classdb_global(&global_classdb_array[123], (const char *)data, 23);
    }
    {
        // ResourceFormatLoaderBMFont
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 76, 111, 97, 100, 101, 114, 66, 77, 70, 111, 110, 116};
        register_classdb_global(&global_classdb_array[124], (const char *)data, 26);
    }
    {
        // Node
        char data[] = {78, 111, 100, 101};
        register_classdb_global(&global_classdb_array[125], (const char *)data, 4);
    }
    {
        // ResourceFormatLoaderText
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 76, 111, 97, 100, 101, 114, 84, 101, 120, 116};
        register_classdb_global(&global_classdb_array[126], (const char *)data, 24);
    }
    {
        // ResourceFormatSaverText
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 83, 97, 118, 101, 114, 84, 101, 120, 116};
        register_classdb_global(&global_classdb_array[127], (const char *)data, 23);
    }
    {
        // ResourceFormatLoaderDynamicFont
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 76, 111, 97, 100, 101, 114, 68, 121, 110, 97, 109, 105, 99, 70, 111, 110, 116};
        register_classdb_global(&global_classdb_array[128], (const char *)data, 31);
    }
    {
        // ResourceFormatLoaderStreamTexture
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 76, 111, 97, 100, 101, 114, 83, 116, 114, 101, 97, 109, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[129], (const char *)data, 33);
    }
    {
        // ResourceFormatLoaderTextureLayered
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 76, 111, 97, 100, 101, 114, 84, 101, 120, 116, 117, 114, 101, 76, 97, 121, 101, 114, 101, 100};
        register_classdb_global(&global_classdb_array[130], (const char *)data, 34);
    }
    {
        // ResourceFormatSaverShader
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 83, 97, 118, 101, 114, 83, 104, 97, 100, 101, 114};
        register_classdb_global(&global_classdb_array[131], (const char *)data, 25);
    }
    {
        // ResourceFormatLoaderShader
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 76, 111, 97, 100, 101, 114, 83, 104, 97, 100, 101, 114};
        register_classdb_global(&global_classdb_array[132], (const char *)data, 26);
    }
    {
        // Viewport
        char data[] = {86, 105, 101, 119, 112, 111, 114, 116};
        register_classdb_global(&global_classdb_array[133], (const char *)data, 8);
    }
    {
        // InstancePlaceholder
        char data[] = {73, 110, 115, 116, 97, 110, 99, 101, 80, 108, 97, 99, 101, 104, 111, 108, 100, 101, 114};
        register_classdb_global(&global_classdb_array[134], (const char *)data, 19);
    }
    {
        // World
        char data[] = {87, 111, 114, 108, 100};
        register_classdb_global(&global_classdb_array[135], (const char *)data, 5);
    }
    {
        // World2D
        char data[] = {87, 111, 114, 108, 100, 50, 68};
        register_classdb_global(&global_classdb_array[136], (const char *)data, 7);
    }
    {
        // Texture
        char data[] = {84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[137], (const char *)data, 7);
    }
    {
        // ViewportTexture
        char data[] = {86, 105, 101, 119, 112, 111, 114, 116, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[138], (const char *)data, 15);
    }
    {
        // HTTPRequest
        char data[] = {72, 84, 84, 80, 82, 101, 113, 117, 101, 115, 116};
        register_classdb_global(&global_classdb_array[139], (const char *)data, 11);
    }
    {
        // Timer
        char data[] = {84, 105, 109, 101, 114};
        register_classdb_global(&global_classdb_array[140], (const char *)data, 5);
    }
    {
        // CanvasLayer
        char data[] = {67, 97, 110, 118, 97, 115, 76, 97, 121, 101, 114};
        register_classdb_global(&global_classdb_array[141], (const char *)data, 11);
    }
    {
        // CanvasItem
        char data[] = {67, 97, 110, 118, 97, 115, 73, 116, 101, 109};
        register_classdb_global(&global_classdb_array[142], (const char *)data, 10);
    }
    {
        // Node2D
        char data[] = {78, 111, 100, 101, 50, 68};
        register_classdb_global(&global_classdb_array[143], (const char *)data, 6);
    }
    {
        // ResourcePreloader
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 80, 114, 101, 108, 111, 97, 100, 101, 114};
        register_classdb_global(&global_classdb_array[144], (const char *)data, 17);
    }
    {
        // CanvasModulate
        char data[] = {67, 97, 110, 118, 97, 115, 77, 111, 100, 117, 108, 97, 116, 101};
        register_classdb_global(&global_classdb_array[145], (const char *)data, 14);
    }
    {
        // ButtonGroup
        char data[] = {66, 117, 116, 116, 111, 110, 71, 114, 111, 117, 112};
        register_classdb_global(&global_classdb_array[146], (const char *)data, 11);
    }
    {
        // Control
        char data[] = {67, 111, 110, 116, 114, 111, 108};
        register_classdb_global(&global_classdb_array[147], (const char *)data, 7);
    }
    {
        // GraphNode
        char data[] = {71, 114, 97, 112, 104, 78, 111, 100, 101};
        register_classdb_global(&global_classdb_array[148], (const char *)data, 9);
    }
    {
        // HSplitContainer
        char data[] = {72, 83, 112, 108, 105, 116, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[149], (const char *)data, 15);
    }
    {
        // VSplitContainer
        char data[] = {86, 83, 112, 108, 105, 116, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[150], (const char *)data, 15);
    }
    {
        // ReferenceRect
        char data[] = {82, 101, 102, 101, 114, 101, 110, 99, 101, 82, 101, 99, 116};
        register_classdb_global(&global_classdb_array[151], (const char *)data, 13);
    }
    {
        // SpinBox
        char data[] = {83, 112, 105, 110, 66, 111, 120};
        register_classdb_global(&global_classdb_array[152], (const char *)data, 7);
    }
    {
        // OptionButton
        char data[] = {79, 112, 116, 105, 111, 110, 66, 117, 116, 116, 111, 110};
        register_classdb_global(&global_classdb_array[153], (const char *)data, 12);
    }
    {
        // ColorPicker
        char data[] = {67, 111, 108, 111, 114, 80, 105, 99, 107, 101, 114};
        register_classdb_global(&global_classdb_array[154], (const char *)data, 11);
    }
    {
        // ColorPickerButton
        char data[] = {67, 111, 108, 111, 114, 80, 105, 99, 107, 101, 114, 66, 117, 116, 116, 111, 110};
        register_classdb_global(&global_classdb_array[155], (const char *)data, 17);
    }
    {
        // RichTextLabel
        char data[] = {82, 105, 99, 104, 84, 101, 120, 116, 76, 97, 98, 101, 108};
        register_classdb_global(&global_classdb_array[156], (const char *)data, 13);
    }
    {
        // ViewportContainer
        char data[] = {86, 105, 101, 119, 112, 111, 114, 116, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[157], (const char *)data, 17);
    }
    {
        // PopupDialog
        char data[] = {80, 111, 112, 117, 112, 68, 105, 97, 108, 111, 103};
        register_classdb_global(&global_classdb_array[158], (const char *)data, 11);
    }
    {
        // SplitContainer
        char data[] = {83, 112, 108, 105, 116, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[159], (const char *)data, 14);
    }
    {
        // MarginContainer
        char data[] = {77, 97, 114, 103, 105, 110, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[160], (const char *)data, 15);
    }
    {
        // Theme
        char data[] = {84, 104, 101, 109, 101};
        register_classdb_global(&global_classdb_array[161], (const char *)data, 5);
    }
    {
        // BaseButton
        char data[] = {66, 97, 115, 101, 66, 117, 116, 116, 111, 110};
        register_classdb_global(&global_classdb_array[162], (const char *)data, 10);
    }
    {
        // Button
        char data[] = {66, 117, 116, 116, 111, 110};
        register_classdb_global(&global_classdb_array[163], (const char *)data, 6);
    }
    {
        // ShortCut
        char data[] = {83, 104, 111, 114, 116, 67, 117, 116};
        register_classdb_global(&global_classdb_array[164], (const char *)data, 8);
    }
    {
        // Range
        char data[] = {82, 97, 110, 103, 101};
        register_classdb_global(&global_classdb_array[165], (const char *)data, 5);
    }
    {
        // Label
        char data[] = {76, 97, 98, 101, 108};
        register_classdb_global(&global_classdb_array[166], (const char *)data, 5);
    }
    {
        // NinePatchRect
        char data[] = {78, 105, 110, 101, 80, 97, 116, 99, 104, 82, 101, 99, 116};
        register_classdb_global(&global_classdb_array[167], (const char *)data, 13);
    }
    {
        // Container
        char data[] = {67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[168], (const char *)data, 9);
    }
    {
        // ColorRect
        char data[] = {67, 111, 108, 111, 114, 82, 101, 99, 116};
        register_classdb_global(&global_classdb_array[169], (const char *)data, 9);
    }
    {
        // VScrollBar
        char data[] = {86, 83, 99, 114, 111, 108, 108, 66, 97, 114};
        register_classdb_global(&global_classdb_array[170], (const char *)data, 10);
    }
    {
        // Slider
        char data[] = {83, 108, 105, 100, 101, 114};
        register_classdb_global(&global_classdb_array[171], (const char *)data, 6);
    }
    {
        // ScrollBar
        char data[] = {83, 99, 114, 111, 108, 108, 66, 97, 114};
        register_classdb_global(&global_classdb_array[172], (const char *)data, 9);
    }
    {
        // HScrollBar
        char data[] = {72, 83, 99, 114, 111, 108, 108, 66, 97, 114};
        register_classdb_global(&global_classdb_array[173], (const char *)data, 10);
    }
    {
        // ProgressBar
        char data[] = {80, 114, 111, 103, 114, 101, 115, 115, 66, 97, 114};
        register_classdb_global(&global_classdb_array[174], (const char *)data, 11);
    }
    {
        // HSlider
        char data[] = {72, 83, 108, 105, 100, 101, 114};
        register_classdb_global(&global_classdb_array[175], (const char *)data, 7);
    }
    {
        // CheckButton
        char data[] = {67, 104, 101, 99, 107, 66, 117, 116, 116, 111, 110};
        register_classdb_global(&global_classdb_array[176], (const char *)data, 11);
    }
    {
        // PopupPanel
        char data[] = {80, 111, 112, 117, 112, 80, 97, 110, 101, 108};
        register_classdb_global(&global_classdb_array[177], (const char *)data, 10);
    }
    {
        // ToolButton
        char data[] = {84, 111, 111, 108, 66, 117, 116, 116, 111, 110};
        register_classdb_global(&global_classdb_array[178], (const char *)data, 10);
    }
    {
        // VSlider
        char data[] = {86, 83, 108, 105, 100, 101, 114};
        register_classdb_global(&global_classdb_array[179], (const char *)data, 7);
    }
    {
        // MenuButton
        char data[] = {77, 101, 110, 117, 66, 117, 116, 116, 111, 110};
        register_classdb_global(&global_classdb_array[180], (const char *)data, 10);
    }
    {
        // Popup
        char data[] = {80, 111, 112, 117, 112};
        register_classdb_global(&global_classdb_array[181], (const char *)data, 5);
    }
    {
        // LinkButton
        char data[] = {76, 105, 110, 107, 66, 117, 116, 116, 111, 110};
        register_classdb_global(&global_classdb_array[182], (const char *)data, 10);
    }
    {
        // CheckBox
        char data[] = {67, 104, 101, 99, 107, 66, 111, 120};
        register_classdb_global(&global_classdb_array[183], (const char *)data, 8);
    }
    {
        // Panel
        char data[] = {80, 97, 110, 101, 108};
        register_classdb_global(&global_classdb_array[184], (const char *)data, 5);
    }
    {
        // TextureRect
        char data[] = {84, 101, 120, 116, 117, 114, 101, 82, 101, 99, 116};
        register_classdb_global(&global_classdb_array[185], (const char *)data, 11);
    }
    {
        // CenterContainer
        char data[] = {67, 101, 110, 116, 101, 114, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[186], (const char *)data, 15);
    }
    {
        // PanelContainer
        char data[] = {80, 97, 110, 101, 108, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[187], (const char *)data, 14);
    }
    {
        // VBoxContainer
        char data[] = {86, 66, 111, 120, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[188], (const char *)data, 13);
    }
    {
        // GridContainer
        char data[] = {71, 114, 105, 100, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[189], (const char *)data, 13);
    }
    {
        // ScrollContainer
        char data[] = {83, 99, 114, 111, 108, 108, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[190], (const char *)data, 15);
    }
    {
        // TextureProgress
        char data[] = {84, 101, 120, 116, 117, 114, 101, 80, 114, 111, 103, 114, 101, 115, 115};
        register_classdb_global(&global_classdb_array[191], (const char *)data, 15);
    }
    {
        // Tabs
        char data[] = {84, 97, 98, 115};
        register_classdb_global(&global_classdb_array[192], (const char *)data, 4);
    }
    {
        // TabContainer
        char data[] = {84, 97, 98, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[193], (const char *)data, 12);
    }
    {
        // BitMap
        char data[] = {66, 105, 116, 77, 97, 112};
        register_classdb_global(&global_classdb_array[194], (const char *)data, 6);
    }
    {
        // VSeparator
        char data[] = {86, 83, 101, 112, 97, 114, 97, 116, 111, 114};
        register_classdb_global(&global_classdb_array[195], (const char *)data, 10);
    }
    {
        // HSeparator
        char data[] = {72, 83, 101, 112, 97, 114, 97, 116, 111, 114};
        register_classdb_global(&global_classdb_array[196], (const char *)data, 10);
    }
    {
        // Separator
        char data[] = {83, 101, 112, 97, 114, 97, 116, 111, 114};
        register_classdb_global(&global_classdb_array[197], (const char *)data, 9);
    }
    {
        // TextureButton
        char data[] = {84, 101, 120, 116, 117, 114, 101, 66, 117, 116, 116, 111, 110};
        register_classdb_global(&global_classdb_array[198], (const char *)data, 13);
    }
    {
        // HBoxContainer
        char data[] = {72, 66, 111, 120, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[199], (const char *)data, 13);
    }
    {
        // BoxContainer
        char data[] = {66, 111, 120, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[200], (const char *)data, 12);
    }
    {
        // ItemList
        char data[] = {73, 116, 101, 109, 76, 105, 115, 116};
        register_classdb_global(&global_classdb_array[201], (const char *)data, 8);
    }
    {
        // LineEdit
        char data[] = {76, 105, 110, 101, 69, 100, 105, 116};
        register_classdb_global(&global_classdb_array[202], (const char *)data, 8);
    }
    {
        // TextEdit
        char data[] = {84, 101, 120, 116, 69, 100, 105, 116};
        register_classdb_global(&global_classdb_array[203], (const char *)data, 8);
    }
    {
        // WindowDialog
        char data[] = {87, 105, 110, 100, 111, 119, 68, 105, 97, 108, 111, 103};
        register_classdb_global(&global_classdb_array[204], (const char *)data, 12);
    }
    {
        // VideoPlayer
        char data[] = {86, 105, 100, 101, 111, 80, 108, 97, 121, 101, 114};
        register_classdb_global(&global_classdb_array[205], (const char *)data, 11);
    }
    {
        // VideoStream
        char data[] = {86, 105, 100, 101, 111, 83, 116, 114, 101, 97, 109};
        register_classdb_global(&global_classdb_array[206], (const char *)data, 11);
    }
    {
        // AcceptDialog
        char data[] = {65, 99, 99, 101, 112, 116, 68, 105, 97, 108, 111, 103};
        register_classdb_global(&global_classdb_array[207], (const char *)data, 12);
    }
    {
        // ConfirmationDialog
        char data[] = {67, 111, 110, 102, 105, 114, 109, 97, 116, 105, 111, 110, 68, 105, 97, 108, 111, 103};
        register_classdb_global(&global_classdb_array[208], (const char *)data, 18);
    }
    {
        // FileDialog
        char data[] = {70, 105, 108, 101, 68, 105, 97, 108, 111, 103};
        register_classdb_global(&global_classdb_array[209], (const char *)data, 10);
    }
    {
        // PopupMenu
        char data[] = {80, 111, 112, 117, 112, 77, 101, 110, 117};
        register_classdb_global(&global_classdb_array[210], (const char *)data, 9);
    }
    {
        // Tree
        char data[] = {84, 114, 101, 101};
        register_classdb_global(&global_classdb_array[211], (const char *)data, 4);
    }
    {
        // TreeItem
        char data[] = {84, 114, 101, 101, 73, 116, 101, 109};
        register_classdb_global(&global_classdb_array[212], (const char *)data, 8);
    }
    {
        // GraphEdit
        char data[] = {71, 114, 97, 112, 104, 69, 100, 105, 116};
        register_classdb_global(&global_classdb_array[213], (const char *)data, 9);
    }
    {
        // Spatial
        char data[] = {83, 112, 97, 116, 105, 97, 108};
        register_classdb_global(&global_classdb_array[214], (const char *)data, 7);
    }
    {
        // SpatialGizmo
        char data[] = {83, 112, 97, 116, 105, 97, 108, 71, 105, 122, 109, 111};
        register_classdb_global(&global_classdb_array[215], (const char *)data, 12);
    }
    {
        // Skeleton
        char data[] = {83, 107, 101, 108, 101, 116, 111, 110};
        register_classdb_global(&global_classdb_array[216], (const char *)data, 8);
    }
    {
        // AnimationPlayer
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 80, 108, 97, 121, 101, 114};
        register_classdb_global(&global_classdb_array[217], (const char *)data, 15);
    }
    {
        // Tween
        char data[] = {84, 119, 101, 101, 110};
        register_classdb_global(&global_classdb_array[218], (const char *)data, 5);
    }
    {
        // VisualInstance
        char data[] = {86, 105, 115, 117, 97, 108, 73, 110, 115, 116, 97, 110, 99, 101};
        register_classdb_global(&global_classdb_array[219], (const char *)data, 14);
    }
    {
        // Camera
        char data[] = {67, 97, 109, 101, 114, 97};
        register_classdb_global(&global_classdb_array[220], (const char *)data, 6);
    }
    {
        // GeometryInstance
        char data[] = {71, 101, 111, 109, 101, 116, 114, 121, 73, 110, 115, 116, 97, 110, 99, 101};
        register_classdb_global(&global_classdb_array[221], (const char *)data, 16);
    }
    {
        // OmniLight
        char data[] = {79, 109, 110, 105, 76, 105, 103, 104, 116};
        register_classdb_global(&global_classdb_array[222], (const char *)data, 9);
    }
    {
        // ReflectionProbe
        char data[] = {82, 101, 102, 108, 101, 99, 116, 105, 111, 110, 80, 114, 111, 98, 101};
        register_classdb_global(&global_classdb_array[223], (const char *)data, 15);
    }
    {
        // SpotLight
        char data[] = {83, 112, 111, 116, 76, 105, 103, 104, 116};
        register_classdb_global(&global_classdb_array[224], (const char *)data, 9);
    }
    {
        // Environment
        char data[] = {69, 110, 118, 105, 114, 111, 110, 109, 101, 110, 116};
        register_classdb_global(&global_classdb_array[225], (const char *)data, 11);
    }
    {
        // ClippedCamera
        char data[] = {67, 108, 105, 112, 112, 101, 100, 67, 97, 109, 101, 114, 97};
        register_classdb_global(&global_classdb_array[226], (const char *)data, 13);
    }
    {
        // ARVROrigin
        char data[] = {65, 82, 86, 82, 79, 114, 105, 103, 105, 110};
        register_classdb_global(&global_classdb_array[227], (const char *)data, 10);
    }
    {
        // MeshInstance
        char data[] = {77, 101, 115, 104, 73, 110, 115, 116, 97, 110, 99, 101};
        register_classdb_global(&global_classdb_array[228], (const char *)data, 12);
    }
    {
        // InterpolatedCamera
        char data[] = {73, 110, 116, 101, 114, 112, 111, 108, 97, 116, 101, 100, 67, 97, 109, 101, 114, 97};
        register_classdb_global(&global_classdb_array[229], (const char *)data, 18);
    }
    {
        // ARVRAnchor
        char data[] = {65, 82, 86, 82, 65, 110, 99, 104, 111, 114};
        register_classdb_global(&global_classdb_array[230], (const char *)data, 10);
    }
    {
        // ARVRController
        char data[] = {65, 82, 86, 82, 67, 111, 110, 116, 114, 111, 108, 108, 101, 114};
        register_classdb_global(&global_classdb_array[231], (const char *)data, 14);
    }
    {
        // ARVRCamera
        char data[] = {65, 82, 86, 82, 67, 97, 109, 101, 114, 97};
        register_classdb_global(&global_classdb_array[232], (const char *)data, 10);
    }
    {
        // Listener
        char data[] = {76, 105, 115, 116, 101, 110, 101, 114};
        register_classdb_global(&global_classdb_array[233], (const char *)data, 8);
    }
    {
        // SpriteBase3D
        char data[] = {83, 112, 114, 105, 116, 101, 66, 97, 115, 101, 51, 68};
        register_classdb_global(&global_classdb_array[234], (const char *)data, 12);
    }
    {
        // Mesh
        char data[] = {77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[235], (const char *)data, 4);
    }
    {
        // ImmediateGeometry
        char data[] = {73, 109, 109, 101, 100, 105, 97, 116, 101, 71, 101, 111, 109, 101, 116, 114, 121};
        register_classdb_global(&global_classdb_array[236], (const char *)data, 17);
    }
    {
        // SpriteFrames
        char data[] = {83, 112, 114, 105, 116, 101, 70, 114, 97, 109, 101, 115};
        register_classdb_global(&global_classdb_array[237], (const char *)data, 12);
    }
    {
        // Light
        char data[] = {76, 105, 103, 104, 116};
        register_classdb_global(&global_classdb_array[238], (const char *)data, 5);
    }
    {
        // Sprite3D
        char data[] = {83, 112, 114, 105, 116, 101, 51, 68};
        register_classdb_global(&global_classdb_array[239], (const char *)data, 8);
    }
    {
        // AnimatedSprite3D
        char data[] = {65, 110, 105, 109, 97, 116, 101, 100, 83, 112, 114, 105, 116, 101, 51, 68};
        register_classdb_global(&global_classdb_array[240], (const char *)data, 16);
    }
    {
        // DirectionalLight
        char data[] = {68, 105, 114, 101, 99, 116, 105, 111, 110, 97, 108, 76, 105, 103, 104, 116};
        register_classdb_global(&global_classdb_array[241], (const char *)data, 16);
    }
    {
        // GIProbe
        char data[] = {71, 73, 80, 114, 111, 98, 101};
        register_classdb_global(&global_classdb_array[242], (const char *)data, 7);
    }
    {
        // GIProbeData
        char data[] = {71, 73, 80, 114, 111, 98, 101, 68, 97, 116, 97};
        register_classdb_global(&global_classdb_array[243], (const char *)data, 11);
    }
    {
        // BakedLightmap
        char data[] = {66, 97, 107, 101, 100, 76, 105, 103, 104, 116, 109, 97, 112};
        register_classdb_global(&global_classdb_array[244], (const char *)data, 13);
    }
    {
        // BakedLightmapData
        char data[] = {66, 97, 107, 101, 100, 76, 105, 103, 104, 116, 109, 97, 112, 68, 97, 116, 97};
        register_classdb_global(&global_classdb_array[245], (const char *)data, 17);
    }
    {
        // AnimationTreePlayer
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 84, 114, 101, 101, 80, 108, 97, 121, 101, 114};
        register_classdb_global(&global_classdb_array[246], (const char *)data, 19);
    }
    {
        // Particles
        char data[] = {80, 97, 114, 116, 105, 99, 108, 101, 115};
        register_classdb_global(&global_classdb_array[247], (const char *)data, 9);
    }
    {
        // CPUParticles
        char data[] = {67, 80, 85, 80, 97, 114, 116, 105, 99, 108, 101, 115};
        register_classdb_global(&global_classdb_array[248], (const char *)data, 12);
    }
    {
        // Gradient
        char data[] = {71, 114, 97, 100, 105, 101, 110, 116};
        register_classdb_global(&global_classdb_array[249], (const char *)data, 8);
    }
    {
        // Curve
        char data[] = {67, 117, 114, 118, 101};
        register_classdb_global(&global_classdb_array[250], (const char *)data, 5);
    }
    {
        // NavigationMesh
        char data[] = {78, 97, 118, 105, 103, 97, 116, 105, 111, 110, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[251], (const char *)data, 14);
    }
    {
        // Position3D
        char data[] = {80, 111, 115, 105, 116, 105, 111, 110, 51, 68};
        register_classdb_global(&global_classdb_array[252], (const char *)data, 10);
    }
    {
        // NavigationMeshInstance
        char data[] = {78, 97, 118, 105, 103, 97, 116, 105, 111, 110, 77, 101, 115, 104, 73, 110, 115, 116, 97, 110, 99, 101};
        register_classdb_global(&global_classdb_array[253], (const char *)data, 22);
    }
    {
        // AnimationTree
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 84, 114, 101, 101};
        register_classdb_global(&global_classdb_array[254], (const char *)data, 13);
    }
    {
        // RootMotionView
        char data[] = {82, 111, 111, 116, 77, 111, 116, 105, 111, 110, 86, 105, 101, 119};
        register_classdb_global(&global_classdb_array[255], (const char *)data, 14);
    }
    {
        // Navigation
        char data[] = {78, 97, 118, 105, 103, 97, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[256], (const char *)data, 10);
    }
    {
        // AnimationRootNode
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 82, 111, 111, 116, 78, 111, 100, 101};
        register_classdb_global(&global_classdb_array[257], (const char *)data, 17);
    }
    {
        // AnimationNodeBlendTree
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 66, 108, 101, 110, 100, 84, 114, 101, 101};
        register_classdb_global(&global_classdb_array[258], (const char *)data, 22);
    }
    {
        // AnimationNodeBlendSpace1D
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 66, 108, 101, 110, 100, 83, 112, 97, 99, 101, 49, 68};
        register_classdb_global(&global_classdb_array[259], (const char *)data, 25);
    }
    {
        // AnimationNode
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101};
        register_classdb_global(&global_classdb_array[260], (const char *)data, 13);
    }
    {
        // Area
        char data[] = {65, 114, 101, 97};
        register_classdb_global(&global_classdb_array[261], (const char *)data, 4);
    }
    {
        // AnimationNodeBlendSpace2D
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 66, 108, 101, 110, 100, 83, 112, 97, 99, 101, 50, 68};
        register_classdb_global(&global_classdb_array[262], (const char *)data, 25);
    }
    {
        // AnimationNodeStateMachine
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 83, 116, 97, 116, 101, 77, 97, 99, 104, 105, 110, 101};
        register_classdb_global(&global_classdb_array[263], (const char *)data, 25);
    }
    {
        // AnimationNodeStateMachineTransition
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 83, 116, 97, 116, 101, 77, 97, 99, 104, 105, 110, 101, 84, 114, 97, 110, 115, 105, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[264], (const char *)data, 35);
    }
    {
        // AnimationNodeStateMachinePlayback
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 83, 116, 97, 116, 101, 77, 97, 99, 104, 105, 110, 101, 80, 108, 97, 121, 98, 97, 99, 107};
        register_classdb_global(&global_classdb_array[265], (const char *)data, 33);
    }
    {
        // AnimationNodeBlend2
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 66, 108, 101, 110, 100, 50};
        register_classdb_global(&global_classdb_array[266], (const char *)data, 19);
    }
    {
        // AnimationNodeOutput
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 79, 117, 116, 112, 117, 116};
        register_classdb_global(&global_classdb_array[267], (const char *)data, 19);
    }
    {
        // AnimationNodeAdd2
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 65, 100, 100, 50};
        register_classdb_global(&global_classdb_array[268], (const char *)data, 17);
    }
    {
        // AnimationNodeOneShot
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 79, 110, 101, 83, 104, 111, 116};
        register_classdb_global(&global_classdb_array[269], (const char *)data, 20);
    }
    {
        // AnimationNodeAnimation
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 65, 110, 105, 109, 97, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[270], (const char *)data, 22);
    }
    {
        // AnimationNodeAdd3
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 65, 100, 100, 51};
        register_classdb_global(&global_classdb_array[271], (const char *)data, 17);
    }
    {
        // AnimationNodeTimeScale
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 84, 105, 109, 101, 83, 99, 97, 108, 101};
        register_classdb_global(&global_classdb_array[272], (const char *)data, 22);
    }
    {
        // AnimationNodeTimeSeek
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 84, 105, 109, 101, 83, 101, 101, 107};
        register_classdb_global(&global_classdb_array[273], (const char *)data, 21);
    }
    {
        // AnimationNodeBlend3
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 66, 108, 101, 110, 100, 51};
        register_classdb_global(&global_classdb_array[274], (const char *)data, 19);
    }
    {
        // AnimationNodeTransition
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 84, 114, 97, 110, 115, 105, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[275], (const char *)data, 23);
    }
    {
        // PhysicsBody
        char data[] = {80, 104, 121, 115, 105, 99, 115, 66, 111, 100, 121};
        register_classdb_global(&global_classdb_array[276], (const char *)data, 11);
    }
    {
        // CollisionObject
        char data[] = {67, 111, 108, 108, 105, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116};
        register_classdb_global(&global_classdb_array[277], (const char *)data, 15);
    }
    {
        // PhysicsMaterial
        char data[] = {80, 104, 121, 115, 105, 99, 115, 77, 97, 116, 101, 114, 105, 97, 108};
        register_classdb_global(&global_classdb_array[278], (const char *)data, 15);
    }
    {
        // StaticBody
        char data[] = {83, 116, 97, 116, 105, 99, 66, 111, 100, 121};
        register_classdb_global(&global_classdb_array[279], (const char *)data, 10);
    }
    {
        // RigidBody
        char data[] = {82, 105, 103, 105, 100, 66, 111, 100, 121};
        register_classdb_global(&global_classdb_array[280], (const char *)data, 9);
    }
    {
        // KinematicCollision
        char data[] = {75, 105, 110, 101, 109, 97, 116, 105, 99, 67, 111, 108, 108, 105, 115, 105, 111, 110};
        register_classdb_global(&global_classdb_array[281], (const char *)data, 18);
    }
    {
        // SpringArm
        char data[] = {83, 112, 114, 105, 110, 103, 65, 114, 109};
        register_classdb_global(&global_classdb_array[282], (const char *)data, 9);
    }
    {
        // Shape
        char data[] = {83, 104, 97, 112, 101};
        register_classdb_global(&global_classdb_array[283], (const char *)data, 5);
    }
    {
        // KinematicBody
        char data[] = {75, 105, 110, 101, 109, 97, 116, 105, 99, 66, 111, 100, 121};
        register_classdb_global(&global_classdb_array[284], (const char *)data, 13);
    }
    {
        // SoftBody
        char data[] = {83, 111, 102, 116, 66, 111, 100, 121};
        register_classdb_global(&global_classdb_array[285], (const char *)data, 8);
    }
    {
        // PhysicalBone
        char data[] = {80, 104, 121, 115, 105, 99, 97, 108, 66, 111, 110, 101};
        register_classdb_global(&global_classdb_array[286], (const char *)data, 12);
    }
    {
        // SkeletonIK
        char data[] = {83, 107, 101, 108, 101, 116, 111, 110, 73, 75};
        register_classdb_global(&global_classdb_array[287], (const char *)data, 10);
    }
    {
        // VehicleWheel
        char data[] = {86, 101, 104, 105, 99, 108, 101, 87, 104, 101, 101, 108};
        register_classdb_global(&global_classdb_array[288], (const char *)data, 12);
    }
    {
        // BoneAttachment
        char data[] = {66, 111, 110, 101, 65, 116, 116, 97, 99, 104, 109, 101, 110, 116};
        register_classdb_global(&global_classdb_array[289], (const char *)data, 14);
    }
    {
        // VehicleBody
        char data[] = {86, 101, 104, 105, 99, 108, 101, 66, 111, 100, 121};
        register_classdb_global(&global_classdb_array[290], (const char *)data, 11);
    }
    {
        // CollisionShape
        char data[] = {67, 111, 108, 108, 105, 115, 105, 111, 110, 83, 104, 97, 112, 101};
        register_classdb_global(&global_classdb_array[291], (const char *)data, 14);
    }
    {
        // RayCast
        char data[] = {82, 97, 121, 67, 97, 115, 116};
        register_classdb_global(&global_classdb_array[292], (const char *)data, 7);
    }
    {
        // CollisionPolygon
        char data[] = {67, 111, 108, 108, 105, 115, 105, 111, 110, 80, 111, 108, 121, 103, 111, 110};
        register_classdb_global(&global_classdb_array[293], (const char *)data, 16);
    }
    {
        // ProximityGroup
        char data[] = {80, 114, 111, 120, 105, 109, 105, 116, 121, 71, 114, 111, 117, 112};
        register_classdb_global(&global_classdb_array[294], (const char *)data, 14);
    }
    {
        // Curve3D
        char data[] = {67, 117, 114, 118, 101, 51, 68};
        register_classdb_global(&global_classdb_array[295], (const char *)data, 7);
    }
    {
        // MultiMesh
        char data[] = {77, 117, 108, 116, 105, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[296], (const char *)data, 9);
    }
    {
        // Path
        char data[] = {80, 97, 116, 104};
        register_classdb_global(&global_classdb_array[297], (const char *)data, 4);
    }
    {
        // MultiMeshInstance
        char data[] = {77, 117, 108, 116, 105, 77, 101, 115, 104, 73, 110, 115, 116, 97, 110, 99, 101};
        register_classdb_global(&global_classdb_array[298], (const char *)data, 17);
    }
    {
        // WorldEnvironment
        char data[] = {87, 111, 114, 108, 100, 69, 110, 118, 105, 114, 111, 110, 109, 101, 110, 116};
        register_classdb_global(&global_classdb_array[299], (const char *)data, 16);
    }
    {
        // VisibilityNotifier
        char data[] = {86, 105, 115, 105, 98, 105, 108, 105, 116, 121, 78, 111, 116, 105, 102, 105, 101, 114};
        register_classdb_global(&global_classdb_array[300], (const char *)data, 18);
    }
    {
        // RemoteTransform
        char data[] = {82, 101, 109, 111, 116, 101, 84, 114, 97, 110, 115, 102, 111, 114, 109};
        register_classdb_global(&global_classdb_array[301], (const char *)data, 15);
    }
    {
        // PathFollow
        char data[] = {80, 97, 116, 104, 70, 111, 108, 108, 111, 119};
        register_classdb_global(&global_classdb_array[302], (const char *)data, 10);
    }
    {
        // VisibilityEnabler
        char data[] = {86, 105, 115, 105, 98, 105, 108, 105, 116, 121, 69, 110, 97, 98, 108, 101, 114};
        register_classdb_global(&global_classdb_array[303], (const char *)data, 17);
    }
    {
        // Joint
        char data[] = {74, 111, 105, 110, 116};
        register_classdb_global(&global_classdb_array[304], (const char *)data, 5);
    }
    {
        // PinJoint
        char data[] = {80, 105, 110, 74, 111, 105, 110, 116};
        register_classdb_global(&global_classdb_array[305], (const char *)data, 8);
    }
    {
        // HingeJoint
        char data[] = {72, 105, 110, 103, 101, 74, 111, 105, 110, 116};
        register_classdb_global(&global_classdb_array[306], (const char *)data, 10);
    }
    {
        // SliderJoint
        char data[] = {83, 108, 105, 100, 101, 114, 74, 111, 105, 110, 116};
        register_classdb_global(&global_classdb_array[307], (const char *)data, 11);
    }
    {
        // ConeTwistJoint
        char data[] = {67, 111, 110, 101, 84, 119, 105, 115, 116, 74, 111, 105, 110, 116};
        register_classdb_global(&global_classdb_array[308], (const char *)data, 14);
    }
    {
        // Generic6DOFJoint
        char data[] = {71, 101, 110, 101, 114, 105, 99, 54, 68, 79, 70, 74, 111, 105, 110, 116};
        register_classdb_global(&global_classdb_array[309], (const char *)data, 16);
    }
    {
        // VisualShader
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114};
        register_classdb_global(&global_classdb_array[310], (const char *)data, 12);
    }
    {
        // Shader
        char data[] = {83, 104, 97, 100, 101, 114};
        register_classdb_global(&global_classdb_array[311], (const char *)data, 6);
    }
    {
        // MeshLibrary
        char data[] = {77, 101, 115, 104, 76, 105, 98, 114, 97, 114, 121};
        register_classdb_global(&global_classdb_array[312], (const char *)data, 11);
    }
    {
        // VisualShaderNode
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101};
        register_classdb_global(&global_classdb_array[313], (const char *)data, 16);
    }
    {
        // VisualShaderNodeTransformMult
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 84, 114, 97, 110, 115, 102, 111, 114, 109, 77, 117, 108, 116};
        register_classdb_global(&global_classdb_array[314], (const char *)data, 29);
    }
    {
        // VisualShaderNodeVec3Constant
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 86, 101, 99, 51, 67, 111, 110, 115, 116, 97, 110, 116};
        register_classdb_global(&global_classdb_array[315], (const char *)data, 28);
    }
    {
        // VisualShaderNodeColorOp
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 67, 111, 108, 111, 114, 79, 112};
        register_classdb_global(&global_classdb_array[316], (const char *)data, 23);
    }
    {
        // VisualShaderNodeVectorOp
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 86, 101, 99, 116, 111, 114, 79, 112};
        register_classdb_global(&global_classdb_array[317], (const char *)data, 24);
    }
    {
        // VisualShaderNodeOutput
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 79, 117, 116, 112, 117, 116};
        register_classdb_global(&global_classdb_array[318], (const char *)data, 22);
    }
    {
        // VisualShaderNodeScalarConstant
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 83, 99, 97, 108, 97, 114, 67, 111, 110, 115, 116, 97, 110, 116};
        register_classdb_global(&global_classdb_array[319], (const char *)data, 30);
    }
    {
        // VisualShaderNodeInput
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 73, 110, 112, 117, 116};
        register_classdb_global(&global_classdb_array[320], (const char *)data, 21);
    }
    {
        // VisualShaderNodeScalarOp
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 83, 99, 97, 108, 97, 114, 79, 112};
        register_classdb_global(&global_classdb_array[321], (const char *)data, 24);
    }
    {
        // VisualShaderNodeTransformConstant
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 84, 114, 97, 110, 115, 102, 111, 114, 109, 67, 111, 110, 115, 116, 97, 110, 116};
        register_classdb_global(&global_classdb_array[322], (const char *)data, 33);
    }
    {
        // VisualShaderNodeColorConstant
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 67, 111, 108, 111, 114, 67, 111, 110, 115, 116, 97, 110, 116};
        register_classdb_global(&global_classdb_array[323], (const char *)data, 29);
    }
    {
        // VisualShaderNodeTransformCompose
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 84, 114, 97, 110, 115, 102, 111, 114, 109, 67, 111, 109, 112, 111, 115, 101};
        register_classdb_global(&global_classdb_array[324], (const char *)data, 32);
    }
    {
        // VisualShaderNodeVectorLen
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 86, 101, 99, 116, 111, 114, 76, 101, 110};
        register_classdb_global(&global_classdb_array[325], (const char *)data, 25);
    }
    {
        // VisualShaderNodeDotProduct
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 68, 111, 116, 80, 114, 111, 100, 117, 99, 116};
        register_classdb_global(&global_classdb_array[326], (const char *)data, 26);
    }
    {
        // VisualShaderNodeVectorInterp
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 86, 101, 99, 116, 111, 114, 73, 110, 116, 101, 114, 112};
        register_classdb_global(&global_classdb_array[327], (const char *)data, 28);
    }
    {
        // VisualShaderNodeTransformVecMult
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 84, 114, 97, 110, 115, 102, 111, 114, 109, 86, 101, 99, 77, 117, 108, 116};
        register_classdb_global(&global_classdb_array[328], (const char *)data, 32);
    }
    {
        // VisualShaderNodeScalarFunc
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 83, 99, 97, 108, 97, 114, 70, 117, 110, 99};
        register_classdb_global(&global_classdb_array[329], (const char *)data, 26);
    }
    {
        // VisualShaderNodeTexture
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[330], (const char *)data, 23);
    }
    {
        // VisualShaderNodeScalarInterp
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 83, 99, 97, 108, 97, 114, 73, 110, 116, 101, 114, 112};
        register_classdb_global(&global_classdb_array[331], (const char *)data, 28);
    }
    {
        // VisualShaderNodeVectorCompose
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 86, 101, 99, 116, 111, 114, 67, 111, 109, 112, 111, 115, 101};
        register_classdb_global(&global_classdb_array[332], (const char *)data, 29);
    }
    {
        // VisualShaderNodeVectorDecompose
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 86, 101, 99, 116, 111, 114, 68, 101, 99, 111, 109, 112, 111, 115, 101};
        register_classdb_global(&global_classdb_array[333], (const char *)data, 31);
    }
    {
        // VisualShaderNodeTransformDecompose
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 84, 114, 97, 110, 115, 102, 111, 114, 109, 68, 101, 99, 111, 109, 112, 111, 115, 101};
        register_classdb_global(&global_classdb_array[334], (const char *)data, 34);
    }
    {
        // VisualShaderNodeVectorFunc
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 86, 101, 99, 116, 111, 114, 70, 117, 110, 99};
        register_classdb_global(&global_classdb_array[335], (const char *)data, 26);
    }
    {
        // CubeMap
        char data[] = {67, 117, 98, 101, 77, 97, 112};
        register_classdb_global(&global_classdb_array[336], (const char *)data, 7);
    }
    {
        // VisualShaderNodeTransformUniform
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 84, 114, 97, 110, 115, 102, 111, 114, 109, 85, 110, 105, 102, 111, 114, 109};
        register_classdb_global(&global_classdb_array[337], (const char *)data, 32);
    }
    {
        // VisualShaderNodeColorUniform
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 67, 111, 108, 111, 114, 85, 110, 105, 102, 111, 114, 109};
        register_classdb_global(&global_classdb_array[338], (const char *)data, 28);
    }
    {
        // VisualShaderNodeScalarUniform
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 83, 99, 97, 108, 97, 114, 85, 110, 105, 102, 111, 114, 109};
        register_classdb_global(&global_classdb_array[339], (const char *)data, 29);
    }
    {
        // VisualShaderNodeUniform
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 85, 110, 105, 102, 111, 114, 109};
        register_classdb_global(&global_classdb_array[340], (const char *)data, 23);
    }
    {
        // VisualShaderNodeTextureUniform
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 84, 101, 120, 116, 117, 114, 101, 85, 110, 105, 102, 111, 114, 109};
        register_classdb_global(&global_classdb_array[341], (const char *)data, 30);
    }
    {
        // VisualShaderNodeCubeMapUniform
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 67, 117, 98, 101, 77, 97, 112, 85, 110, 105, 102, 111, 114, 109};
        register_classdb_global(&global_classdb_array[342], (const char *)data, 30);
    }
    {
        // VisualShaderNodeVec3Uniform
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 86, 101, 99, 51, 85, 110, 105, 102, 111, 114, 109};
        register_classdb_global(&global_classdb_array[343], (const char *)data, 27);
    }
    {
        // Material
        char data[] = {77, 97, 116, 101, 114, 105, 97, 108};
        register_classdb_global(&global_classdb_array[344], (const char *)data, 8);
    }
    {
        // VisualShaderNodeCubeMap
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 67, 117, 98, 101, 77, 97, 112};
        register_classdb_global(&global_classdb_array[345], (const char *)data, 23);
    }
    {
        // CanvasItemMaterial
        char data[] = {67, 97, 110, 118, 97, 115, 73, 116, 101, 109, 77, 97, 116, 101, 114, 105, 97, 108};
        register_classdb_global(&global_classdb_array[346], (const char *)data, 18);
    }
    {
        // CPUParticles2D
        char data[] = {67, 80, 85, 80, 97, 114, 116, 105, 99, 108, 101, 115, 50, 68};
        register_classdb_global(&global_classdb_array[347], (const char *)data, 14);
    }
    {
        // ShaderMaterial
        char data[] = {83, 104, 97, 100, 101, 114, 77, 97, 116, 101, 114, 105, 97, 108};
        register_classdb_global(&global_classdb_array[348], (const char *)data, 14);
    }
    {
        // Particles2D
        char data[] = {80, 97, 114, 116, 105, 99, 108, 101, 115, 50, 68};
        register_classdb_global(&global_classdb_array[349], (const char *)data, 11);
    }
    {
        // Sprite
        char data[] = {83, 112, 114, 105, 116, 101};
        register_classdb_global(&global_classdb_array[350], (const char *)data, 6);
    }
    {
        // AnimatedSprite
        char data[] = {65, 110, 105, 109, 97, 116, 101, 100, 83, 112, 114, 105, 116, 101};
        register_classdb_global(&global_classdb_array[351], (const char *)data, 14);
    }
    {
        // Position2D
        char data[] = {80, 111, 115, 105, 116, 105, 111, 110, 50, 68};
        register_classdb_global(&global_classdb_array[352], (const char *)data, 10);
    }
    {
        // Line2D
        char data[] = {76, 105, 110, 101, 50, 68};
        register_classdb_global(&global_classdb_array[353], (const char *)data, 6);
    }
    {
        // PhysicsBody2D
        char data[] = {80, 104, 121, 115, 105, 99, 115, 66, 111, 100, 121, 50, 68};
        register_classdb_global(&global_classdb_array[354], (const char *)data, 13);
    }
    {
        // MeshInstance2D
        char data[] = {77, 101, 115, 104, 73, 110, 115, 116, 97, 110, 99, 101, 50, 68};
        register_classdb_global(&global_classdb_array[355], (const char *)data, 14);
    }
    {
        // CollisionObject2D
        char data[] = {67, 111, 108, 108, 105, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 50, 68};
        register_classdb_global(&global_classdb_array[356], (const char *)data, 17);
    }
    {
        // StaticBody2D
        char data[] = {83, 116, 97, 116, 105, 99, 66, 111, 100, 121, 50, 68};
        register_classdb_global(&global_classdb_array[357], (const char *)data, 12);
    }
    {
        // RigidBody2D
        char data[] = {82, 105, 103, 105, 100, 66, 111, 100, 121, 50, 68};
        register_classdb_global(&global_classdb_array[358], (const char *)data, 11);
    }
    {
        // KinematicCollision2D
        char data[] = {75, 105, 110, 101, 109, 97, 116, 105, 99, 67, 111, 108, 108, 105, 115, 105, 111, 110, 50, 68};
        register_classdb_global(&global_classdb_array[359], (const char *)data, 20);
    }
    {
        // CollisionShape2D
        char data[] = {67, 111, 108, 108, 105, 115, 105, 111, 110, 83, 104, 97, 112, 101, 50, 68};
        register_classdb_global(&global_classdb_array[360], (const char *)data, 16);
    }
    {
        // KinematicBody2D
        char data[] = {75, 105, 110, 101, 109, 97, 116, 105, 99, 66, 111, 100, 121, 50, 68};
        register_classdb_global(&global_classdb_array[361], (const char *)data, 15);
    }
    {
        // Area2D
        char data[] = {65, 114, 101, 97, 50, 68};
        register_classdb_global(&global_classdb_array[362], (const char *)data, 6);
    }
    {
        // VisibilityNotifier2D
        char data[] = {86, 105, 115, 105, 98, 105, 108, 105, 116, 121, 78, 111, 116, 105, 102, 105, 101, 114, 50, 68};
        register_classdb_global(&global_classdb_array[363], (const char *)data, 20);
    }
    {
        // CollisionPolygon2D
        char data[] = {67, 111, 108, 108, 105, 115, 105, 111, 110, 80, 111, 108, 121, 103, 111, 110, 50, 68};
        register_classdb_global(&global_classdb_array[364], (const char *)data, 18);
    }
    {
        // RayCast2D
        char data[] = {82, 97, 121, 67, 97, 115, 116, 50, 68};
        register_classdb_global(&global_classdb_array[365], (const char *)data, 9);
    }
    {
        // VisibilityEnabler2D
        char data[] = {86, 105, 115, 105, 98, 105, 108, 105, 116, 121, 69, 110, 97, 98, 108, 101, 114, 50, 68};
        register_classdb_global(&global_classdb_array[366], (const char *)data, 19);
    }
    {
        // Shape2D
        char data[] = {83, 104, 97, 112, 101, 50, 68};
        register_classdb_global(&global_classdb_array[367], (const char *)data, 7);
    }
    {
        // Polygon2D
        char data[] = {80, 111, 108, 121, 103, 111, 110, 50, 68};
        register_classdb_global(&global_classdb_array[368], (const char *)data, 9);
    }
    {
        // Bone2D
        char data[] = {66, 111, 110, 101, 50, 68};
        register_classdb_global(&global_classdb_array[369], (const char *)data, 6);
    }
    {
        // Skeleton2D
        char data[] = {83, 107, 101, 108, 101, 116, 111, 110, 50, 68};
        register_classdb_global(&global_classdb_array[370], (const char *)data, 10);
    }
    {
        // Light2D
        char data[] = {76, 105, 103, 104, 116, 50, 68};
        register_classdb_global(&global_classdb_array[371], (const char *)data, 7);
    }
    {
        // LightOccluder2D
        char data[] = {76, 105, 103, 104, 116, 79, 99, 99, 108, 117, 100, 101, 114, 50, 68};
        register_classdb_global(&global_classdb_array[372], (const char *)data, 15);
    }
    {
        // OccluderPolygon2D
        char data[] = {79, 99, 99, 108, 117, 100, 101, 114, 80, 111, 108, 121, 103, 111, 110, 50, 68};
        register_classdb_global(&global_classdb_array[373], (const char *)data, 17);
    }
    {
        // YSort
        char data[] = {89, 83, 111, 114, 116};
        register_classdb_global(&global_classdb_array[374], (const char *)data, 5);
    }
    {
        // BackBufferCopy
        char data[] = {66, 97, 99, 107, 66, 117, 102, 102, 101, 114, 67, 111, 112, 121};
        register_classdb_global(&global_classdb_array[375], (const char *)data, 14);
    }
    {
        // Camera2D
        char data[] = {67, 97, 109, 101, 114, 97, 50, 68};
        register_classdb_global(&global_classdb_array[376], (const char *)data, 8);
    }
    {
        // DampedSpringJoint2D
        char data[] = {68, 97, 109, 112, 101, 100, 83, 112, 114, 105, 110, 103, 74, 111, 105, 110, 116, 50, 68};
        register_classdb_global(&global_classdb_array[377], (const char *)data, 19);
    }
    {
        // Joint2D
        char data[] = {74, 111, 105, 110, 116, 50, 68};
        register_classdb_global(&global_classdb_array[378], (const char *)data, 7);
    }
    {
        // PinJoint2D
        char data[] = {80, 105, 110, 74, 111, 105, 110, 116, 50, 68};
        register_classdb_global(&global_classdb_array[379], (const char *)data, 10);
    }
    {
        // GrooveJoint2D
        char data[] = {71, 114, 111, 111, 118, 101, 74, 111, 105, 110, 116, 50, 68};
        register_classdb_global(&global_classdb_array[380], (const char *)data, 13);
    }
    {
        // TileSet
        char data[] = {84, 105, 108, 101, 83, 101, 116};
        register_classdb_global(&global_classdb_array[381], (const char *)data, 7);
    }
    {
        // TileMap
        char data[] = {84, 105, 108, 101, 77, 97, 112};
        register_classdb_global(&global_classdb_array[382], (const char *)data, 7);
    }
    {
        // ParallaxLayer
        char data[] = {80, 97, 114, 97, 108, 108, 97, 120, 76, 97, 121, 101, 114};
        register_classdb_global(&global_classdb_array[383], (const char *)data, 13);
    }
    {
        // ParallaxBackground
        char data[] = {80, 97, 114, 97, 108, 108, 97, 120, 66, 97, 99, 107, 103, 114, 111, 117, 110, 100};
        register_classdb_global(&global_classdb_array[384], (const char *)data, 18);
    }
    {
        // RemoteTransform2D
        char data[] = {82, 101, 109, 111, 116, 101, 84, 114, 97, 110, 115, 102, 111, 114, 109, 50, 68};
        register_classdb_global(&global_classdb_array[385], (const char *)data, 17);
    }
    {
        // ParticlesMaterial
        char data[] = {80, 97, 114, 116, 105, 99, 108, 101, 115, 77, 97, 116, 101, 114, 105, 97, 108};
        register_classdb_global(&global_classdb_array[386], (const char *)data, 17);
    }
    {
        // TouchScreenButton
        char data[] = {84, 111, 117, 99, 104, 83, 99, 114, 101, 101, 110, 66, 117, 116, 116, 111, 110};
        register_classdb_global(&global_classdb_array[387], (const char *)data, 17);
    }
    {
        // CurveTexture
        char data[] = {67, 117, 114, 118, 101, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[388], (const char *)data, 12);
    }
    {
        // GradientTexture
        char data[] = {71, 114, 97, 100, 105, 101, 110, 116, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[389], (const char *)data, 15);
    }
    {
        // ArrayMesh
        char data[] = {65, 114, 114, 97, 121, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[390], (const char *)data, 9);
    }
    {
        // PrimitiveMesh
        char data[] = {80, 114, 105, 109, 105, 116, 105, 118, 101, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[391], (const char *)data, 13);
    }
    {
        // CubeMesh
        char data[] = {67, 117, 98, 101, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[392], (const char *)data, 8);
    }
    {
        // CylinderMesh
        char data[] = {67, 121, 108, 105, 110, 100, 101, 114, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[393], (const char *)data, 12);
    }
    {
        // CapsuleMesh
        char data[] = {67, 97, 112, 115, 117, 108, 101, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[394], (const char *)data, 11);
    }
    {
        // SpatialMaterial
        char data[] = {83, 112, 97, 116, 105, 97, 108, 77, 97, 116, 101, 114, 105, 97, 108};
        register_classdb_global(&global_classdb_array[395], (const char *)data, 15);
    }
    {
        // QuadMesh
        char data[] = {81, 117, 97, 100, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[396], (const char *)data, 8);
    }
    {
        // SphereMesh
        char data[] = {83, 112, 104, 101, 114, 101, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[397], (const char *)data, 10);
    }
    {
        // PlaneMesh
        char data[] = {80, 108, 97, 110, 101, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[398], (const char *)data, 9);
    }
    {
        // PrismMesh
        char data[] = {80, 114, 105, 115, 109, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[399], (const char *)data, 9);
    }
    {
        // RayShape
        char data[] = {82, 97, 121, 83, 104, 97, 112, 101};
        register_classdb_global(&global_classdb_array[400], (const char *)data, 8);
    }
    {
        // SphereShape
        char data[] = {83, 112, 104, 101, 114, 101, 83, 104, 97, 112, 101};
        register_classdb_global(&global_classdb_array[401], (const char *)data, 11);
    }
    {
        // BoxShape
        char data[] = {66, 111, 120, 83, 104, 97, 112, 101};
        register_classdb_global(&global_classdb_array[402], (const char *)data, 8);
    }
    {
        // CapsuleShape
        char data[] = {67, 97, 112, 115, 117, 108, 101, 83, 104, 97, 112, 101};
        register_classdb_global(&global_classdb_array[403], (const char *)data, 12);
    }
    {
        // ConcavePolygonShape
        char data[] = {67, 111, 110, 99, 97, 118, 101, 80, 111, 108, 121, 103, 111, 110, 83, 104, 97, 112, 101};
        register_classdb_global(&global_classdb_array[404], (const char *)data, 19);
    }
    {
        // ConvexPolygonShape
        char data[] = {67, 111, 110, 118, 101, 120, 80, 111, 108, 121, 103, 111, 110, 83, 104, 97, 112, 101};
        register_classdb_global(&global_classdb_array[405], (const char *)data, 18);
    }
    {
        // CylinderShape
        char data[] = {67, 121, 108, 105, 110, 100, 101, 114, 83, 104, 97, 112, 101};
        register_classdb_global(&global_classdb_array[406], (const char *)data, 13);
    }
    {
        // PlaneShape
        char data[] = {80, 108, 97, 110, 101, 83, 104, 97, 112, 101};
        register_classdb_global(&global_classdb_array[407], (const char *)data, 10);
    }
    {
        // SurfaceTool
        char data[] = {83, 117, 114, 102, 97, 99, 101, 84, 111, 111, 108};
        register_classdb_global(&global_classdb_array[408], (const char *)data, 11);
    }
    {
        // MeshDataTool
        char data[] = {77, 101, 115, 104, 68, 97, 116, 97, 84, 111, 111, 108};
        register_classdb_global(&global_classdb_array[409], (const char *)data, 12);
    }
    {
        // SpatialVelocityTracker
        char data[] = {83, 112, 97, 116, 105, 97, 108, 86, 101, 108, 111, 99, 105, 116, 121, 84, 114, 97, 99, 107, 101, 114};
        register_classdb_global(&global_classdb_array[410], (const char *)data, 22);
    }
    {
        // Sky
        char data[] = {83, 107, 121};
        register_classdb_global(&global_classdb_array[411], (const char *)data, 3);
    }
    {
        // ProceduralSky
        char data[] = {80, 114, 111, 99, 101, 100, 117, 114, 97, 108, 83, 107, 121};
        register_classdb_global(&global_classdb_array[412], (const char *)data, 13);
    }
    {
        // PanoramaSky
        char data[] = {80, 97, 110, 111, 114, 97, 109, 97, 83, 107, 121};
        register_classdb_global(&global_classdb_array[413], (const char *)data, 11);
    }
    {
        // ImageTexture
        char data[] = {73, 109, 97, 103, 101, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[414], (const char *)data, 12);
    }
    {
        // StreamTexture
        char data[] = {83, 116, 114, 101, 97, 109, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[415], (const char *)data, 13);
    }
    {
        // AnimatedTexture
        char data[] = {65, 110, 105, 109, 97, 116, 101, 100, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[416], (const char *)data, 15);
    }
    {
        // AtlasTexture
        char data[] = {65, 116, 108, 97, 115, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[417], (const char *)data, 12);
    }
    {
        // LargeTexture
        char data[] = {76, 97, 114, 103, 101, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[418], (const char *)data, 12);
    }
    {
        // ProxyTexture
        char data[] = {80, 114, 111, 120, 121, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[419], (const char *)data, 12);
    }
    {
        // TextureArray
        char data[] = {84, 101, 120, 116, 117, 114, 101, 65, 114, 114, 97, 121};
        register_classdb_global(&global_classdb_array[420], (const char *)data, 12);
    }
    {
        // Animation
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[421], (const char *)data, 9);
    }
    {
        // TextureLayered
        char data[] = {84, 101, 120, 116, 117, 114, 101, 76, 97, 121, 101, 114, 101, 100};
        register_classdb_global(&global_classdb_array[422], (const char *)data, 14);
    }
    {
        // Texture3D
        char data[] = {84, 101, 120, 116, 117, 114, 101, 51, 68};
        register_classdb_global(&global_classdb_array[423], (const char *)data, 9);
    }
    {
        // Font
        char data[] = {70, 111, 110, 116};
        register_classdb_global(&global_classdb_array[424], (const char *)data, 4);
    }
    {
        // BitmapFont
        char data[] = {66, 105, 116, 109, 97, 112, 70, 111, 110, 116};
        register_classdb_global(&global_classdb_array[425], (const char *)data, 10);
    }
    {
        // DynamicFont
        char data[] = {68, 121, 110, 97, 109, 105, 99, 70, 111, 110, 116};
        register_classdb_global(&global_classdb_array[426], (const char *)data, 11);
    }
    {
        // TextFile
        char data[] = {84, 101, 120, 116, 70, 105, 108, 101};
        register_classdb_global(&global_classdb_array[427], (const char *)data, 8);
    }
    {
        // DynamicFontData
        char data[] = {68, 121, 110, 97, 109, 105, 99, 70, 111, 110, 116, 68, 97, 116, 97};
        register_classdb_global(&global_classdb_array[428], (const char *)data, 15);
    }
    {
        // StyleBox
        char data[] = {83, 116, 121, 108, 101, 66, 111, 120};
        register_classdb_global(&global_classdb_array[429], (const char *)data, 8);
    }
    {
        // StyleBoxTexture
        char data[] = {83, 116, 121, 108, 101, 66, 111, 120, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[430], (const char *)data, 15);
    }
    {
        // StyleBoxEmpty
        char data[] = {83, 116, 121, 108, 101, 66, 111, 120, 69, 109, 112, 116, 121};
        register_classdb_global(&global_classdb_array[431], (const char *)data, 13);
    }
    {
        // StyleBoxFlat
        char data[] = {83, 116, 121, 108, 101, 66, 111, 120, 70, 108, 97, 116};
        register_classdb_global(&global_classdb_array[432], (const char *)data, 12);
    }
    {
        // StyleBoxLine
        char data[] = {83, 116, 121, 108, 101, 66, 111, 120, 76, 105, 110, 101};
        register_classdb_global(&global_classdb_array[433], (const char *)data, 12);
    }
    {
        // AudioStreamPlayer
        char data[] = {65, 117, 100, 105, 111, 83, 116, 114, 101, 97, 109, 80, 108, 97, 121, 101, 114};
        register_classdb_global(&global_classdb_array[434], (const char *)data, 17);
    }
    {
        // PolygonPathFinder
        char data[] = {80, 111, 108, 121, 103, 111, 110, 80, 97, 116, 104, 70, 105, 110, 100, 101, 114};
        register_classdb_global(&global_classdb_array[435], (const char *)data, 17);
    }
    {
        // AudioStreamPlayer3D
        char data[] = {65, 117, 100, 105, 111, 83, 116, 114, 101, 97, 109, 80, 108, 97, 121, 101, 114, 51, 68};
        register_classdb_global(&global_classdb_array[436], (const char *)data, 19);
    }
    {
        // AudioStreamPlayer2D
        char data[] = {65, 117, 100, 105, 111, 83, 116, 114, 101, 97, 109, 80, 108, 97, 121, 101, 114, 50, 68};
        register_classdb_global(&global_classdb_array[437], (const char *)data, 19);
    }
    {
        // AudioStreamSample
        char data[] = {65, 117, 100, 105, 111, 83, 116, 114, 101, 97, 109, 83, 97, 109, 112, 108, 101};
        register_classdb_global(&global_classdb_array[438], (const char *)data, 17);
    }
    {
        // RayShape2D
        char data[] = {82, 97, 121, 83, 104, 97, 112, 101, 50, 68};
        register_classdb_global(&global_classdb_array[439], (const char *)data, 10);
    }
    {
        // LineShape2D
        char data[] = {76, 105, 110, 101, 83, 104, 97, 112, 101, 50, 68};
        register_classdb_global(&global_classdb_array[440], (const char *)data, 11);
    }
    {
        // CircleShape2D
        char data[] = {67, 105, 114, 99, 108, 101, 83, 104, 97, 112, 101, 50, 68};
        register_classdb_global(&global_classdb_array[441], (const char *)data, 13);
    }
    {
        // SegmentShape2D
        char data[] = {83, 101, 103, 109, 101, 110, 116, 83, 104, 97, 112, 101, 50, 68};
        register_classdb_global(&global_classdb_array[442], (const char *)data, 14);
    }
    {
        // ConvexPolygonShape2D
        char data[] = {67, 111, 110, 118, 101, 120, 80, 111, 108, 121, 103, 111, 110, 83, 104, 97, 112, 101, 50, 68};
        register_classdb_global(&global_classdb_array[443], (const char *)data, 20);
    }
    {
        // ConcavePolygonShape2D
        char data[] = {67, 111, 110, 99, 97, 118, 101, 80, 111, 108, 121, 103, 111, 110, 83, 104, 97, 112, 101, 50, 68};
        register_classdb_global(&global_classdb_array[444], (const char *)data, 21);
    }
    {
        // RectangleShape2D
        char data[] = {82, 101, 99, 116, 97, 110, 103, 108, 101, 83, 104, 97, 112, 101, 50, 68};
        register_classdb_global(&global_classdb_array[445], (const char *)data, 16);
    }
    {
        // Curve2D
        char data[] = {67, 117, 114, 118, 101, 50, 68};
        register_classdb_global(&global_classdb_array[446], (const char *)data, 7);
    }
    {
        // Path2D
        char data[] = {80, 97, 116, 104, 50, 68};
        register_classdb_global(&global_classdb_array[447], (const char *)data, 6);
    }
    {
        // Navigation2D
        char data[] = {78, 97, 118, 105, 103, 97, 116, 105, 111, 110, 50, 68};
        register_classdb_global(&global_classdb_array[448], (const char *)data, 12);
    }
    {
        // PathFollow2D
        char data[] = {80, 97, 116, 104, 70, 111, 108, 108, 111, 119, 50, 68};
        register_classdb_global(&global_classdb_array[449], (const char *)data, 12);
    }
    {
        // CapsuleShape2D
        char data[] = {67, 97, 112, 115, 117, 108, 101, 83, 104, 97, 112, 101, 50, 68};
        register_classdb_global(&global_classdb_array[450], (const char *)data, 14);
    }
    {
        // NavigationPolygon
        char data[] = {78, 97, 118, 105, 103, 97, 116, 105, 111, 110, 80, 111, 108, 121, 103, 111, 110};
        register_classdb_global(&global_classdb_array[451], (const char *)data, 17);
    }
    {
        // SceneTree
        char data[] = {83, 99, 101, 110, 101, 84, 114, 101, 101};
        register_classdb_global(&global_classdb_array[452], (const char *)data, 9);
    }
    {
        // NavigationPolygonInstance
        char data[] = {78, 97, 118, 105, 103, 97, 116, 105, 111, 110, 80, 111, 108, 121, 103, 111, 110, 73, 110, 115, 116, 97, 110, 99, 101};
        register_classdb_global(&global_classdb_array[453], (const char *)data, 25);
    }
    {
        // PackedScene
        char data[] = {80, 97, 99, 107, 101, 100, 83, 99, 101, 110, 101};
        register_classdb_global(&global_classdb_array[454], (const char *)data, 11);
    }
    {
        // SceneState
        char data[] = {83, 99, 101, 110, 101, 83, 116, 97, 116, 101};
        register_classdb_global(&global_classdb_array[455], (const char *)data, 10);
    }
    {
        // SceneTreeTimer
        char data[] = {83, 99, 101, 110, 101, 84, 114, 101, 101, 84, 105, 109, 101, 114};
        register_classdb_global(&global_classdb_array[456], (const char *)data, 14);
    }
    {
        // EditorPlugin
        char data[] = {69, 100, 105, 116, 111, 114, 80, 108, 117, 103, 105, 110};
        register_classdb_global(&global_classdb_array[457], (const char *)data, 12);
    }
    {
        // EditorScript
        char data[] = {69, 100, 105, 116, 111, 114, 83, 99, 114, 105, 112, 116};
        register_classdb_global(&global_classdb_array[458], (const char *)data, 12);
    }
    {
        // EditorSelection
        char data[] = {69, 100, 105, 116, 111, 114, 83, 101, 108, 101, 99, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[459], (const char *)data, 15);
    }
    {
        // EditorFileDialog
        char data[] = {69, 100, 105, 116, 111, 114, 70, 105, 108, 101, 68, 105, 97, 108, 111, 103};
        register_classdb_global(&global_classdb_array[460], (const char *)data, 16);
    }
    {
        // EditorImportPlugin
        char data[] = {69, 100, 105, 116, 111, 114, 73, 109, 112, 111, 114, 116, 80, 108, 117, 103, 105, 110};
        register_classdb_global(&global_classdb_array[461], (const char *)data, 18);
    }
    {
        // EditorResourcePreview
        char data[] = {69, 100, 105, 116, 111, 114, 82, 101, 115, 111, 117, 114, 99, 101, 80, 114, 101, 118, 105, 101, 119};
        register_classdb_global(&global_classdb_array[462], (const char *)data, 21);
    }
    {
        // EditorFileSystemDirectory
        char data[] = {69, 100, 105, 116, 111, 114, 70, 105, 108, 101, 83, 121, 115, 116, 101, 109, 68, 105, 114, 101, 99, 116, 111, 114, 121};
        register_classdb_global(&global_classdb_array[463], (const char *)data, 25);
    }
    {
        // EditorFileSystem
        char data[] = {69, 100, 105, 116, 111, 114, 70, 105, 108, 101, 83, 121, 115, 116, 101, 109};
        register_classdb_global(&global_classdb_array[464], (const char *)data, 16);
    }
    {
        // EditorSettings
        char data[] = {69, 100, 105, 116, 111, 114, 83, 101, 116, 116, 105, 110, 103, 115};
        register_classdb_global(&global_classdb_array[465], (const char *)data, 14);
    }
    {
        // EditorResourcePreviewGenerator
        char data[] = {69, 100, 105, 116, 111, 114, 82, 101, 115, 111, 117, 114, 99, 101, 80, 114, 101, 118, 105, 101, 119, 71, 101, 110, 101, 114, 97, 116, 111, 114};
        register_classdb_global(&global_classdb_array[466], (const char *)data, 30);
    }
    {
        // EditorSpatialGizmoPlugin
        char data[] = {69, 100, 105, 116, 111, 114, 83, 112, 97, 116, 105, 97, 108, 71, 105, 122, 109, 111, 80, 108, 117, 103, 105, 110};
        register_classdb_global(&global_classdb_array[467], (const char *)data, 24);
    }
    {
        // EditorSpatialGizmo
        char data[] = {69, 100, 105, 116, 111, 114, 83, 112, 97, 116, 105, 97, 108, 71, 105, 122, 109, 111};
        register_classdb_global(&global_classdb_array[468], (const char *)data, 18);
    }
    {
        // ScriptEditor
        char data[] = {83, 99, 114, 105, 112, 116, 69, 100, 105, 116, 111, 114};
        register_classdb_global(&global_classdb_array[469], (const char *)data, 12);
    }
    {
        // EditorInterface
        char data[] = {69, 100, 105, 116, 111, 114, 73, 110, 116, 101, 114, 102, 97, 99, 101};
        register_classdb_global(&global_classdb_array[470], (const char *)data, 15);
    }
    {
        // EditorInspector
        char data[] = {69, 100, 105, 116, 111, 114, 73, 110, 115, 112, 101, 99, 116, 111, 114};
        register_classdb_global(&global_classdb_array[471], (const char *)data, 15);
    }
    {
        // EditorResourceConversionPlugin
        char data[] = {69, 100, 105, 116, 111, 114, 82, 101, 115, 111, 117, 114, 99, 101, 67, 111, 110, 118, 101, 114, 115, 105, 111, 110, 80, 108, 117, 103, 105, 110};
        register_classdb_global(&global_classdb_array[472], (const char *)data, 30);
    }
    {
        // EditorExportPlugin
        char data[] = {69, 100, 105, 116, 111, 114, 69, 120, 112, 111, 114, 116, 80, 108, 117, 103, 105, 110};
        register_classdb_global(&global_classdb_array[473], (const char *)data, 18);
    }
    {
        // EditorSceneImporter
        char data[] = {69, 100, 105, 116, 111, 114, 83, 99, 101, 110, 101, 73, 109, 112, 111, 114, 116, 101, 114};
        register_classdb_global(&global_classdb_array[474], (const char *)data, 19);
    }
    {
        // ScriptCreateDialog
        char data[] = {83, 99, 114, 105, 112, 116, 67, 114, 101, 97, 116, 101, 68, 105, 97, 108, 111, 103};
        register_classdb_global(&global_classdb_array[475], (const char *)data, 18);
    }
    {
        // AnimationTrackEditPlugin
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 84, 114, 97, 99, 107, 69, 100, 105, 116, 80, 108, 117, 103, 105, 110};
        register_classdb_global(&global_classdb_array[476], (const char *)data, 24);
    }
    {
        // EditorInspectorPlugin
        char data[] = {69, 100, 105, 116, 111, 114, 73, 110, 115, 112, 101, 99, 116, 111, 114, 80, 108, 117, 103, 105, 110};
        register_classdb_global(&global_classdb_array[477], (const char *)data, 21);
    }
    {
        // EditorProperty
        char data[] = {69, 100, 105, 116, 111, 114, 80, 114, 111, 112, 101, 114, 116, 121};
        register_classdb_global(&global_classdb_array[478], (const char *)data, 14);
    }
    {
        // CSGShape
        char data[] = {67, 83, 71, 83, 104, 97, 112, 101};
        register_classdb_global(&global_classdb_array[479], (const char *)data, 8);
    }
    {
        // CSGSphere
        char data[] = {67, 83, 71, 83, 112, 104, 101, 114, 101};
        register_classdb_global(&global_classdb_array[480], (const char *)data, 9);
    }
    {
        // CSGBox
        char data[] = {67, 83, 71, 66, 111, 120};
        register_classdb_global(&global_classdb_array[481], (const char *)data, 6);
    }
    {
        // CSGPrimitive
        char data[] = {67, 83, 71, 80, 114, 105, 109, 105, 116, 105, 118, 101};
        register_classdb_global(&global_classdb_array[482], (const char *)data, 12);
    }
    {
        // EditorScenePostImport
        char data[] = {69, 100, 105, 116, 111, 114, 83, 99, 101, 110, 101, 80, 111, 115, 116, 73, 109, 112, 111, 114, 116};
        register_classdb_global(&global_classdb_array[483], (const char *)data, 21);
    }
    {
        // JavaScript
        char data[] = {74, 97, 118, 97, 83, 99, 114, 105, 112, 116};
        register_classdb_global(&global_classdb_array[484], (const char *)data, 10);
    }
    {
        // CSGMesh
        char data[] = {67, 83, 71, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[485], (const char *)data, 7);
    }
    {
        // CSGTorus
        char data[] = {67, 83, 71, 84, 111, 114, 117, 115};
        register_classdb_global(&global_classdb_array[486], (const char *)data, 8);
    }
    {
        // CSGPolygon
        char data[] = {67, 83, 71, 80, 111, 108, 121, 103, 111, 110};
        register_classdb_global(&global_classdb_array[487], (const char *)data, 10);
    }
    {
        // CSGCylinder
        char data[] = {67, 83, 71, 67, 121, 108, 105, 110, 100, 101, 114};
        register_classdb_global(&global_classdb_array[488], (const char *)data, 11);
    }
    {
        // NetworkedMultiplayerENet
        char data[] = {78, 101, 116, 119, 111, 114, 107, 101, 100, 77, 117, 108, 116, 105, 112, 108, 97, 121, 101, 114, 69, 78, 101, 116};
        register_classdb_global(&global_classdb_array[489], (const char *)data, 24);
    }
    {
        // ResourceFormatDDS
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 68, 68, 83};
        register_classdb_global(&global_classdb_array[490], (const char *)data, 17);
    }
    {
        // CSGCombiner
        char data[] = {67, 83, 71, 67, 111, 109, 98, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[491], (const char *)data, 11);
    }
    {
        // GDScriptBytecodeExporter
        char data[] = {71, 68, 83, 99, 114, 105, 112, 116, 66, 121, 116, 101, 99, 111, 100, 101, 69, 120, 112, 111, 114, 116, 101, 114};
        register_classdb_global(&global_classdb_array[492], (const char *)data, 24);
    }
    {
        // ResourceFormatPKM
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 80, 75, 77};
        register_classdb_global(&global_classdb_array[493], (const char *)data, 17);
    }
    {
        // GDNativeLibrary
        char data[] = {71, 68, 78, 97, 116, 105, 118, 101, 76, 105, 98, 114, 97, 114, 121};
        register_classdb_global(&global_classdb_array[494], (const char *)data, 15);
    }
    {
        // ResourceFormatLoaderVideoStreamGDNative
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 76, 111, 97, 100, 101, 114, 86, 105, 100, 101, 111, 83, 116, 114, 101, 97, 109, 71, 68, 78, 97, 116, 105, 118, 101};
        register_classdb_global(&global_classdb_array[495], (const char *)data, 39);
    }
    {
        // VideoStreamGDNative
        char data[] = {86, 105, 100, 101, 111, 83, 116, 114, 101, 97, 109, 71, 68, 78, 97, 116, 105, 118, 101};
        register_classdb_global(&global_classdb_array[496], (const char *)data, 19);
    }
    {
        // GDNative
        char data[] = {71, 68, 78, 97, 116, 105, 118, 101};
        register_classdb_global(&global_classdb_array[497], (const char *)data, 8);
    }
    {
        // GDScript
        char data[] = {71, 68, 83, 99, 114, 105, 112, 116};
        register_classdb_global(&global_classdb_array[498], (const char *)data, 8);
    }
    {
        // GDScriptFunctionState
        char data[] = {71, 68, 83, 99, 114, 105, 112, 116, 70, 117, 110, 99, 116, 105, 111, 110, 83, 116, 97, 116, 101};
        register_classdb_global(&global_classdb_array[499], (const char *)data, 21);
    }
    {
        // NativeScript
        char data[] = {78, 97, 116, 105, 118, 101, 83, 99, 114, 105, 112, 116};
        register_classdb_global(&global_classdb_array[500], (const char *)data, 12);
    }
    {
        // GDNativeLibraryResourceSaver
        char data[] = {71, 68, 78, 97, 116, 105, 118, 101, 76, 105, 98, 114, 97, 114, 121, 82, 101, 115, 111, 117, 114, 99, 101, 83, 97, 118, 101, 114};
        register_classdb_global(&global_classdb_array[501], (const char *)data, 28);
    }
    {
        // GDNativeLibraryResourceLoader
        char data[] = {71, 68, 78, 97, 116, 105, 118, 101, 76, 105, 98, 114, 97, 114, 121, 82, 101, 115, 111, 117, 114, 99, 101, 76, 111, 97, 100, 101, 114};
        register_classdb_global(&global_classdb_array[502], (const char *)data, 29);
    }
    {
        // StreamPeerGDNative
        char data[] = {83, 116, 114, 101, 97, 109, 80, 101, 101, 114, 71, 68, 78, 97, 116, 105, 118, 101};
        register_classdb_global(&global_classdb_array[503], (const char *)data, 18);
    }
    {
        // MultiplayerPeerGDNative
        char data[] = {77, 117, 108, 116, 105, 112, 108, 97, 121, 101, 114, 80, 101, 101, 114, 71, 68, 78, 97, 116, 105, 118, 101};
        register_classdb_global(&global_classdb_array[504], (const char *)data, 23);
    }
    {
        // PacketPeerGDNative
        char data[] = {80, 97, 99, 107, 101, 116, 80, 101, 101, 114, 71, 68, 78, 97, 116, 105, 118, 101};
        register_classdb_global(&global_classdb_array[505], (const char *)data, 18);
    }
    {
        // ResourceFormatLoaderNativeScript
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 76, 111, 97, 100, 101, 114, 78, 97, 116, 105, 118, 101, 83, 99, 114, 105, 112, 116};
        register_classdb_global(&global_classdb_array[506], (const char *)data, 32);
    }
    {
        // PluginScript
        char data[] = {80, 108, 117, 103, 105, 110, 83, 99, 114, 105, 112, 116};
        register_classdb_global(&global_classdb_array[507], (const char *)data, 12);
    }
    {
        // ResourceFormatSaverNativeScript
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 83, 97, 118, 101, 114, 78, 97, 116, 105, 118, 101, 83, 99, 114, 105, 112, 116};
        register_classdb_global(&global_classdb_array[508], (const char *)data, 31);
    }
    {
        // ARVRInterfaceGDNative
        char data[] = {65, 82, 86, 82, 73, 110, 116, 101, 114, 102, 97, 99, 101, 71, 68, 78, 97, 116, 105, 118, 101};
        register_classdb_global(&global_classdb_array[509], (const char *)data, 21);
    }
    {
        // GridMap
        char data[] = {71, 114, 105, 100, 77, 97, 112};
        register_classdb_global(&global_classdb_array[510], (const char *)data, 7);
    }
    {
        // ResourceFormatLoaderGDScript
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 76, 111, 97, 100, 101, 114, 71, 68, 83, 99, 114, 105, 112, 116};
        register_classdb_global(&global_classdb_array[511], (const char *)data, 28);
    }
    {
        // ResourceFormatSaverGDScript
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 83, 97, 118, 101, 114, 71, 68, 83, 99, 114, 105, 112, 116};
        register_classdb_global(&global_classdb_array[512], (const char *)data, 27);
    }
    {
        // MobileVRInterface
        char data[] = {77, 111, 98, 105, 108, 101, 86, 82, 73, 110, 116, 101, 114, 102, 97, 99, 101};
        register_classdb_global(&global_classdb_array[513], (const char *)data, 17);
    }
    {
        // ResourceFormatPVR
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 80, 86, 82};
        register_classdb_global(&global_classdb_array[514], (const char *)data, 17);
    }
    {
        // RegExMatch
        char data[] = {82, 101, 103, 69, 120, 77, 97, 116, 99, 104};
        register_classdb_global(&global_classdb_array[515], (const char *)data, 10);
    }
    {
        // OpenSimplexNoise
        char data[] = {79, 112, 101, 110, 83, 105, 109, 112, 108, 101, 120, 78, 111, 105, 115, 101};
        register_classdb_global(&global_classdb_array[516], (const char *)data, 16);
    }
    {
        // NoiseTexture
        char data[] = {78, 111, 105, 115, 101, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[517], (const char *)data, 12);
    }
    {
        // ResourceFormatLoaderTheora
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 76, 111, 97, 100, 101, 114, 84, 104, 101, 111, 114, 97};
        register_classdb_global(&global_classdb_array[518], (const char *)data, 26);
    }
    {
        // ResourceImporterOGGVorbis
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 73, 109, 112, 111, 114, 116, 101, 114, 79, 71, 71, 86, 111, 114, 98, 105, 115};
        register_classdb_global(&global_classdb_array[519], (const char *)data, 25);
    }
    {
        // RegEx
        char data[] = {82, 101, 103, 69, 120};
        register_classdb_global(&global_classdb_array[520], (const char *)data, 5);
    }
    {
        // VideoStreamTheora
        char data[] = {86, 105, 100, 101, 111, 83, 116, 114, 101, 97, 109, 84, 104, 101, 111, 114, 97};
        register_classdb_global(&global_classdb_array[521], (const char *)data, 17);
    }
    {
        // UPNP
        char data[] = {85, 80, 78, 80};
        register_classdb_global(&global_classdb_array[522], (const char *)data, 4);
    }
    {
        // ResourceImporter
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 73, 109, 112, 111, 114, 116, 101, 114};
        register_classdb_global(&global_classdb_array[523], (const char *)data, 16);
    }
    {
        // AudioStreamOGGVorbis
        char data[] = {65, 117, 100, 105, 111, 83, 116, 114, 101, 97, 109, 79, 71, 71, 86, 111, 114, 98, 105, 115};
        register_classdb_global(&global_classdb_array[524], (const char *)data, 20);
    }
    {
        // UPNPDevice
        char data[] = {85, 80, 78, 80, 68, 101, 118, 105, 99, 101};
        register_classdb_global(&global_classdb_array[525], (const char *)data, 10);
    }
    {
        // VisualScript
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116};
        register_classdb_global(&global_classdb_array[526], (const char *)data, 12);
    }
    {
        // VisualScriptNode
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 78, 111, 100, 101};
        register_classdb_global(&global_classdb_array[527], (const char *)data, 16);
    }
    {
        // VisualScriptFunctionState
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 70, 117, 110, 99, 116, 105, 111, 110, 83, 116, 97, 116, 101};
        register_classdb_global(&global_classdb_array[528], (const char *)data, 25);
    }
    {
        // VisualScriptFunction
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 70, 117, 110, 99, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[529], (const char *)data, 20);
    }
    {
        // VisualScriptClassConstant
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 67, 108, 97, 115, 115, 67, 111, 110, 115, 116, 97, 110, 116};
        register_classdb_global(&global_classdb_array[530], (const char *)data, 25);
    }
    {
        // VisualScriptGlobalConstant
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 71, 108, 111, 98, 97, 108, 67, 111, 110, 115, 116, 97, 110, 116};
        register_classdb_global(&global_classdb_array[531], (const char *)data, 26);
    }
    {
        // VisualScriptIndexGet
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 73, 110, 100, 101, 120, 71, 101, 116};
        register_classdb_global(&global_classdb_array[532], (const char *)data, 20);
    }
    {
        // VisualScriptOperator
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 79, 112, 101, 114, 97, 116, 111, 114};
        register_classdb_global(&global_classdb_array[533], (const char *)data, 20);
    }
    {
        // VisualScriptMathConstant
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 77, 97, 116, 104, 67, 111, 110, 115, 116, 97, 110, 116};
        register_classdb_global(&global_classdb_array[534], (const char *)data, 24);
    }
    {
        // VisualScriptVariableGet
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 86, 97, 114, 105, 97, 98, 108, 101, 71, 101, 116};
        register_classdb_global(&global_classdb_array[535], (const char *)data, 23);
    }
    {
        // VisualScriptVariableSet
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 86, 97, 114, 105, 97, 98, 108, 101, 83, 101, 116};
        register_classdb_global(&global_classdb_array[536], (const char *)data, 23);
    }
    {
        // VisualScriptIndexSet
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 73, 110, 100, 101, 120, 83, 101, 116};
        register_classdb_global(&global_classdb_array[537], (const char *)data, 20);
    }
    {
        // VisualScriptConstant
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 67, 111, 110, 115, 116, 97, 110, 116};
        register_classdb_global(&global_classdb_array[538], (const char *)data, 20);
    }
    {
        // VisualScriptConstructor
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 67, 111, 110, 115, 116, 114, 117, 99, 116, 111, 114};
        register_classdb_global(&global_classdb_array[539], (const char *)data, 23);
    }
    {
        // VisualScriptEngineSingleton
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 69, 110, 103, 105, 110, 101, 83, 105, 110, 103, 108, 101, 116, 111, 110};
        register_classdb_global(&global_classdb_array[540], (const char *)data, 27);
    }
    {
        // VisualScriptSelf
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 83, 101, 108, 102};
        register_classdb_global(&global_classdb_array[541], (const char *)data, 16);
    }
    {
        // VisualScriptLocalVar
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 76, 111, 99, 97, 108, 86, 97, 114};
        register_classdb_global(&global_classdb_array[542], (const char *)data, 20);
    }
    {
        // VisualScriptComment
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 67, 111, 109, 109, 101, 110, 116};
        register_classdb_global(&global_classdb_array[543], (const char *)data, 19);
    }
    {
        // VisualScriptSceneTree
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 83, 99, 101, 110, 101, 84, 114, 101, 101};
        register_classdb_global(&global_classdb_array[544], (const char *)data, 21);
    }
    {
        // VisualScriptResourcePath
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 82, 101, 115, 111, 117, 114, 99, 101, 80, 97, 116, 104};
        register_classdb_global(&global_classdb_array[545], (const char *)data, 24);
    }
    {
        // VisualScriptCustomNode
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 67, 117, 115, 116, 111, 109, 78, 111, 100, 101};
        register_classdb_global(&global_classdb_array[546], (const char *)data, 22);
    }
    {
        // VisualScriptSubCall
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 83, 117, 98, 67, 97, 108, 108};
        register_classdb_global(&global_classdb_array[547], (const char *)data, 19);
    }
    {
        // VisualScriptSceneNode
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 83, 99, 101, 110, 101, 78, 111, 100, 101};
        register_classdb_global(&global_classdb_array[548], (const char *)data, 21);
    }
    {
        // VisualScriptBasicTypeConstant
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 66, 97, 115, 105, 99, 84, 121, 112, 101, 67, 111, 110, 115, 116, 97, 110, 116};
        register_classdb_global(&global_classdb_array[549], (const char *)data, 29);
    }
    {
        // VisualScriptInputAction
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 73, 110, 112, 117, 116, 65, 99, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[550], (const char *)data, 23);
    }
    {
        // VisualScriptTypeCast
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 84, 121, 112, 101, 67, 97, 115, 116};
        register_classdb_global(&global_classdb_array[551], (const char *)data, 20);
    }
    {
        // VisualScriptDeconstruct
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 68, 101, 99, 111, 110, 115, 116, 114, 117, 99, 116};
        register_classdb_global(&global_classdb_array[552], (const char *)data, 23);
    }
    {
        // VisualScriptPreload
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 80, 114, 101, 108, 111, 97, 100};
        register_classdb_global(&global_classdb_array[553], (const char *)data, 19);
    }
    {
        // VisualScriptFunctionCall
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 70, 117, 110, 99, 116, 105, 111, 110, 67, 97, 108, 108};
        register_classdb_global(&global_classdb_array[554], (const char *)data, 24);
    }
    {
        // VisualScriptLocalVarSet
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 76, 111, 99, 97, 108, 86, 97, 114, 83, 101, 116};
        register_classdb_global(&global_classdb_array[555], (const char *)data, 23);
    }
    {
        // VisualScriptPropertySet
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 80, 114, 111, 112, 101, 114, 116, 121, 83, 101, 116};
        register_classdb_global(&global_classdb_array[556], (const char *)data, 23);
    }
    {
        // VisualScriptSwitch
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 83, 119, 105, 116, 99, 104};
        register_classdb_global(&global_classdb_array[557], (const char *)data, 18);
    }
    {
        // VisualScriptSelect
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 83, 101, 108, 101, 99, 116};
        register_classdb_global(&global_classdb_array[558], (const char *)data, 18);
    }
    {
        // VisualScriptPropertyGet
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 80, 114, 111, 112, 101, 114, 116, 121, 71, 101, 116};
        register_classdb_global(&global_classdb_array[559], (const char *)data, 23);
    }
    {
        // VisualScriptReturn
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 82, 101, 116, 117, 114, 110};
        register_classdb_global(&global_classdb_array[560], (const char *)data, 18);
    }
    {
        // VisualScriptWhile
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 87, 104, 105, 108, 101};
        register_classdb_global(&global_classdb_array[561], (const char *)data, 17);
    }
    {
        // VisualScriptEmitSignal
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 69, 109, 105, 116, 83, 105, 103, 110, 97, 108};
        register_classdb_global(&global_classdb_array[562], (const char *)data, 22);
    }
    {
        // VisualScriptCondition
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 67, 111, 110, 100, 105, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[563], (const char *)data, 21);
    }
    {
        // VisualScriptIterator
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 73, 116, 101, 114, 97, 116, 111, 114};
        register_classdb_global(&global_classdb_array[564], (const char *)data, 20);
    }
    {
        // VisualScriptSequence
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 83, 101, 113, 117, 101, 110, 99, 101};
        register_classdb_global(&global_classdb_array[565], (const char *)data, 20);
    }
    {
        // VisualScriptBuiltinFunc
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 66, 117, 105, 108, 116, 105, 110, 70, 117, 110, 99};
        register_classdb_global(&global_classdb_array[566], (const char *)data, 23);
    }
    {
        // VisualScriptYield
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 89, 105, 101, 108, 100};
        register_classdb_global(&global_classdb_array[567], (const char *)data, 17);
    }
    {
        // VisualScriptYieldSignal
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 89, 105, 101, 108, 100, 83, 105, 103, 110, 97, 108};
        register_classdb_global(&global_classdb_array[568], (const char *)data, 23);
    }
    {
        // VisualScriptExpression
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 69, 120, 112, 114, 101, 115, 115, 105, 111, 110};
        register_classdb_global(&global_classdb_array[569], (const char *)data, 22);
    }
    {
        // VideoStreamWebm
        char data[] = {86, 105, 100, 101, 111, 83, 116, 114, 101, 97, 109, 87, 101, 98, 109};
        register_classdb_global(&global_classdb_array[570], (const char *)data, 15);
    }
    {
        // WebSocketMultiplayerPeer
        char data[] = {87, 101, 98, 83, 111, 99, 107, 101, 116, 77, 117, 108, 116, 105, 112, 108, 97, 121, 101, 114, 80, 101, 101, 114};
        register_classdb_global(&global_classdb_array[571], (const char *)data, 24);
    }
    {
        // WebSocketServer
        char data[] = {87, 101, 98, 83, 111, 99, 107, 101, 116, 83, 101, 114, 118, 101, 114};
        register_classdb_global(&global_classdb_array[572], (const char *)data, 15);
    }
    {
        // ResourceFormatLoaderWebm
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 76, 111, 97, 100, 101, 114, 87, 101, 98, 109};
        register_classdb_global(&global_classdb_array[573], (const char *)data, 24);
    }
    {
        // _VisualScriptEditor
        char data[] = {95, 86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 69, 100, 105, 116, 111, 114};
        register_classdb_global(&global_classdb_array[574], (const char *)data, 19);
    }
    {
        // Physics2DDirectBodyStateSW
        char data[] = {80, 104, 121, 115, 105, 99, 115, 50, 68, 68, 105, 114, 101, 99, 116, 66, 111, 100, 121, 83, 116, 97, 116, 101, 83, 87};
        register_classdb_global(&global_classdb_array[575], (const char *)data, 26);
    }
    {
        // WebSocketClient
        char data[] = {87, 101, 98, 83, 111, 99, 107, 101, 116, 67, 108, 105, 101, 110, 116};
        register_classdb_global(&global_classdb_array[576], (const char *)data, 15);
    }
    {
        // BulletPhysicsServer
        char data[] = {66, 117, 108, 108, 101, 116, 80, 104, 121, 115, 105, 99, 115, 83, 101, 114, 118, 101, 114};
        register_classdb_global(&global_classdb_array[577], (const char *)data, 19);
    }
    {
        // WebSocketPeer
        char data[] = {87, 101, 98, 83, 111, 99, 107, 101, 116, 80, 101, 101, 114};
        register_classdb_global(&global_classdb_array[578], (const char *)data, 13);
    }
    {
        // BulletPhysicsDirectBodyState
        char data[] = {66, 117, 108, 108, 101, 116, 80, 104, 121, 115, 105, 99, 115, 68, 105, 114, 101, 99, 116, 66, 111, 100, 121, 83, 116, 97, 116, 101};
        register_classdb_global(&global_classdb_array[579], (const char *)data, 28);
    }
    {
        // Physics2DServerSW
        char data[] = {80, 104, 121, 115, 105, 99, 115, 50, 68, 83, 101, 114, 118, 101, 114, 83, 87};
        register_classdb_global(&global_classdb_array[580], (const char *)data, 17);
    }
    {
        // GDScriptNativeClass
        char data[] = {71, 68, 83, 99, 114, 105, 112, 116, 78, 97, 116, 105, 118, 101, 67, 108, 97, 115, 115};
        register_classdb_global(&global_classdb_array[581], (const char *)data, 19);
    }
    {
        // AudioEffectReverbInstance
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 82, 101, 118, 101, 114, 98, 73, 110, 115, 116, 97, 110, 99, 101};
        register_classdb_global(&global_classdb_array[582], (const char *)data, 25);
    }
    {
        // Physics2DDirectSpaceStateSW
        char data[] = {80, 104, 121, 115, 105, 99, 115, 50, 68, 68, 105, 114, 101, 99, 116, 83, 112, 97, 99, 101, 83, 116, 97, 116, 101, 83, 87};
        register_classdb_global(&global_classdb_array[583], (const char *)data, 27);
    }
    {
        // BulletPhysicsDirectSpaceState
        char data[] = {66, 117, 108, 108, 101, 116, 80, 104, 121, 115, 105, 99, 115, 68, 105, 114, 101, 99, 116, 83, 112, 97, 99, 101, 83, 116, 97, 116, 101};
        register_classdb_global(&global_classdb_array[584], (const char *)data, 29);
    }
    {
        // AudioEffectInstance
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 73, 110, 115, 116, 97, 110, 99, 101};
        register_classdb_global(&global_classdb_array[585], (const char *)data, 19);
    }
    {
        // AudioEffectAmplifyInstance
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 65, 109, 112, 108, 105, 102, 121, 73, 110, 115, 116, 97, 110, 99, 101};
        register_classdb_global(&global_classdb_array[586], (const char *)data, 26);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("Performance");
        api10->godot_variant_new_object(&global_singletons_array[0], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("ProjectSettings");
        api10->godot_variant_new_object(&global_singletons_array[1], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("IP");
        api10->godot_variant_new_object(&global_singletons_array[2], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("Geometry");
        api10->godot_variant_new_object(&global_singletons_array[3], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("ResourceLoader");
        api10->godot_variant_new_object(&global_singletons_array[4], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("ResourceSaver");
        api10->godot_variant_new_object(&global_singletons_array[5], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("OS");
        api10->godot_variant_new_object(&global_singletons_array[6], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("Engine");
        api10->godot_variant_new_object(&global_singletons_array[7], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("ClassDB");
        api10->godot_variant_new_object(&global_singletons_array[8], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("Marshalls");
        api10->godot_variant_new_object(&global_singletons_array[9], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("TranslationServer");
        api10->godot_variant_new_object(&global_singletons_array[10], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("Input");
        api10->godot_variant_new_object(&global_singletons_array[11], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("InputMap");
        api10->godot_variant_new_object(&global_singletons_array[12], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("JSON");
        api10->godot_variant_new_object(&global_singletons_array[13], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("JavaScript");
        api10->godot_variant_new_object(&global_singletons_array[14], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("VisualScriptEditor");
        api10->godot_variant_new_object(&global_singletons_array[15], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("VisualServer");
        api10->godot_variant_new_object(&global_singletons_array[16], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("AudioServer");
        api10->godot_variant_new_object(&global_singletons_array[17], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("PhysicsServer");
        api10->godot_variant_new_object(&global_singletons_array[18], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("Physics2DServer");
        api10->godot_variant_new_object(&global_singletons_array[19], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("ARVRServer");
        api10->godot_variant_new_object(&global_singletons_array[20], singleton);
    }
    {
        uint8_t data[] = {2, 0, 0, 0, 1, 0, 0, 0};
        int bytesRead;
        gd2c10->variant_decode(&Class_5_constants[0], data, 8, &bytesRead, true);
    }
    {
        uint8_t data[] = {2, 0, 0, 0, 0, 0, 0, 0};
        int bytesRead;
        gd2c10->variant_decode(&Class_5_constants[1], data, 8, &bytesRead, true);
    }
    {
        uint8_t data[] = {3, 0, 0, 0, 0, 0, 192, 63};
        int bytesRead;
        gd2c10->variant_decode(&Class_9_constants[0], data, 8, &bytesRead, true);
    }
    {
        uint8_t data[] = {2, 0, 0, 0, 2, 0, 0, 0};
        int bytesRead;
        gd2c10->variant_decode(&Class_9_constants[1], data, 8, &bytesRead, true);
    }
    {
        uint8_t data[] = {2, 0, 0, 0, 2, 0, 0, 0};
        int bytesRead;
        gd2c10->variant_decode(&Class_9_constants[2], data, 8, &bytesRead, true);
    }
    {
        uint8_t data[] = {7, 0, 0, 0, 154, 153, 153, 62, 154, 153, 153, 62, 154, 153, 153, 62};
        int bytesRead;
        gd2c10->variant_decode(&Class_9_constants[3], data, 16, &bytesRead, true);
    }
    {
        uint8_t data[] = {2, 0, 0, 0, 1, 0, 0, 0};
        int bytesRead;
        gd2c10->variant_decode(&Class_9_constants[4], data, 8, &bytesRead, true);
    }
    {
        uint8_t data[] = {2, 0, 0, 0, 0, 0, 0, 0};
        int bytesRead;
        gd2c10->variant_decode(&Class_9_constants[5], data, 8, &bytesRead, true);
    }
    //printf("Exit: godot_nativescript_init\n");
}
