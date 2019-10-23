#include "gd2c.h"
#include "godotproject.h"
#include "math.h"

godot_variant global_constants_array[506];
godot_variant global_classdb_array[610];
godot_variant global_hard_coded_constants_array[4];
godot_variant global_singletons_array[23];

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
godot_variant Class_1__init_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    //printf("Enter: Class_1__init_func\n");
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    goto _entry;
_entry:
    printf("C LINE %i\n", __LINE__);
    goto _0;
_0:
    printf("C LINE %i\n", __LINE__);
    goto _2;
_2:
    printf("C LINE %i\n", __LINE__);
    goto _2147483646;
_2147483646:
    goto _cleanup;
_cleanup:
    //printf("Exit: Class_1__init_func\n");
    return __return_value;
}
godot_variant Class_1_method_a_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    //printf("Enter: Class_1_method_a_func\n");
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_1_method_a_local_const_initialized)
    {
        {
            uint8_t data[] = {4, 0, 0, 0, 13, 0, 0, 0, 98, 97, 115, 101, 46, 109, 101, 116, 104, 111, 100, 95, 97, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1_method_a_local_const[0], data, 24, &bytesRead, true);
        }
        Class_1_method_a_local_const_initialized = 1;
    }
    godot_variant st_0;
    goto _entry;
_entry:
    printf("C LINE %i\n", __LINE__);
    // DEFINE 67108864;
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_new_nil(&st_0);
    printf("C LINE %i\n", __LINE__);
    goto _0;
_0:
    printf("C LINE %i\n", __LINE__);
    goto _2;
_2:
    printf("C LINE %i\n", __LINE__);
    {
        godot_variant *args[] = {&Class_1_method_a_local_const[0]};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(63, (const godot_variant **)args, 1, &st_0, &err);
    }
    printf("C LINE %i\n", __LINE__);
    goto _2147483646;
_2147483646:
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_destroy(&st_0);
    goto _cleanup;
_cleanup:
    //printf("Exit: Class_1_method_a_func\n");
    return __return_value;
}
godot_variant Class_1_method_b_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    //printf("Enter: Class_1_method_b_func\n");
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_1_method_b_local_const_initialized)
    {
        {
            uint8_t data[] = {4, 0, 0, 0, 13, 0, 0, 0, 98, 97, 115, 101, 46, 109, 101, 116, 104, 111, 100, 95, 98, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1_method_b_local_const[0], data, 24, &bytesRead, true);
        }
        Class_1_method_b_local_const_initialized = 1;
    }
    godot_variant st_0;
    goto _entry;
_entry:
    printf("C LINE %i\n", __LINE__);
    // DEFINE 67108864;
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_new_nil(&st_0);
    printf("C LINE %i\n", __LINE__);
    goto _0;
_0:
    printf("C LINE %i\n", __LINE__);
    goto _2;
_2:
    printf("C LINE %i\n", __LINE__);
    {
        godot_variant *args[] = {&Class_1_method_b_local_const[0]};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(63, (const godot_variant **)args, 1, &st_0, &err);
    }
    printf("C LINE %i\n", __LINE__);
    goto _2147483646;
_2147483646:
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_destroy(&st_0);
    goto _cleanup;
_cleanup:
    //printf("Exit: Class_1_method_b_func\n");
    return __return_value;
}
void Class_1_vtable_init()
{
    vtable_init(&Class_1_vtable, &vtable, 2, "Class_1", 3, (void *)0, Class_1_vtable_methods, Class_1_vtable_method_names);
    VTABLE_METHOD(Class_1_vtable, 0, "_init", Class_1__init_func, (void *)0);
    VTABLE_METHOD(Class_1_vtable, 1, "method_a", Class_1_method_a_func, (void *)0);
    VTABLE_METHOD(Class_1_vtable, 2, "method_b", Class_1_method_b_func, (void *)0);
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
            char data[] = {95, 105, 110, 105, 116};
            api10->godot_string_new(&Class_3__init_strings[0]);
            api10->godot_string_parse_utf8_with_len(&Class_3__init_strings[0], data, 5);
            api10->godot_string_name_new(&Class_3__init_string_names[0], &Class_3__init_strings[0]);
        }
        Class_3__init_local_const_initialized = 1;
    }
    godot_variant st_0;
    goto _entry;
_entry:
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_new_nil(&st_0);
    printf("C LINE %i\n", __LINE__);
    goto _0;
_0:
    printf("C LINE %i\n", __LINE__);
    goto _2;
_2:
    printf("C LINE %i\n", __LINE__);
    {
        p_user_data->__vtable->base->methods[0](p_instance, p_method_data, p_user_data, 0, (void *)0);
    }
    printf("C LINE %i\n", __LINE__);
    goto _2147483646;
_2147483646:
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_destroy(&st_0);
    goto _cleanup;
_cleanup:
    //printf("Exit: Class_3__init_func\n");
    return __return_value;
}
godot_variant Class_3_method_b_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    //printf("Enter: Class_3_method_b_func\n");
    struct Class_3_struct_t *p_user_data = (struct Class_3_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_3_method_b_local_const_initialized)
    {
        {
            uint8_t data[] = {4, 0, 0, 0, 16, 0, 0, 0, 100, 101, 114, 105, 118, 101, 100, 46, 109, 101, 116, 104, 111, 100, 95, 98};
            int bytesRead;
            gd2c10->variant_decode(&Class_3_method_b_local_const[0], data, 24, &bytesRead, true);
        }
        Class_3_method_b_local_const_initialized = 1;
    }
    godot_variant st_0;
    goto _entry;
_entry:
    printf("C LINE %i\n", __LINE__);
    // DEFINE 67108864;
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_new_nil(&st_0);
    printf("C LINE %i\n", __LINE__);
    goto _0;
_0:
    printf("C LINE %i\n", __LINE__);
    goto _2;
_2:
    printf("C LINE %i\n", __LINE__);
    {
        godot_variant *args[] = {&Class_3_method_b_local_const[0]};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(63, (const godot_variant **)args, 1, &st_0, &err);
    }
    printf("C LINE %i\n", __LINE__);
    goto _2147483646;
_2147483646:
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_destroy(&st_0);
    goto _cleanup;
_cleanup:
    //printf("Exit: Class_3_method_b_func\n");
    return __return_value;
}
godot_variant Class_3_method_c_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    //printf("Enter: Class_3_method_c_func\n");
    struct Class_3_struct_t *p_user_data = (struct Class_3_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_3_method_c_local_const_initialized)
    {
        {
            uint8_t data[] = {4, 0, 0, 0, 16, 0, 0, 0, 100, 101, 114, 105, 118, 101, 100, 46, 109, 101, 116, 104, 111, 100, 95, 99};
            int bytesRead;
            gd2c10->variant_decode(&Class_3_method_c_local_const[0], data, 24, &bytesRead, true);
        }
        Class_3_method_c_local_const_initialized = 1;
    }
    godot_variant st_0;
    goto _entry;
_entry:
    printf("C LINE %i\n", __LINE__);
    // DEFINE 67108864;
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_new_nil(&st_0);
    printf("C LINE %i\n", __LINE__);
    goto _0;
_0:
    printf("C LINE %i\n", __LINE__);
    goto _2;
_2:
    printf("C LINE %i\n", __LINE__);
    {
        godot_variant *args[] = {&Class_3_method_c_local_const[0]};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(63, (const godot_variant **)args, 1, &st_0, &err);
    }
    printf("C LINE %i\n", __LINE__);
    goto _2147483646;
_2147483646:
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_destroy(&st_0);
    goto _cleanup;
_cleanup:
    //printf("Exit: Class_3_method_c_func\n");
    return __return_value;
}
void Class_3_vtable_init()
{
    vtable_init(&Class_3_vtable, &Class_1_vtable, 4, "Class_3", 4, (void *)0, Class_3_vtable_methods, Class_3_vtable_method_names);
    VTABLE_METHOD(Class_3_vtable, 0, "_init", Class_3__init_func, (void *)0);
    VTABLE_METHOD(Class_3_vtable, 1, "method_a", Class_1_method_a_func, (void *)0);
    VTABLE_METHOD(Class_3_vtable, 2, "method_b", Class_3_method_b_func, (void *)0);
    VTABLE_METHOD(Class_3_vtable, 3, "method_c", Class_3_method_c_func, (void *)0);
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
godot_variant Class_5__init_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    //printf("Enter: Class_5__init_func\n");
    struct Class_5_struct_t *p_user_data = (struct Class_5_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    goto _entry;
_entry:
    printf("C LINE %i\n", __LINE__);
    goto _0;
_0:
    printf("C LINE %i\n", __LINE__);
    goto _2;
_2:
    printf("C LINE %i\n", __LINE__);
    goto _2147483646;
_2147483646:
    goto _cleanup;
_cleanup:
    //printf("Exit: Class_5__init_func\n");
    return __return_value;
}
godot_variant Class_5_test_isinstance_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    //printf("Enter: Class_5_test_isinstance_func\n");
    struct Class_5_struct_t *p_user_data = (struct Class_5_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_5_test_isinstance_local_const_initialized)
    {
        {
            uint8_t data[] = {4, 0, 0, 0, 13, 0, 0, 0, 114, 101, 115, 58, 47, 47, 98, 97, 115, 101, 46, 103, 100, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5_test_isinstance_local_const[0], data, 24, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 16, 0, 0, 0, 114, 101, 115, 58, 47, 47, 100, 101, 114, 105, 118, 101, 100, 46, 103, 100};
            int bytesRead;
            gd2c10->variant_decode(&Class_5_test_isinstance_local_const[1], data, 24, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 34, 0, 0, 0, 98, 97, 115, 101, 32, 105, 115, 32, 114, 101, 115, 58, 47, 47, 98, 97, 115, 101, 46, 103, 100, 32, 32, 32, 32, 32, 32, 32, 63, 32, 40, 84, 41, 32, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5_test_isinstance_local_const[2], data, 44, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 34, 0, 0, 0, 98, 97, 115, 101, 32, 105, 115, 32, 114, 101, 115, 58, 47, 47, 100, 101, 114, 105, 118, 101, 100, 46, 103, 100, 32, 32, 32, 32, 63, 32, 40, 70, 41, 32, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5_test_isinstance_local_const[3], data, 44, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 34, 0, 0, 0, 100, 101, 114, 105, 118, 101, 100, 32, 105, 115, 32, 114, 101, 115, 58, 47, 47, 98, 97, 115, 101, 46, 103, 100, 32, 32, 32, 32, 63, 32, 40, 84, 41, 32, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5_test_isinstance_local_const[4], data, 44, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 34, 0, 0, 0, 100, 101, 114, 105, 118, 101, 100, 32, 105, 115, 32, 114, 101, 115, 58, 47, 47, 100, 101, 114, 105, 118, 101, 100, 46, 103, 100, 32, 63, 32, 40, 70, 41, 32, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5_test_isinstance_local_const[5], data, 44, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 34, 0, 0, 0, 100, 101, 114, 105, 118, 101, 100, 32, 105, 115, 32, 86, 101, 99, 116, 111, 114, 51, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 63, 32, 40, 70, 41, 32, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5_test_isinstance_local_const[6], data, 44, &bytesRead, true);
        }
        {
            uint8_t data[] = {7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5_test_isinstance_local_const[7], data, 16, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 34, 0, 0, 0, 118, 101, 99, 32, 105, 115, 32, 114, 101, 115, 58, 47, 47, 98, 97, 115, 101, 46, 103, 100, 32, 32, 32, 32, 32, 32, 32, 32, 63, 32, 40, 70, 41, 32, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5_test_isinstance_local_const[8], data, 44, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 34, 0, 0, 0, 118, 101, 99, 32, 105, 115, 32, 114, 101, 115, 58, 47, 47, 100, 101, 114, 105, 118, 101, 100, 46, 103, 100, 32, 32, 32, 32, 32, 63, 32, 40, 70, 41, 32, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5_test_isinstance_local_const[9], data, 44, &bytesRead, true);
        }
        {
            uint8_t data[] = {4, 0, 0, 0, 34, 0, 0, 0, 118, 101, 99, 32, 105, 115, 32, 86, 101, 99, 116, 111, 114, 51, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 63, 32, 40, 84, 41, 32, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_5_test_isinstance_local_const[10], data, 44, &bytesRead, true);
        }
        {
            char data[] = {110, 101, 119};
            api10->godot_string_new(&Class_5_test_isinstance_strings[0]);
            api10->godot_string_parse_utf8_with_len(&Class_5_test_isinstance_strings[0], data, 3);
            api10->godot_string_name_new(&Class_5_test_isinstance_string_names[0], &Class_5_test_isinstance_strings[0]);
        }
        Class_5_test_isinstance_local_const_initialized = 1;
    }
    godot_variant st_0;
    godot_variant st_1;
    godot_variant st_2;
    godot_variant st_3;
    godot_variant st_4;
    godot_variant st_5;
    goto _entry;
_entry:
    printf("C LINE %i\n", __LINE__);
    // DEFINE 67108864;
    printf("C LINE %i\n", __LINE__);
    // DEFINE 67108865;
    printf("C LINE %i\n", __LINE__);
    // DEFINE 67108866;
    printf("C LINE %i\n", __LINE__);
    // DEFINE 67108867;
    printf("C LINE %i\n", __LINE__);
    // DEFINE 67108868;
    printf("C LINE %i\n", __LINE__);
    // DEFINE 67108869;
    printf("C LINE %i\n", __LINE__);
    // DEFINE 67108870;
    printf("C LINE %i\n", __LINE__);
    // DEFINE 67108871;
    printf("C LINE %i\n", __LINE__);
    // DEFINE 67108872;
    printf("C LINE %i\n", __LINE__);
    // DEFINE 67108873;
    printf("C LINE %i\n", __LINE__);
    // DEFINE 67108874;
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_new_nil(&st_0);
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_new_nil(&st_1);
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_new_nil(&st_2);
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_new_nil(&st_3);
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_new_nil(&st_4);
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_new_nil(&st_5);
    printf("C LINE %i\n", __LINE__);
    goto _0;
_0:
    printf("C LINE %i\n", __LINE__);
    goto _2;
_2:
    printf("C LINE %i\n", __LINE__);
    {
        godot_string extension = api10->godot_string_chars_to_utf8(".gd");
        godot_string resource_path = api10->godot_variant_as_string(&Class_5_test_isinstance_local_const[0]);
        if (api10->godot_string_ends_with(&resource_path, &extension))
        {
            godot_string ns = api10->godot_string_chars_to_utf8("ns");
            godot_string new_resource_path = api10->godot_string_operator_plus(&resource_path, &ns);
            api10->godot_string_destroy(&resource_path);
            resource_path = new_resource_path;
            api10->godot_string_destroy(&ns);
        }
        gd2c10->resource_load(&st_2, &resource_path);
        api10->godot_string_destroy(&resource_path);
        api10->godot_string_destroy(&extension);
    }
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_new_copy(&st_0, &st_2);
    printf("C LINE %i\n", __LINE__);
    {
        godot_string extension = api10->godot_string_chars_to_utf8(".gd");
        godot_string resource_path = api10->godot_variant_as_string(&Class_5_test_isinstance_local_const[1]);
        if (api10->godot_string_ends_with(&resource_path, &extension))
        {
            godot_string ns = api10->godot_string_chars_to_utf8("ns");
            godot_string new_resource_path = api10->godot_string_operator_plus(&resource_path, &ns);
            api10->godot_string_destroy(&resource_path);
            resource_path = new_resource_path;
            api10->godot_string_destroy(&ns);
        }
        gd2c10->resource_load(&st_3, &resource_path);
        api10->godot_string_destroy(&resource_path);
        api10->godot_string_destroy(&extension);
    }
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_new_copy(&st_1, &st_3);
    printf("C LINE %i\n", __LINE__);
    {
        godot_variant call_result = api10->godot_variant_call(&st_0, &Class_5_test_isinstance_strings[0], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_4, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_new_copy(&st_2, &st_4);
    printf("C LINE %i\n", __LINE__);
    gd2c10->extends_test(&st_2, &st_0, &st_3);
    printf("C LINE %i\n", __LINE__);
    {
        godot_variant *args[] = {&Class_5_test_isinstance_local_const[2], &st_3};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(63, (const godot_variant **)args, 2, &st_3, &err);
    }
    printf("C LINE %i\n", __LINE__);
    gd2c10->extends_test(&st_2, &st_1, &st_3);
    printf("C LINE %i\n", __LINE__);
    {
        godot_variant *args[] = {&Class_5_test_isinstance_local_const[3], &st_3};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(63, (const godot_variant **)args, 2, &st_3, &err);
    }
    printf("C LINE %i\n", __LINE__);
    {
        godot_variant call_result = api10->godot_variant_call(&st_1, &Class_5_test_isinstance_strings[0], (const godot_variant **)(void *)0, 0, &__error);
        api10->godot_variant_new_copy(&st_5, &call_result);
        api10->godot_variant_destroy(&call_result);
    }
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_new_copy(&st_3, &st_5);
    printf("C LINE %i\n", __LINE__);
    gd2c10->extends_test(&st_3, &st_0, &st_4);
    printf("C LINE %i\n", __LINE__);
    {
        godot_variant *args[] = {&Class_5_test_isinstance_local_const[4], &st_4};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(63, (const godot_variant **)args, 2, &st_4, &err);
    }
    printf("C LINE %i\n", __LINE__);
    gd2c10->extends_test(&st_3, &st_1, &st_4);
    printf("C LINE %i\n", __LINE__);
    {
        godot_variant *args[] = {&Class_5_test_isinstance_local_const[5], &st_4};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(63, (const godot_variant **)args, 2, &st_4, &err);
    }
    printf("C LINE %i\n", __LINE__);
    {
        godot_variant_type vt = api10->godot_variant_get_type(&st_3);
        api10->godot_variant_new_bool(&st_4, (int)vt == 7);
    }
    printf("C LINE %i\n", __LINE__);
    {
        godot_variant *args[] = {&Class_5_test_isinstance_local_const[6], &st_4};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(63, (const godot_variant **)args, 2, &st_4, &err);
    }
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_new_copy(&st_4, &Class_5_test_isinstance_local_const[7]);
    printf("C LINE %i\n", __LINE__);
    gd2c10->extends_test(&st_4, &st_0, &st_5);
    printf("C LINE %i\n", __LINE__);
    {
        godot_variant *args[] = {&Class_5_test_isinstance_local_const[8], &st_5};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(63, (const godot_variant **)args, 2, &st_5, &err);
    }
    printf("C LINE %i\n", __LINE__);
    gd2c10->extends_test(&st_4, &st_1, &st_5);
    printf("C LINE %i\n", __LINE__);
    {
        godot_variant *args[] = {&Class_5_test_isinstance_local_const[9], &st_5};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(63, (const godot_variant **)args, 2, &st_5, &err);
    }
    printf("C LINE %i\n", __LINE__);
    {
        godot_variant_type vt = api10->godot_variant_get_type(&st_4);
        api10->godot_variant_new_bool(&st_5, (int)vt == 7);
    }
    printf("C LINE %i\n", __LINE__);
    {
        godot_variant *args[] = {&Class_5_test_isinstance_local_const[10], &st_5};
        godot_variant_call_error err;
        gd2c10->call_gdscript_builtin(63, (const godot_variant **)args, 2, &st_5, &err);
    }
    printf("C LINE %i\n", __LINE__);
    goto _2147483646;
_2147483646:
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_destroy(&st_0);
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_destroy(&st_1);
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_destroy(&st_2);
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_destroy(&st_3);
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_destroy(&st_4);
    printf("C LINE %i\n", __LINE__);
    api10->godot_variant_destroy(&st_5);
    goto _cleanup;
_cleanup:
    //printf("Exit: Class_5_test_isinstance_func\n");
    return __return_value;
}
void Class_5_vtable_init()
{
    vtable_init(&Class_5_vtable, &vtable, 6, "Class_5", 2, (void *)0, Class_5_vtable_methods, Class_5_vtable_method_names);
    VTABLE_METHOD(Class_5_vtable, 0, "_init", Class_5__init_func, (void *)0);
    VTABLE_METHOD(Class_5_vtable, 1, "test_isinstance", Class_5_test_isinstance_func, (void *)0);
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
    if (0 != Class_1_method_a_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_1_method_a_local_const[0]);
    }
    if (0 != Class_1_method_b_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_1_method_b_local_const[0]);
    }
    if (0 != Class_3_method_b_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_3_method_b_local_const[0]);
    }
    if (0 != Class_3_method_c_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_3_method_c_local_const[0]);
    }
    if (0 != Class_5_test_isinstance_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_5_test_isinstance_local_const[0]);
        api10->godot_variant_destroy(&Class_5_test_isinstance_local_const[1]);
        api10->godot_variant_destroy(&Class_5_test_isinstance_local_const[2]);
        api10->godot_variant_destroy(&Class_5_test_isinstance_local_const[3]);
        api10->godot_variant_destroy(&Class_5_test_isinstance_local_const[4]);
        api10->godot_variant_destroy(&Class_5_test_isinstance_local_const[5]);
        api10->godot_variant_destroy(&Class_5_test_isinstance_local_const[6]);
        api10->godot_variant_destroy(&Class_5_test_isinstance_local_const[7]);
        api10->godot_variant_destroy(&Class_5_test_isinstance_local_const[8]);
        api10->godot_variant_destroy(&Class_5_test_isinstance_local_const[9]);
        api10->godot_variant_destroy(&Class_5_test_isinstance_local_const[10]);
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
    api10->godot_variant_destroy(&global_constants_array[487]);
    api10->godot_variant_destroy(&global_constants_array[488]);
    api10->godot_variant_destroy(&global_constants_array[489]);
    api10->godot_variant_destroy(&global_constants_array[490]);
    api10->godot_variant_destroy(&global_constants_array[491]);
    api10->godot_variant_destroy(&global_constants_array[492]);
    api10->godot_variant_destroy(&global_constants_array[493]);
    api10->godot_variant_destroy(&global_constants_array[494]);
    api10->godot_variant_destroy(&global_constants_array[495]);
    api10->godot_variant_destroy(&global_constants_array[496]);
    api10->godot_variant_destroy(&global_constants_array[497]);
    api10->godot_variant_destroy(&global_constants_array[498]);
    api10->godot_variant_destroy(&global_constants_array[499]);
    api10->godot_variant_destroy(&global_constants_array[500]);
    api10->godot_variant_destroy(&global_constants_array[501]);
    api10->godot_variant_destroy(&global_constants_array[502]);
    api10->godot_variant_destroy(&global_constants_array[503]);
    api10->godot_variant_destroy(&global_constants_array[504]);
    api10->godot_variant_destroy(&global_constants_array[505]);
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
    api10->godot_variant_destroy(&global_singletons_array[0]);
    api10->godot_variant_destroy(&global_singletons_array[1]);
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
    api10->godot_variant_destroy(&global_singletons_array[2]);
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
    api10->godot_variant_destroy(&global_singletons_array[3]);
    api10->godot_variant_destroy(&global_singletons_array[4]);
    api10->godot_variant_destroy(&global_singletons_array[5]);
    api10->godot_variant_destroy(&global_singletons_array[6]);
    api10->godot_variant_destroy(&global_singletons_array[7]);
    api10->godot_variant_destroy(&global_singletons_array[8]);
    api10->godot_variant_destroy(&global_classdb_array[72]);
    api10->godot_variant_destroy(&global_singletons_array[9]);
    api10->godot_variant_destroy(&global_singletons_array[10]);
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
    api10->godot_variant_destroy(&global_singletons_array[11]);
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
    api10->godot_variant_destroy(&global_singletons_array[12]);
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
    api10->godot_variant_destroy(&global_classdb_array[587]);
    api10->godot_variant_destroy(&global_classdb_array[588]);
    api10->godot_variant_destroy(&global_classdb_array[589]);
    api10->godot_variant_destroy(&global_classdb_array[590]);
    api10->godot_variant_destroy(&global_classdb_array[591]);
    api10->godot_variant_destroy(&global_classdb_array[592]);
    api10->godot_variant_destroy(&global_classdb_array[593]);
    api10->godot_variant_destroy(&global_classdb_array[594]);
    api10->godot_variant_destroy(&global_classdb_array[595]);
    api10->godot_variant_destroy(&global_classdb_array[596]);
    api10->godot_variant_destroy(&global_classdb_array[597]);
    api10->godot_variant_destroy(&global_classdb_array[598]);
    api10->godot_variant_destroy(&global_classdb_array[599]);
    api10->godot_variant_destroy(&global_classdb_array[600]);
    api10->godot_variant_destroy(&global_classdb_array[601]);
    api10->godot_variant_destroy(&global_classdb_array[602]);
    api10->godot_variant_destroy(&global_classdb_array[603]);
    api10->godot_variant_destroy(&global_classdb_array[604]);
    api10->godot_variant_destroy(&global_classdb_array[605]);
    api10->godot_variant_destroy(&global_classdb_array[606]);
    api10->godot_variant_destroy(&global_classdb_array[607]);
    api10->godot_variant_destroy(&global_classdb_array[608]);
    api10->godot_variant_destroy(&global_classdb_array[609]);
    api10->godot_variant_destroy(&global_singletons_array[13]);
    api10->godot_variant_destroy(&global_singletons_array[14]);
    api10->godot_variant_destroy(&global_singletons_array[15]);
    api10->godot_variant_destroy(&global_singletons_array[16]);
    api10->godot_variant_destroy(&global_singletons_array[17]);
    api10->godot_variant_destroy(&global_singletons_array[18]);
    api10->godot_variant_destroy(&global_singletons_array[19]);
    api10->godot_variant_destroy(&global_singletons_array[20]);
    api10->godot_variant_destroy(&global_singletons_array[21]);
    api10->godot_variant_destroy(&global_singletons_array[22]);
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
        nativescript10->godot_nativescript_register_class(p_handle, "Class_1", "Node", create, destroy);
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
        //printf("  Register method: Class_1_method_a_func\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_1_method_a_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "method_a", attributes, method);
    }
    {
        //printf("  Register method: Class_1_method_b_func\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_1_method_b_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "method_b", attributes, method);
    }
    Class_1_vtable_init();
    {
        //printf("  Register class: Class_3\n");
        godot_instance_create_func create = {NULL, NULL, NULL};
        create.create_func = Class_3_ctor;
        godot_instance_destroy_func destroy = {NULL, NULL, NULL};
        destroy.destroy_func = Class_3_dtor;
        nativescript10->godot_nativescript_register_class(p_handle, "Class_3", "Node", create, destroy);
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
        //printf("  Register method: Class_1_method_a_func\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_1_method_a_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_3", "method_a", attributes, method);
    }
    {
        //printf("  Register method: Class_3_method_b_func\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_3_method_b_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_3", "method_b", attributes, method);
    }
    {
        //printf("  Register method: Class_3_method_c_func\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_3_method_c_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_3", "method_c", attributes, method);
    }
    Class_3_vtable_init();
    {
        //printf("  Register class: Class_5\n");
        godot_instance_create_func create = {NULL, NULL, NULL};
        create.create_func = Class_5_ctor;
        godot_instance_destroy_func destroy = {NULL, NULL, NULL};
        destroy.destroy_func = Class_5_dtor;
        nativescript10->godot_nativescript_register_class(p_handle, "Class_5", "Node", create, destroy);
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
        //printf("  Register method: Class_5_test_isinstance_func\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_5_test_isinstance_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_5", "test_isinstance", attributes, method);
    }
    Class_5_vtable_init();
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
    api10->godot_variant_new_int(&global_constants_array[265], 134217728);
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
    api10->godot_variant_new_int(&global_constants_array[311], 2);
    api10->godot_variant_new_int(&global_constants_array[312], 14);
    api10->godot_variant_new_int(&global_constants_array[313], 15);
    api10->godot_variant_new_int(&global_constants_array[314], 7);
    api10->godot_variant_new_int(&global_constants_array[315], 1);
    api10->godot_variant_new_int(&global_constants_array[316], 3);
    api10->godot_variant_new_int(&global_constants_array[317], 1);
    api10->godot_variant_new_int(&global_constants_array[318], 10);
    api10->godot_variant_new_int(&global_constants_array[319], 11);
    api10->godot_variant_new_int(&global_constants_array[320], 12);
    api10->godot_variant_new_int(&global_constants_array[321], 13);
    api10->godot_variant_new_int(&global_constants_array[322], 14);
    api10->godot_variant_new_int(&global_constants_array[323], 15);
    api10->godot_variant_new_int(&global_constants_array[324], 4);
    api10->godot_variant_new_int(&global_constants_array[325], 6);
    api10->godot_variant_new_int(&global_constants_array[326], 8);
    api10->godot_variant_new_int(&global_constants_array[327], 5);
    api10->godot_variant_new_int(&global_constants_array[328], 7);
    api10->godot_variant_new_int(&global_constants_array[329], 9);
    api10->godot_variant_new_int(&global_constants_array[330], 0);
    api10->godot_variant_new_int(&global_constants_array[331], 1);
    api10->godot_variant_new_int(&global_constants_array[332], 2);
    api10->godot_variant_new_int(&global_constants_array[333], 3);
    api10->godot_variant_new_int(&global_constants_array[334], 4);
    api10->godot_variant_new_int(&global_constants_array[335], 5);
    api10->godot_variant_new_int(&global_constants_array[336], 6);
    api10->godot_variant_new_int(&global_constants_array[337], 7);
    api10->godot_variant_new_int(&global_constants_array[338], 8);
    api10->godot_variant_new_int(&global_constants_array[339], 9);
    api10->godot_variant_new_int(&global_constants_array[340], 10);
    api10->godot_variant_new_int(&global_constants_array[341], 0);
    api10->godot_variant_new_int(&global_constants_array[342], 1);
    api10->godot_variant_new_int(&global_constants_array[343], 2);
    api10->godot_variant_new_int(&global_constants_array[344], 3);
    api10->godot_variant_new_int(&global_constants_array[345], 6);
    api10->godot_variant_new_int(&global_constants_array[346], 7);
    api10->godot_variant_new_int(&global_constants_array[347], 2);
    api10->godot_variant_new_int(&global_constants_array[348], 4);
    api10->godot_variant_new_int(&global_constants_array[349], 0);
    api10->godot_variant_new_int(&global_constants_array[350], 1);
    api10->godot_variant_new_int(&global_constants_array[351], 8);
    api10->godot_variant_new_int(&global_constants_array[352], 9);
    api10->godot_variant_new_int(&global_constants_array[353], 10);
    api10->godot_variant_new_int(&global_constants_array[354], 11);
    api10->godot_variant_new_int(&global_constants_array[355], 12);
    api10->godot_variant_new_int(&global_constants_array[356], 13);
    api10->godot_variant_new_int(&global_constants_array[357], 14);
    api10->godot_variant_new_int(&global_constants_array[358], 0);
    api10->godot_variant_new_int(&global_constants_array[359], 1);
    api10->godot_variant_new_int(&global_constants_array[360], 2);
    api10->godot_variant_new_int(&global_constants_array[361], 3);
    api10->godot_variant_new_int(&global_constants_array[362], 4);
    api10->godot_variant_new_int(&global_constants_array[363], 5);
    api10->godot_variant_new_int(&global_constants_array[364], 6);
    api10->godot_variant_new_int(&global_constants_array[365], 7);
    api10->godot_variant_new_int(&global_constants_array[366], 8);
    api10->godot_variant_new_int(&global_constants_array[367], 9);
    api10->godot_variant_new_int(&global_constants_array[368], 10);
    api10->godot_variant_new_int(&global_constants_array[369], 11);
    api10->godot_variant_new_int(&global_constants_array[370], 12);
    api10->godot_variant_new_int(&global_constants_array[371], 13);
    api10->godot_variant_new_int(&global_constants_array[372], 14);
    api10->godot_variant_new_int(&global_constants_array[373], 15);
    api10->godot_variant_new_int(&global_constants_array[374], 16);
    api10->godot_variant_new_int(&global_constants_array[375], 17);
    api10->godot_variant_new_int(&global_constants_array[376], 18);
    api10->godot_variant_new_int(&global_constants_array[377], 19);
    api10->godot_variant_new_int(&global_constants_array[378], 20);
    api10->godot_variant_new_int(&global_constants_array[379], 21);
    api10->godot_variant_new_int(&global_constants_array[380], 22);
    api10->godot_variant_new_int(&global_constants_array[381], 23);
    api10->godot_variant_new_int(&global_constants_array[382], 24);
    api10->godot_variant_new_int(&global_constants_array[383], 25);
    api10->godot_variant_new_int(&global_constants_array[384], 26);
    api10->godot_variant_new_int(&global_constants_array[385], 27);
    api10->godot_variant_new_int(&global_constants_array[386], 28);
    api10->godot_variant_new_int(&global_constants_array[387], 29);
    api10->godot_variant_new_int(&global_constants_array[388], 30);
    api10->godot_variant_new_int(&global_constants_array[389], 31);
    api10->godot_variant_new_int(&global_constants_array[390], 32);
    api10->godot_variant_new_int(&global_constants_array[391], 33);
    api10->godot_variant_new_int(&global_constants_array[392], 34);
    api10->godot_variant_new_int(&global_constants_array[393], 35);
    api10->godot_variant_new_int(&global_constants_array[394], 36);
    api10->godot_variant_new_int(&global_constants_array[395], 37);
    api10->godot_variant_new_int(&global_constants_array[396], 38);
    api10->godot_variant_new_int(&global_constants_array[397], 39);
    api10->godot_variant_new_int(&global_constants_array[398], 40);
    api10->godot_variant_new_int(&global_constants_array[399], 41);
    api10->godot_variant_new_int(&global_constants_array[400], 42);
    api10->godot_variant_new_int(&global_constants_array[401], 43);
    api10->godot_variant_new_int(&global_constants_array[402], 44);
    api10->godot_variant_new_int(&global_constants_array[403], 45);
    api10->godot_variant_new_int(&global_constants_array[404], 46);
    api10->godot_variant_new_int(&global_constants_array[405], 47);
    api10->godot_variant_new_int(&global_constants_array[406], 48);
    api10->godot_variant_new_int(&global_constants_array[407], 0);
    api10->godot_variant_new_int(&global_constants_array[408], 1);
    api10->godot_variant_new_int(&global_constants_array[409], 2);
    api10->godot_variant_new_int(&global_constants_array[410], 3);
    api10->godot_variant_new_int(&global_constants_array[411], 4);
    api10->godot_variant_new_int(&global_constants_array[412], 5);
    api10->godot_variant_new_int(&global_constants_array[413], 7);
    api10->godot_variant_new_int(&global_constants_array[414], 8);
    api10->godot_variant_new_int(&global_constants_array[415], 9);
    api10->godot_variant_new_int(&global_constants_array[416], 10);
    api10->godot_variant_new_int(&global_constants_array[417], 11);
    api10->godot_variant_new_int(&global_constants_array[418], 12);
    api10->godot_variant_new_int(&global_constants_array[419], 13);
    api10->godot_variant_new_int(&global_constants_array[420], 14);
    api10->godot_variant_new_int(&global_constants_array[421], 15);
    api10->godot_variant_new_int(&global_constants_array[422], 16);
    api10->godot_variant_new_int(&global_constants_array[423], 17);
    api10->godot_variant_new_int(&global_constants_array[424], 18);
    api10->godot_variant_new_int(&global_constants_array[425], 19);
    api10->godot_variant_new_int(&global_constants_array[426], 20);
    api10->godot_variant_new_int(&global_constants_array[427], 21);
    api10->godot_variant_new_int(&global_constants_array[428], 22);
    api10->godot_variant_new_int(&global_constants_array[429], 1);
    api10->godot_variant_new_int(&global_constants_array[430], 2);
    api10->godot_variant_new_int(&global_constants_array[431], 4);
    api10->godot_variant_new_int(&global_constants_array[432], 8);
    api10->godot_variant_new_int(&global_constants_array[433], 16);
    api10->godot_variant_new_int(&global_constants_array[434], 32);
    api10->godot_variant_new_int(&global_constants_array[435], 64);
    api10->godot_variant_new_int(&global_constants_array[436], 128);
    api10->godot_variant_new_int(&global_constants_array[437], 256);
    api10->godot_variant_new_int(&global_constants_array[438], 2048);
    api10->godot_variant_new_int(&global_constants_array[439], 4096);
    api10->godot_variant_new_int(&global_constants_array[440], 8192);
    api10->godot_variant_new_int(&global_constants_array[441], 7);
    api10->godot_variant_new_int(&global_constants_array[442], 71);
    api10->godot_variant_new_int(&global_constants_array[443], 5);
    api10->godot_variant_new_int(&global_constants_array[444], 1);
    api10->godot_variant_new_int(&global_constants_array[445], 2);
    api10->godot_variant_new_int(&global_constants_array[446], 4);
    api10->godot_variant_new_int(&global_constants_array[447], 8);
    api10->godot_variant_new_int(&global_constants_array[448], 16);
    api10->godot_variant_new_int(&global_constants_array[449], 32);
    api10->godot_variant_new_int(&global_constants_array[450], 64);
    api10->godot_variant_new_int(&global_constants_array[451], 1);
    api10->godot_variant_new_int(&global_constants_array[452], 0);
    api10->godot_variant_new_int(&global_constants_array[453], 1);
    api10->godot_variant_new_int(&global_constants_array[454], 2);
    api10->godot_variant_new_int(&global_constants_array[455], 3);
    api10->godot_variant_new_int(&global_constants_array[456], 4);
    api10->godot_variant_new_int(&global_constants_array[457], 5);
    api10->godot_variant_new_int(&global_constants_array[458], 6);
    api10->godot_variant_new_int(&global_constants_array[459], 7);
    api10->godot_variant_new_int(&global_constants_array[460], 8);
    api10->godot_variant_new_int(&global_constants_array[461], 9);
    api10->godot_variant_new_int(&global_constants_array[462], 10);
    api10->godot_variant_new_int(&global_constants_array[463], 11);
    api10->godot_variant_new_int(&global_constants_array[464], 12);
    api10->godot_variant_new_int(&global_constants_array[465], 13);
    api10->godot_variant_new_int(&global_constants_array[466], 14);
    api10->godot_variant_new_int(&global_constants_array[467], 15);
    api10->godot_variant_new_int(&global_constants_array[468], 16);
    api10->godot_variant_new_int(&global_constants_array[469], 17);
    api10->godot_variant_new_int(&global_constants_array[470], 18);
    api10->godot_variant_new_int(&global_constants_array[471], 19);
    api10->godot_variant_new_int(&global_constants_array[472], 20);
    api10->godot_variant_new_int(&global_constants_array[473], 21);
    api10->godot_variant_new_int(&global_constants_array[474], 22);
    api10->godot_variant_new_int(&global_constants_array[475], 23);
    api10->godot_variant_new_int(&global_constants_array[476], 24);
    api10->godot_variant_new_int(&global_constants_array[477], 25);
    api10->godot_variant_new_int(&global_constants_array[478], 26);
    api10->godot_variant_new_int(&global_constants_array[479], 27);
    api10->godot_variant_new_int(&global_constants_array[480], 0);
    api10->godot_variant_new_int(&global_constants_array[481], 1);
    api10->godot_variant_new_int(&global_constants_array[482], 2);
    api10->godot_variant_new_int(&global_constants_array[483], 3);
    api10->godot_variant_new_int(&global_constants_array[484], 4);
    api10->godot_variant_new_int(&global_constants_array[485], 5);
    api10->godot_variant_new_int(&global_constants_array[486], 6);
    api10->godot_variant_new_int(&global_constants_array[487], 7);
    api10->godot_variant_new_int(&global_constants_array[488], 8);
    api10->godot_variant_new_int(&global_constants_array[489], 9);
    api10->godot_variant_new_int(&global_constants_array[490], 10);
    api10->godot_variant_new_int(&global_constants_array[491], 11);
    api10->godot_variant_new_int(&global_constants_array[492], 12);
    api10->godot_variant_new_int(&global_constants_array[493], 13);
    api10->godot_variant_new_int(&global_constants_array[494], 14);
    api10->godot_variant_new_int(&global_constants_array[495], 15);
    api10->godot_variant_new_int(&global_constants_array[496], 16);
    api10->godot_variant_new_int(&global_constants_array[497], 17);
    api10->godot_variant_new_int(&global_constants_array[498], 18);
    api10->godot_variant_new_int(&global_constants_array[499], 19);
    api10->godot_variant_new_int(&global_constants_array[500], 20);
    api10->godot_variant_new_int(&global_constants_array[501], 21);
    api10->godot_variant_new_int(&global_constants_array[502], 22);
    api10->godot_variant_new_int(&global_constants_array[503], 23);
    api10->godot_variant_new_int(&global_constants_array[504], 24);
    api10->godot_variant_new_int(&global_constants_array[505], 25);
    api10->godot_variant_new_real(&global_hard_coded_constants_array[0], 3.141593);
    api10->godot_variant_new_real(&global_hard_coded_constants_array[1], 6.283185);
    api10->godot_variant_new_real(&global_hard_coded_constants_array[2], INFINITY);
    api10->godot_variant_new_real(&global_hard_coded_constants_array[3], NAN);
    {
        // ResourceFormatLoader
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 76, 111, 97, 100, 101, 114};
        register_classdb_global(&global_classdb_array[0], (const char *)data, 20);
    }
    {
        // Object
        char data[] = {79, 98, 106, 101, 99, 116};
        register_classdb_global(&global_classdb_array[1], (const char *)data, 6);
    }
    {
        // Reference
        char data[] = {82, 101, 102, 101, 114, 101, 110, 99, 101};
        register_classdb_global(&global_classdb_array[2], (const char *)data, 9);
    }
    {
        // ResourceFormatSaver
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 83, 97, 118, 101, 114};
        register_classdb_global(&global_classdb_array[3], (const char *)data, 19);
    }
    {
        // Resource
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101};
        register_classdb_global(&global_classdb_array[4], (const char *)data, 8);
    }
    {
        // Script
        char data[] = {83, 99, 114, 105, 112, 116};
        register_classdb_global(&global_classdb_array[5], (const char *)data, 6);
    }
    {
        // WeakRef
        char data[] = {87, 101, 97, 107, 82, 101, 102};
        register_classdb_global(&global_classdb_array[6], (const char *)data, 7);
    }
    {
        // Image
        char data[] = {73, 109, 97, 103, 101};
        register_classdb_global(&global_classdb_array[7], (const char *)data, 5);
    }
    {
        // InputEvent
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116};
        register_classdb_global(&global_classdb_array[8], (const char *)data, 10);
    }
    {
        // InputEventWithModifiers
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 87, 105, 116, 104, 77, 111, 100, 105, 102, 105, 101, 114, 115};
        register_classdb_global(&global_classdb_array[9], (const char *)data, 23);
    }
    {
        // InputEventKey
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 75, 101, 121};
        register_classdb_global(&global_classdb_array[10], (const char *)data, 13);
    }
    {
        // InputEventMouse
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 77, 111, 117, 115, 101};
        register_classdb_global(&global_classdb_array[11], (const char *)data, 15);
    }
    {
        // InputEventMouseButton
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 77, 111, 117, 115, 101, 66, 117, 116, 116, 111, 110};
        register_classdb_global(&global_classdb_array[12], (const char *)data, 21);
    }
    {
        // AStar2D
        char data[] = {65, 83, 116, 97, 114, 50, 68};
        register_classdb_global(&global_classdb_array[13], (const char *)data, 7);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("TranslationServer");
        api10->godot_variant_new_object(&global_singletons_array[0], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("VisualServer");
        api10->godot_variant_new_object(&global_singletons_array[1], singleton);
    }
    {
        // InputEventMouseMotion
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 77, 111, 117, 115, 101, 77, 111, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[14], (const char *)data, 21);
    }
    {
        // InputEventJoypadButton
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 74, 111, 121, 112, 97, 100, 66, 117, 116, 116, 111, 110};
        register_classdb_global(&global_classdb_array[15], (const char *)data, 22);
    }
    {
        // InputEventJoypadMotion
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 74, 111, 121, 112, 97, 100, 77, 111, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[16], (const char *)data, 22);
    }
    {
        // InputEventScreenDrag
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 83, 99, 114, 101, 101, 110, 68, 114, 97, 103};
        register_classdb_global(&global_classdb_array[17], (const char *)data, 20);
    }
    {
        // InputEventScreenTouch
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 83, 99, 114, 101, 101, 110, 84, 111, 117, 99, 104};
        register_classdb_global(&global_classdb_array[18], (const char *)data, 21);
    }
    {
        // InputEventAction
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 65, 99, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[19], (const char *)data, 16);
    }
    {
        // InputEventGesture
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 71, 101, 115, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[20], (const char *)data, 17);
    }
    {
        // InputEventMagnifyGesture
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 77, 97, 103, 110, 105, 102, 121, 71, 101, 115, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[21], (const char *)data, 24);
    }
    {
        // InputEventPanGesture
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 80, 97, 110, 71, 101, 115, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[22], (const char *)data, 20);
    }
    {
        // InputEventMIDI
        char data[] = {73, 110, 112, 117, 116, 69, 118, 101, 110, 116, 77, 73, 68, 73};
        register_classdb_global(&global_classdb_array[23], (const char *)data, 14);
    }
    {
        // FuncRef
        char data[] = {70, 117, 110, 99, 82, 101, 102};
        register_classdb_global(&global_classdb_array[24], (const char *)data, 7);
    }
    {
        // StreamPeer
        char data[] = {83, 116, 114, 101, 97, 109, 80, 101, 101, 114};
        register_classdb_global(&global_classdb_array[25], (const char *)data, 10);
    }
    {
        // StreamPeerBuffer
        char data[] = {83, 116, 114, 101, 97, 109, 80, 101, 101, 114, 66, 117, 102, 102, 101, 114};
        register_classdb_global(&global_classdb_array[26], (const char *)data, 16);
    }
    {
        // StreamPeerTCP
        char data[] = {83, 116, 114, 101, 97, 109, 80, 101, 101, 114, 84, 67, 80};
        register_classdb_global(&global_classdb_array[27], (const char *)data, 13);
    }
    {
        // TCP_Server
        char data[] = {84, 67, 80, 95, 83, 101, 114, 118, 101, 114};
        register_classdb_global(&global_classdb_array[28], (const char *)data, 10);
    }
    {
        // PacketPeer
        char data[] = {80, 97, 99, 107, 101, 116, 80, 101, 101, 114};
        register_classdb_global(&global_classdb_array[29], (const char *)data, 10);
    }
    {
        // PacketPeerUDP
        char data[] = {80, 97, 99, 107, 101, 116, 80, 101, 101, 114, 85, 68, 80};
        register_classdb_global(&global_classdb_array[30], (const char *)data, 13);
    }
    {
        // HashingContext
        char data[] = {72, 97, 115, 104, 105, 110, 103, 67, 111, 110, 116, 101, 120, 116};
        register_classdb_global(&global_classdb_array[31], (const char *)data, 14);
    }
    {
        // X509Certificate
        char data[] = {88, 53, 48, 57, 67, 101, 114, 116, 105, 102, 105, 99, 97, 116, 101};
        register_classdb_global(&global_classdb_array[32], (const char *)data, 15);
    }
    {
        // CryptoKey
        char data[] = {67, 114, 121, 112, 116, 111, 75, 101, 121};
        register_classdb_global(&global_classdb_array[33], (const char *)data, 9);
    }
    {
        // Crypto
        char data[] = {67, 114, 121, 112, 116, 111};
        register_classdb_global(&global_classdb_array[34], (const char *)data, 6);
    }
    {
        // StreamPeerSSL
        char data[] = {83, 116, 114, 101, 97, 109, 80, 101, 101, 114, 83, 83, 76};
        register_classdb_global(&global_classdb_array[35], (const char *)data, 13);
    }
    {
        // ResourceFormatSaverCrypto
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 83, 97, 118, 101, 114, 67, 114, 121, 112, 116, 111};
        register_classdb_global(&global_classdb_array[36], (const char *)data, 25);
    }
    {
        // ResourceFormatLoaderCrypto
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 70, 111, 114, 109, 97, 116, 76, 111, 97, 100, 101, 114, 67, 114, 121, 112, 116, 111};
        register_classdb_global(&global_classdb_array[37], (const char *)data, 26);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("IP");
        api10->godot_variant_new_object(&global_singletons_array[2], singleton);
    }
    {
        // PacketPeerStream
        char data[] = {80, 97, 99, 107, 101, 116, 80, 101, 101, 114, 83, 116, 114, 101, 97, 109};
        register_classdb_global(&global_classdb_array[38], (const char *)data, 16);
    }
    {
        // NetworkedMultiplayerPeer
        char data[] = {78, 101, 116, 119, 111, 114, 107, 101, 100, 77, 117, 108, 116, 105, 112, 108, 97, 121, 101, 114, 80, 101, 101, 114};
        register_classdb_global(&global_classdb_array[39], (const char *)data, 24);
    }
    {
        // MultiplayerAPI
        char data[] = {77, 117, 108, 116, 105, 112, 108, 97, 121, 101, 114, 65, 80, 73};
        register_classdb_global(&global_classdb_array[40], (const char *)data, 14);
    }
    {
        // MainLoop
        char data[] = {77, 97, 105, 110, 76, 111, 111, 112};
        register_classdb_global(&global_classdb_array[41], (const char *)data, 8);
    }
    {
        // Translation
        char data[] = {84, 114, 97, 110, 115, 108, 97, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[42], (const char *)data, 11);
    }
    {
        // PHashTranslation
        char data[] = {80, 72, 97, 115, 104, 84, 114, 97, 110, 115, 108, 97, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[43], (const char *)data, 16);
    }
    {
        // UndoRedo
        char data[] = {85, 110, 100, 111, 82, 101, 100, 111};
        register_classdb_global(&global_classdb_array[44], (const char *)data, 8);
    }
    {
        // HTTPClient
        char data[] = {72, 84, 84, 80, 67, 108, 105, 101, 110, 116};
        register_classdb_global(&global_classdb_array[45], (const char *)data, 10);
    }
    {
        // TriangleMesh
        char data[] = {84, 114, 105, 97, 110, 103, 108, 101, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[46], (const char *)data, 12);
    }
    {
        // ResourceInteractiveLoader
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 73, 110, 116, 101, 114, 97, 99, 116, 105, 118, 101, 76, 111, 97, 100, 101, 114};
        register_classdb_global(&global_classdb_array[47], (const char *)data, 25);
    }
    {
        // _File
        char data[] = {95, 70, 105, 108, 101};
        register_classdb_global(&global_classdb_array[48], (const char *)data, 5);
    }
    {
        // _Directory
        char data[] = {95, 68, 105, 114, 101, 99, 116, 111, 114, 121};
        register_classdb_global(&global_classdb_array[49], (const char *)data, 10);
    }
    {
        // _Thread
        char data[] = {95, 84, 104, 114, 101, 97, 100};
        register_classdb_global(&global_classdb_array[50], (const char *)data, 7);
    }
    {
        // _Mutex
        char data[] = {95, 77, 117, 116, 101, 120};
        register_classdb_global(&global_classdb_array[51], (const char *)data, 6);
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
        // ConfigFile
        char data[] = {67, 111, 110, 102, 105, 103, 70, 105, 108, 101};
        register_classdb_global(&global_classdb_array[54], (const char *)data, 10);
    }
    {
        // PCKPacker
        char data[] = {80, 67, 75, 80, 97, 99, 107, 101, 114};
        register_classdb_global(&global_classdb_array[55], (const char *)data, 9);
    }
    {
        // PackedDataContainer
        char data[] = {80, 97, 99, 107, 101, 100, 68, 97, 116, 97, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[56], (const char *)data, 19);
    }
    {
        // PackedDataContainerRef
        char data[] = {80, 97, 99, 107, 101, 100, 68, 97, 116, 97, 67, 111, 110, 116, 97, 105, 110, 101, 114, 82, 101, 102};
        register_classdb_global(&global_classdb_array[57], (const char *)data, 22);
    }
    {
        // AStar
        char data[] = {65, 83, 116, 97, 114};
        register_classdb_global(&global_classdb_array[58], (const char *)data, 5);
    }
    {
        // EncodedObjectAsID
        char data[] = {69, 110, 99, 111, 100, 101, 100, 79, 98, 106, 101, 99, 116, 65, 115, 73, 68};
        register_classdb_global(&global_classdb_array[59], (const char *)data, 17);
    }
    {
        // RandomNumberGenerator
        char data[] = {82, 97, 110, 100, 111, 109, 78, 117, 109, 98, 101, 114, 71, 101, 110, 101, 114, 97, 116, 111, 114};
        register_classdb_global(&global_classdb_array[60], (const char *)data, 21);
    }
    {
        // JSONParseResult
        char data[] = {74, 83, 79, 78, 80, 97, 114, 115, 101, 82, 101, 115, 117, 108, 116};
        register_classdb_global(&global_classdb_array[61], (const char *)data, 15);
    }
    {
        // ResourceImporter
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 73, 109, 112, 111, 114, 116, 101, 114};
        register_classdb_global(&global_classdb_array[62], (const char *)data, 16);
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
        // _ResourceLoader
        char data[] = {95, 82, 101, 115, 111, 117, 114, 99, 101, 76, 111, 97, 100, 101, 114};
        register_classdb_global(&global_classdb_array[65], (const char *)data, 15);
    }
    {
        // _ResourceSaver
        char data[] = {95, 82, 101, 115, 111, 117, 114, 99, 101, 83, 97, 118, 101, 114};
        register_classdb_global(&global_classdb_array[66], (const char *)data, 14);
    }
    {
        // _OS
        char data[] = {95, 79, 83};
        register_classdb_global(&global_classdb_array[67], (const char *)data, 3);
    }
    {
        // _Engine
        char data[] = {95, 69, 110, 103, 105, 110, 101};
        register_classdb_global(&global_classdb_array[68], (const char *)data, 7);
    }
    {
        // _ClassDB
        char data[] = {95, 67, 108, 97, 115, 115, 68, 66};
        register_classdb_global(&global_classdb_array[69], (const char *)data, 8);
    }
    {
        // _Marshalls
        char data[] = {95, 77, 97, 114, 115, 104, 97, 108, 108, 115};
        register_classdb_global(&global_classdb_array[70], (const char *)data, 10);
    }
    {
        // _JSON
        char data[] = {95, 74, 83, 79, 78};
        register_classdb_global(&global_classdb_array[71], (const char *)data, 5);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("ProjectSettings");
        api10->godot_variant_new_object(&global_singletons_array[3], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("InputMap");
        api10->godot_variant_new_object(&global_singletons_array[4], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("Performance");
        api10->godot_variant_new_object(&global_singletons_array[5], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("CameraServer");
        api10->godot_variant_new_object(&global_singletons_array[6], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("AudioServer");
        api10->godot_variant_new_object(&global_singletons_array[7], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("ARVRServer");
        api10->godot_variant_new_object(&global_singletons_array[8], singleton);
    }
    {
        // Expression
        char data[] = {69, 120, 112, 114, 101, 115, 115, 105, 111, 110};
        register_classdb_global(&global_classdb_array[72], (const char *)data, 10);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("PhysicsServer");
        api10->godot_variant_new_object(&global_singletons_array[9], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("Physics2DServer");
        api10->godot_variant_new_object(&global_singletons_array[10], singleton);
    }
    {
        // AudioStreamRandomPitch
        char data[] = {65, 117, 100, 105, 111, 83, 116, 114, 101, 97, 109, 82, 97, 110, 100, 111, 109, 80, 105, 116, 99, 104};
        register_classdb_global(&global_classdb_array[73], (const char *)data, 22);
    }
    {
        // AudioEffect
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116};
        register_classdb_global(&global_classdb_array[74], (const char *)data, 11);
    }
    {
        // AudioEffectInstance
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 73, 110, 115, 116, 97, 110, 99, 101};
        register_classdb_global(&global_classdb_array[75], (const char *)data, 19);
    }
    {
        // AudioEffectEQ
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 69, 81};
        register_classdb_global(&global_classdb_array[76], (const char *)data, 13);
    }
    {
        // AudioEffectFilter
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 70, 105, 108, 116, 101, 114};
        register_classdb_global(&global_classdb_array[77], (const char *)data, 17);
    }
    {
        // AudioStreamGenerator
        char data[] = {65, 117, 100, 105, 111, 83, 116, 114, 101, 97, 109, 71, 101, 110, 101, 114, 97, 116, 111, 114};
        register_classdb_global(&global_classdb_array[78], (const char *)data, 20);
    }
    {
        // AudioBusLayout
        char data[] = {65, 117, 100, 105, 111, 66, 117, 115, 76, 97, 121, 111, 117, 116};
        register_classdb_global(&global_classdb_array[79], (const char *)data, 14);
    }
    {
        // AudioStreamGeneratorPlayback
        char data[] = {65, 117, 100, 105, 111, 83, 116, 114, 101, 97, 109, 71, 101, 110, 101, 114, 97, 116, 111, 114, 80, 108, 97, 121, 98, 97, 99, 107};
        register_classdb_global(&global_classdb_array[80], (const char *)data, 28);
    }
    {
        // AudioEffectLowPassFilter
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 76, 111, 119, 80, 97, 115, 115, 70, 105, 108, 116, 101, 114};
        register_classdb_global(&global_classdb_array[81], (const char *)data, 24);
    }
    {
        // AudioEffectHighPassFilter
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 72, 105, 103, 104, 80, 97, 115, 115, 70, 105, 108, 116, 101, 114};
        register_classdb_global(&global_classdb_array[82], (const char *)data, 25);
    }
    {
        // AudioEffectBandPassFilter
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 66, 97, 110, 100, 80, 97, 115, 115, 70, 105, 108, 116, 101, 114};
        register_classdb_global(&global_classdb_array[83], (const char *)data, 25);
    }
    {
        // AudioEffectNotchFilter
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 78, 111, 116, 99, 104, 70, 105, 108, 116, 101, 114};
        register_classdb_global(&global_classdb_array[84], (const char *)data, 22);
    }
    {
        // AudioEffectBandLimitFilter
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 66, 97, 110, 100, 76, 105, 109, 105, 116, 70, 105, 108, 116, 101, 114};
        register_classdb_global(&global_classdb_array[85], (const char *)data, 26);
    }
    {
        // AudioEffectLowShelfFilter
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 76, 111, 119, 83, 104, 101, 108, 102, 70, 105, 108, 116, 101, 114};
        register_classdb_global(&global_classdb_array[86], (const char *)data, 25);
    }
    {
        // AudioEffectHighShelfFilter
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 72, 105, 103, 104, 83, 104, 101, 108, 102, 70, 105, 108, 116, 101, 114};
        register_classdb_global(&global_classdb_array[87], (const char *)data, 26);
    }
    {
        // AudioEffectEQ6
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 69, 81, 54};
        register_classdb_global(&global_classdb_array[88], (const char *)data, 14);
    }
    {
        // AudioEffectEQ10
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 69, 81, 49, 48};
        register_classdb_global(&global_classdb_array[89], (const char *)data, 15);
    }
    {
        // AudioEffectEQ21
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 69, 81, 50, 49};
        register_classdb_global(&global_classdb_array[90], (const char *)data, 15);
    }
    {
        // AudioEffectDistortion
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 68, 105, 115, 116, 111, 114, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[91], (const char *)data, 21);
    }
    {
        // AudioEffectPhaser
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 80, 104, 97, 115, 101, 114};
        register_classdb_global(&global_classdb_array[92], (const char *)data, 17);
    }
    {
        // AudioEffectRecord
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 82, 101, 99, 111, 114, 100};
        register_classdb_global(&global_classdb_array[93], (const char *)data, 17);
    }
    {
        // AudioEffectSpectrumAnalyzer
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 83, 112, 101, 99, 116, 114, 117, 109, 65, 110, 97, 108, 121, 122, 101, 114};
        register_classdb_global(&global_classdb_array[94], (const char *)data, 27);
    }
    {
        // AudioEffectSpectrumAnalyzerInstance
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 83, 112, 101, 99, 116, 114, 117, 109, 65, 110, 97, 108, 121, 122, 101, 114, 73, 110, 115, 116, 97, 110, 99, 101};
        register_classdb_global(&global_classdb_array[95], (const char *)data, 35);
    }
    {
        // CameraFeed
        char data[] = {67, 97, 109, 101, 114, 97, 70, 101, 101, 100};
        register_classdb_global(&global_classdb_array[96], (const char *)data, 10);
    }
    {
        // Physics2DDirectBodyState
        char data[] = {80, 104, 121, 115, 105, 99, 115, 50, 68, 68, 105, 114, 101, 99, 116, 66, 111, 100, 121, 83, 116, 97, 116, 101};
        register_classdb_global(&global_classdb_array[97], (const char *)data, 24);
    }
    {
        // Physics2DDirectSpaceState
        char data[] = {80, 104, 121, 115, 105, 99, 115, 50, 68, 68, 105, 114, 101, 99, 116, 83, 112, 97, 99, 101, 83, 116, 97, 116, 101};
        register_classdb_global(&global_classdb_array[98], (const char *)data, 25);
    }
    {
        // InstancePlaceholder
        char data[] = {73, 110, 115, 116, 97, 110, 99, 101, 80, 108, 97, 99, 101, 104, 111, 108, 100, 101, 114};
        register_classdb_global(&global_classdb_array[99], (const char *)data, 19);
    }
    {
        // Viewport
        char data[] = {86, 105, 101, 119, 112, 111, 114, 116};
        register_classdb_global(&global_classdb_array[100], (const char *)data, 8);
    }
    {
        // ReferenceRect
        char data[] = {82, 101, 102, 101, 114, 101, 110, 99, 101, 82, 101, 99, 116};
        register_classdb_global(&global_classdb_array[101], (const char *)data, 13);
    }
    {
        // Container
        char data[] = {67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[102], (const char *)data, 9);
    }
    {
        // TabContainer
        char data[] = {84, 97, 98, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[103], (const char *)data, 12);
    }
    {
        // Tabs
        char data[] = {84, 97, 98, 115};
        register_classdb_global(&global_classdb_array[104], (const char *)data, 4);
    }
    {
        // Separator
        char data[] = {83, 101, 112, 97, 114, 97, 116, 111, 114};
        register_classdb_global(&global_classdb_array[105], (const char *)data, 9);
    }
    {
        // HSeparator
        char data[] = {72, 83, 101, 112, 97, 114, 97, 116, 111, 114};
        register_classdb_global(&global_classdb_array[106], (const char *)data, 10);
    }
    {
        // VSeparator
        char data[] = {86, 83, 101, 112, 97, 114, 97, 116, 111, 114};
        register_classdb_global(&global_classdb_array[107], (const char *)data, 10);
    }
    {
        // TextureButton
        char data[] = {84, 101, 120, 116, 117, 114, 101, 66, 117, 116, 116, 111, 110};
        register_classdb_global(&global_classdb_array[108], (const char *)data, 13);
    }
    {
        // BitMap
        char data[] = {66, 105, 116, 77, 97, 112};
        register_classdb_global(&global_classdb_array[109], (const char *)data, 6);
    }
    {
        // BoxContainer
        char data[] = {66, 111, 120, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[110], (const char *)data, 12);
    }
    {
        // HBoxContainer
        char data[] = {72, 66, 111, 120, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[111], (const char *)data, 13);
    }
    {
        // VBoxContainer
        char data[] = {86, 66, 111, 120, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[112], (const char *)data, 13);
    }
    {
        // GridContainer
        char data[] = {71, 114, 105, 100, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[113], (const char *)data, 13);
    }
    {
        // CenterContainer
        char data[] = {67, 101, 110, 116, 101, 114, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[114], (const char *)data, 15);
    }
    {
        // ScrollContainer
        char data[] = {83, 99, 114, 111, 108, 108, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[115], (const char *)data, 15);
    }
    {
        // PanelContainer
        char data[] = {80, 97, 110, 101, 108, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[116], (const char *)data, 14);
    }
    {
        // TextureProgress
        char data[] = {84, 101, 120, 116, 117, 114, 101, 80, 114, 111, 103, 114, 101, 115, 115};
        register_classdb_global(&global_classdb_array[117], (const char *)data, 15);
    }
    {
        // InputDefault
        char data[] = {73, 110, 112, 117, 116, 68, 101, 102, 97, 117, 108, 116};
        register_classdb_global(&global_classdb_array[118], (const char *)data, 12);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("Input");
        api10->godot_variant_new_object(&global_singletons_array[11], singleton);
    }
    {
        // ARVRInterface
        char data[] = {65, 82, 86, 82, 73, 110, 116, 101, 114, 102, 97, 99, 101};
        register_classdb_global(&global_classdb_array[119], (const char *)data, 13);
    }
    {
        // ARVRPositionalTracker
        char data[] = {65, 82, 86, 82, 80, 111, 115, 105, 116, 105, 111, 110, 97, 108, 84, 114, 97, 99, 107, 101, 114};
        register_classdb_global(&global_classdb_array[120], (const char *)data, 21);
    }
    {
        // AudioStream
        char data[] = {65, 117, 100, 105, 111, 83, 116, 114, 101, 97, 109};
        register_classdb_global(&global_classdb_array[121], (const char *)data, 11);
    }
    {
        // AudioStreamPlaybackResampled
        char data[] = {65, 117, 100, 105, 111, 83, 116, 114, 101, 97, 109, 80, 108, 97, 121, 98, 97, 99, 107, 82, 101, 115, 97, 109, 112, 108, 101, 100};
        register_classdb_global(&global_classdb_array[122], (const char *)data, 28);
    }
    {
        // AudioStreamPlayback
        char data[] = {65, 117, 100, 105, 111, 83, 116, 114, 101, 97, 109, 80, 108, 97, 121, 98, 97, 99, 107};
        register_classdb_global(&global_classdb_array[123], (const char *)data, 19);
    }
    {
        // AudioStreamMicrophone
        char data[] = {65, 117, 100, 105, 111, 83, 116, 114, 101, 97, 109, 77, 105, 99, 114, 111, 112, 104, 111, 110, 101};
        register_classdb_global(&global_classdb_array[124], (const char *)data, 21);
    }
    {
        // AudioEffectAmplify
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 65, 109, 112, 108, 105, 102, 121};
        register_classdb_global(&global_classdb_array[125], (const char *)data, 18);
    }
    {
        // AudioEffectReverb
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 82, 101, 118, 101, 114, 98};
        register_classdb_global(&global_classdb_array[126], (const char *)data, 17);
    }
    {
        // AudioEffectStereoEnhance
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 83, 116, 101, 114, 101, 111, 69, 110, 104, 97, 110, 99, 101};
        register_classdb_global(&global_classdb_array[127], (const char *)data, 24);
    }
    {
        // AudioEffectPanner
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 80, 97, 110, 110, 101, 114};
        register_classdb_global(&global_classdb_array[128], (const char *)data, 17);
    }
    {
        // AudioEffectChorus
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 67, 104, 111, 114, 117, 115};
        register_classdb_global(&global_classdb_array[129], (const char *)data, 17);
    }
    {
        // AudioEffectDelay
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 68, 101, 108, 97, 121};
        register_classdb_global(&global_classdb_array[130], (const char *)data, 16);
    }
    {
        // AudioEffectCompressor
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 67, 111, 109, 112, 114, 101, 115, 115, 111, 114};
        register_classdb_global(&global_classdb_array[131], (const char *)data, 21);
    }
    {
        // AudioEffectLimiter
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 76, 105, 109, 105, 116, 101, 114};
        register_classdb_global(&global_classdb_array[132], (const char *)data, 18);
    }
    {
        // AudioEffectPitchShift
        char data[] = {65, 117, 100, 105, 111, 69, 102, 102, 101, 99, 116, 80, 105, 116, 99, 104, 83, 104, 105, 102, 116};
        register_classdb_global(&global_classdb_array[133], (const char *)data, 21);
    }
    {
        // Physics2DShapeQueryResult
        char data[] = {80, 104, 121, 115, 105, 99, 115, 50, 68, 83, 104, 97, 112, 101, 81, 117, 101, 114, 121, 82, 101, 115, 117, 108, 116};
        register_classdb_global(&global_classdb_array[134], (const char *)data, 25);
    }
    {
        // Physics2DTestMotionResult
        char data[] = {80, 104, 121, 115, 105, 99, 115, 50, 68, 84, 101, 115, 116, 77, 111, 116, 105, 111, 110, 82, 101, 115, 117, 108, 116};
        register_classdb_global(&global_classdb_array[135], (const char *)data, 25);
    }
    {
        // Physics2DShapeQueryParameters
        char data[] = {80, 104, 121, 115, 105, 99, 115, 50, 68, 83, 104, 97, 112, 101, 81, 117, 101, 114, 121, 80, 97, 114, 97, 109, 101, 116, 101, 114, 115};
        register_classdb_global(&global_classdb_array[136], (const char *)data, 29);
    }
    {
        // PhysicsShapeQueryParameters
        char data[] = {80, 104, 121, 115, 105, 99, 115, 83, 104, 97, 112, 101, 81, 117, 101, 114, 121, 80, 97, 114, 97, 109, 101, 116, 101, 114, 115};
        register_classdb_global(&global_classdb_array[137], (const char *)data, 27);
    }
    {
        // PhysicsDirectBodyState
        char data[] = {80, 104, 121, 115, 105, 99, 115, 68, 105, 114, 101, 99, 116, 66, 111, 100, 121, 83, 116, 97, 116, 101};
        register_classdb_global(&global_classdb_array[138], (const char *)data, 22);
    }
    {
        // PhysicsDirectSpaceState
        char data[] = {80, 104, 121, 115, 105, 99, 115, 68, 105, 114, 101, 99, 116, 83, 112, 97, 99, 101, 83, 116, 97, 116, 101};
        register_classdb_global(&global_classdb_array[139], (const char *)data, 23);
    }
    {
        // PhysicsShapeQueryResult
        char data[] = {80, 104, 121, 115, 105, 99, 115, 83, 104, 97, 112, 101, 81, 117, 101, 114, 121, 82, 101, 115, 117, 108, 116};
        register_classdb_global(&global_classdb_array[140], (const char *)data, 23);
    }
    {
        // Node
        char data[] = {78, 111, 100, 101};
        register_classdb_global(&global_classdb_array[141], (const char *)data, 4);
    }
    {
        // World
        char data[] = {87, 111, 114, 108, 100};
        register_classdb_global(&global_classdb_array[142], (const char *)data, 5);
    }
    {
        // World2D
        char data[] = {87, 111, 114, 108, 100, 50, 68};
        register_classdb_global(&global_classdb_array[143], (const char *)data, 7);
    }
    {
        // Texture
        char data[] = {84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[144], (const char *)data, 7);
    }
    {
        // ViewportTexture
        char data[] = {86, 105, 101, 119, 112, 111, 114, 116, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[145], (const char *)data, 15);
    }
    {
        // HTTPRequest
        char data[] = {72, 84, 84, 80, 82, 101, 113, 117, 101, 115, 116};
        register_classdb_global(&global_classdb_array[146], (const char *)data, 11);
    }
    {
        // Timer
        char data[] = {84, 105, 109, 101, 114};
        register_classdb_global(&global_classdb_array[147], (const char *)data, 5);
    }
    {
        // CanvasLayer
        char data[] = {67, 97, 110, 118, 97, 115, 76, 97, 121, 101, 114};
        register_classdb_global(&global_classdb_array[148], (const char *)data, 11);
    }
    {
        // CanvasItem
        char data[] = {67, 97, 110, 118, 97, 115, 73, 116, 101, 109};
        register_classdb_global(&global_classdb_array[149], (const char *)data, 10);
    }
    {
        // Node2D
        char data[] = {78, 111, 100, 101, 50, 68};
        register_classdb_global(&global_classdb_array[150], (const char *)data, 6);
    }
    {
        // CanvasModulate
        char data[] = {67, 97, 110, 118, 97, 115, 77, 111, 100, 117, 108, 97, 116, 101};
        register_classdb_global(&global_classdb_array[151], (const char *)data, 14);
    }
    {
        // ResourcePreloader
        char data[] = {82, 101, 115, 111, 117, 114, 99, 101, 80, 114, 101, 108, 111, 97, 100, 101, 114};
        register_classdb_global(&global_classdb_array[152], (const char *)data, 17);
    }
    {
        // ButtonGroup
        char data[] = {66, 117, 116, 116, 111, 110, 71, 114, 111, 117, 112};
        register_classdb_global(&global_classdb_array[153], (const char *)data, 11);
    }
    {
        // Control
        char data[] = {67, 111, 110, 116, 114, 111, 108};
        register_classdb_global(&global_classdb_array[154], (const char *)data, 7);
    }
    {
        // Theme
        char data[] = {84, 104, 101, 109, 101};
        register_classdb_global(&global_classdb_array[155], (const char *)data, 5);
    }
    {
        // BaseButton
        char data[] = {66, 97, 115, 101, 66, 117, 116, 116, 111, 110};
        register_classdb_global(&global_classdb_array[156], (const char *)data, 10);
    }
    {
        // ShortCut
        char data[] = {83, 104, 111, 114, 116, 67, 117, 116};
        register_classdb_global(&global_classdb_array[157], (const char *)data, 8);
    }
    {
        // Button
        char data[] = {66, 117, 116, 116, 111, 110};
        register_classdb_global(&global_classdb_array[158], (const char *)data, 6);
    }
    {
        // Label
        char data[] = {76, 97, 98, 101, 108};
        register_classdb_global(&global_classdb_array[159], (const char *)data, 5);
    }
    {
        // Range
        char data[] = {82, 97, 110, 103, 101};
        register_classdb_global(&global_classdb_array[160], (const char *)data, 5);
    }
    {
        // ScrollBar
        char data[] = {83, 99, 114, 111, 108, 108, 66, 97, 114};
        register_classdb_global(&global_classdb_array[161], (const char *)data, 9);
    }
    {
        // HScrollBar
        char data[] = {72, 83, 99, 114, 111, 108, 108, 66, 97, 114};
        register_classdb_global(&global_classdb_array[162], (const char *)data, 10);
    }
    {
        // VScrollBar
        char data[] = {86, 83, 99, 114, 111, 108, 108, 66, 97, 114};
        register_classdb_global(&global_classdb_array[163], (const char *)data, 10);
    }
    {
        // ProgressBar
        char data[] = {80, 114, 111, 103, 114, 101, 115, 115, 66, 97, 114};
        register_classdb_global(&global_classdb_array[164], (const char *)data, 11);
    }
    {
        // Slider
        char data[] = {83, 108, 105, 100, 101, 114};
        register_classdb_global(&global_classdb_array[165], (const char *)data, 6);
    }
    {
        // HSlider
        char data[] = {72, 83, 108, 105, 100, 101, 114};
        register_classdb_global(&global_classdb_array[166], (const char *)data, 7);
    }
    {
        // VSlider
        char data[] = {86, 83, 108, 105, 100, 101, 114};
        register_classdb_global(&global_classdb_array[167], (const char *)data, 7);
    }
    {
        // Popup
        char data[] = {80, 111, 112, 117, 112};
        register_classdb_global(&global_classdb_array[168], (const char *)data, 5);
    }
    {
        // PopupPanel
        char data[] = {80, 111, 112, 117, 112, 80, 97, 110, 101, 108};
        register_classdb_global(&global_classdb_array[169], (const char *)data, 10);
    }
    {
        // MenuButton
        char data[] = {77, 101, 110, 117, 66, 117, 116, 116, 111, 110};
        register_classdb_global(&global_classdb_array[170], (const char *)data, 10);
    }
    {
        // CheckBox
        char data[] = {67, 104, 101, 99, 107, 66, 111, 120};
        register_classdb_global(&global_classdb_array[171], (const char *)data, 8);
    }
    {
        // CheckButton
        char data[] = {67, 104, 101, 99, 107, 66, 117, 116, 116, 111, 110};
        register_classdb_global(&global_classdb_array[172], (const char *)data, 11);
    }
    {
        // ToolButton
        char data[] = {84, 111, 111, 108, 66, 117, 116, 116, 111, 110};
        register_classdb_global(&global_classdb_array[173], (const char *)data, 10);
    }
    {
        // LinkButton
        char data[] = {76, 105, 110, 107, 66, 117, 116, 116, 111, 110};
        register_classdb_global(&global_classdb_array[174], (const char *)data, 10);
    }
    {
        // Panel
        char data[] = {80, 97, 110, 101, 108};
        register_classdb_global(&global_classdb_array[175], (const char *)data, 5);
    }
    {
        // TextureRect
        char data[] = {84, 101, 120, 116, 117, 114, 101, 82, 101, 99, 116};
        register_classdb_global(&global_classdb_array[176], (const char *)data, 11);
    }
    {
        // ColorRect
        char data[] = {67, 111, 108, 111, 114, 82, 101, 99, 116};
        register_classdb_global(&global_classdb_array[177], (const char *)data, 9);
    }
    {
        // NinePatchRect
        char data[] = {78, 105, 110, 101, 80, 97, 116, 99, 104, 82, 101, 99, 116};
        register_classdb_global(&global_classdb_array[178], (const char *)data, 13);
    }
    {
        // VideoPlayer
        char data[] = {86, 105, 100, 101, 111, 80, 108, 97, 121, 101, 114};
        register_classdb_global(&global_classdb_array[179], (const char *)data, 11);
    }
    {
        // VideoStream
        char data[] = {86, 105, 100, 101, 111, 83, 116, 114, 101, 97, 109};
        register_classdb_global(&global_classdb_array[180], (const char *)data, 11);
    }
    {
        // WindowDialog
        char data[] = {87, 105, 110, 100, 111, 119, 68, 105, 97, 108, 111, 103};
        register_classdb_global(&global_classdb_array[181], (const char *)data, 12);
    }
    {
        // AcceptDialog
        char data[] = {65, 99, 99, 101, 112, 116, 68, 105, 97, 108, 111, 103};
        register_classdb_global(&global_classdb_array[182], (const char *)data, 12);
    }
    {
        // ConfirmationDialog
        char data[] = {67, 111, 110, 102, 105, 114, 109, 97, 116, 105, 111, 110, 68, 105, 97, 108, 111, 103};
        register_classdb_global(&global_classdb_array[183], (const char *)data, 18);
    }
    {
        // FileDialog
        char data[] = {70, 105, 108, 101, 68, 105, 97, 108, 111, 103};
        register_classdb_global(&global_classdb_array[184], (const char *)data, 10);
    }
    {
        // PopupMenu
        char data[] = {80, 111, 112, 117, 112, 77, 101, 110, 117};
        register_classdb_global(&global_classdb_array[185], (const char *)data, 9);
    }
    {
        // Tree
        char data[] = {84, 114, 101, 101};
        register_classdb_global(&global_classdb_array[186], (const char *)data, 4);
    }
    {
        // TreeItem
        char data[] = {84, 114, 101, 101, 73, 116, 101, 109};
        register_classdb_global(&global_classdb_array[187], (const char *)data, 8);
    }
    {
        // TextEdit
        char data[] = {84, 101, 120, 116, 69, 100, 105, 116};
        register_classdb_global(&global_classdb_array[188], (const char *)data, 8);
    }
    {
        // OptionButton
        char data[] = {79, 112, 116, 105, 111, 110, 66, 117, 116, 116, 111, 110};
        register_classdb_global(&global_classdb_array[189], (const char *)data, 12);
    }
    {
        // SpinBox
        char data[] = {83, 112, 105, 110, 66, 111, 120};
        register_classdb_global(&global_classdb_array[190], (const char *)data, 7);
    }
    {
        // ColorPicker
        char data[] = {67, 111, 108, 111, 114, 80, 105, 99, 107, 101, 114};
        register_classdb_global(&global_classdb_array[191], (const char *)data, 11);
    }
    {
        // ColorPickerButton
        char data[] = {67, 111, 108, 111, 114, 80, 105, 99, 107, 101, 114, 66, 117, 116, 116, 111, 110};
        register_classdb_global(&global_classdb_array[192], (const char *)data, 17);
    }
    {
        // RichTextLabel
        char data[] = {82, 105, 99, 104, 84, 101, 120, 116, 76, 97, 98, 101, 108};
        register_classdb_global(&global_classdb_array[193], (const char *)data, 13);
    }
    {
        // CharFXTransform
        char data[] = {67, 104, 97, 114, 70, 88, 84, 114, 97, 110, 115, 102, 111, 114, 109};
        register_classdb_global(&global_classdb_array[194], (const char *)data, 15);
    }
    {
        // RichTextEffect
        char data[] = {82, 105, 99, 104, 84, 101, 120, 116, 69, 102, 102, 101, 99, 116};
        register_classdb_global(&global_classdb_array[195], (const char *)data, 14);
    }
    {
        // ItemList
        char data[] = {73, 116, 101, 109, 76, 105, 115, 116};
        register_classdb_global(&global_classdb_array[196], (const char *)data, 8);
    }
    {
        // LineEdit
        char data[] = {76, 105, 110, 101, 69, 100, 105, 116};
        register_classdb_global(&global_classdb_array[197], (const char *)data, 8);
    }
    {
        // MeshInstance
        char data[] = {77, 101, 115, 104, 73, 110, 115, 116, 97, 110, 99, 101};
        register_classdb_global(&global_classdb_array[198], (const char *)data, 12);
    }
    {
        // ImmediateGeometry
        char data[] = {73, 109, 109, 101, 100, 105, 97, 116, 101, 71, 101, 111, 109, 101, 116, 114, 121};
        register_classdb_global(&global_classdb_array[199], (const char *)data, 17);
    }
    {
        // SpriteBase3D
        char data[] = {83, 112, 114, 105, 116, 101, 66, 97, 115, 101, 51, 68};
        register_classdb_global(&global_classdb_array[200], (const char *)data, 12);
    }
    {
        // Sprite3D
        char data[] = {83, 112, 114, 105, 116, 101, 51, 68};
        register_classdb_global(&global_classdb_array[201], (const char *)data, 8);
    }
    {
        // AnimatedSprite3D
        char data[] = {65, 110, 105, 109, 97, 116, 101, 100, 83, 112, 114, 105, 116, 101, 51, 68};
        register_classdb_global(&global_classdb_array[202], (const char *)data, 16);
    }
    {
        // SpriteFrames
        char data[] = {83, 112, 114, 105, 116, 101, 70, 114, 97, 109, 101, 115};
        register_classdb_global(&global_classdb_array[203], (const char *)data, 12);
    }
    {
        // Light
        char data[] = {76, 105, 103, 104, 116};
        register_classdb_global(&global_classdb_array[204], (const char *)data, 5);
    }
    {
        // DirectionalLight
        char data[] = {68, 105, 114, 101, 99, 116, 105, 111, 110, 97, 108, 76, 105, 103, 104, 116};
        register_classdb_global(&global_classdb_array[205], (const char *)data, 16);
    }
    {
        // OmniLight
        char data[] = {79, 109, 110, 105, 76, 105, 103, 104, 116};
        register_classdb_global(&global_classdb_array[206], (const char *)data, 9);
    }
    {
        // SpotLight
        char data[] = {83, 112, 111, 116, 76, 105, 103, 104, 116};
        register_classdb_global(&global_classdb_array[207], (const char *)data, 9);
    }
    {
        // ReflectionProbe
        char data[] = {82, 101, 102, 108, 101, 99, 116, 105, 111, 110, 80, 114, 111, 98, 101};
        register_classdb_global(&global_classdb_array[208], (const char *)data, 15);
    }
    {
        // GIProbe
        char data[] = {71, 73, 80, 114, 111, 98, 101};
        register_classdb_global(&global_classdb_array[209], (const char *)data, 7);
    }
    {
        // GIProbeData
        char data[] = {71, 73, 80, 114, 111, 98, 101, 68, 97, 116, 97};
        register_classdb_global(&global_classdb_array[210], (const char *)data, 11);
    }
    {
        // BakedLightmap
        char data[] = {66, 97, 107, 101, 100, 76, 105, 103, 104, 116, 109, 97, 112};
        register_classdb_global(&global_classdb_array[211], (const char *)data, 13);
    }
    {
        // BakedLightmapData
        char data[] = {66, 97, 107, 101, 100, 76, 105, 103, 104, 116, 109, 97, 112, 68, 97, 116, 97};
        register_classdb_global(&global_classdb_array[212], (const char *)data, 17);
    }
    {
        // AnimationTreePlayer
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 84, 114, 101, 101, 80, 108, 97, 121, 101, 114};
        register_classdb_global(&global_classdb_array[213], (const char *)data, 19);
    }
    {
        // Particles
        char data[] = {80, 97, 114, 116, 105, 99, 108, 101, 115};
        register_classdb_global(&global_classdb_array[214], (const char *)data, 9);
    }
    {
        // CPUParticles
        char data[] = {67, 80, 85, 80, 97, 114, 116, 105, 99, 108, 101, 115};
        register_classdb_global(&global_classdb_array[215], (const char *)data, 12);
    }
    {
        // Curve
        char data[] = {67, 117, 114, 118, 101};
        register_classdb_global(&global_classdb_array[216], (const char *)data, 5);
    }
    {
        // Gradient
        char data[] = {71, 114, 97, 100, 105, 101, 110, 116};
        register_classdb_global(&global_classdb_array[217], (const char *)data, 8);
    }
    {
        // Position3D
        char data[] = {80, 111, 115, 105, 116, 105, 111, 110, 51, 68};
        register_classdb_global(&global_classdb_array[218], (const char *)data, 10);
    }
    {
        // NavigationMeshInstance
        char data[] = {78, 97, 118, 105, 103, 97, 116, 105, 111, 110, 77, 101, 115, 104, 73, 110, 115, 116, 97, 110, 99, 101};
        register_classdb_global(&global_classdb_array[219], (const char *)data, 22);
    }
    {
        // NavigationMesh
        char data[] = {78, 97, 118, 105, 103, 97, 116, 105, 111, 110, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[220], (const char *)data, 14);
    }
    {
        // Navigation
        char data[] = {78, 97, 118, 105, 103, 97, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[221], (const char *)data, 10);
    }
    {
        // RootMotionView
        char data[] = {82, 111, 111, 116, 77, 111, 116, 105, 111, 110, 86, 105, 101, 119};
        register_classdb_global(&global_classdb_array[222], (const char *)data, 14);
    }
    {
        // AnimationTree
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 84, 114, 101, 101};
        register_classdb_global(&global_classdb_array[223], (const char *)data, 13);
    }
    {
        // AnimationRootNode
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 82, 111, 111, 116, 78, 111, 100, 101};
        register_classdb_global(&global_classdb_array[224], (const char *)data, 17);
    }
    {
        // AnimationNode
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101};
        register_classdb_global(&global_classdb_array[225], (const char *)data, 13);
    }
    {
        // KinematicCollision
        char data[] = {75, 105, 110, 101, 109, 97, 116, 105, 99, 67, 111, 108, 108, 105, 115, 105, 111, 110};
        register_classdb_global(&global_classdb_array[226], (const char *)data, 18);
    }
    {
        // KinematicBody
        char data[] = {75, 105, 110, 101, 109, 97, 116, 105, 99, 66, 111, 100, 121};
        register_classdb_global(&global_classdb_array[227], (const char *)data, 13);
    }
    {
        // SpringArm
        char data[] = {83, 112, 114, 105, 110, 103, 65, 114, 109};
        register_classdb_global(&global_classdb_array[228], (const char *)data, 9);
    }
    {
        // Shape
        char data[] = {83, 104, 97, 112, 101};
        register_classdb_global(&global_classdb_array[229], (const char *)data, 5);
    }
    {
        // PhysicalBone
        char data[] = {80, 104, 121, 115, 105, 99, 97, 108, 66, 111, 110, 101};
        register_classdb_global(&global_classdb_array[230], (const char *)data, 12);
    }
    {
        // SoftBody
        char data[] = {83, 111, 102, 116, 66, 111, 100, 121};
        register_classdb_global(&global_classdb_array[231], (const char *)data, 8);
    }
    {
        // SkeletonIK
        char data[] = {83, 107, 101, 108, 101, 116, 111, 110, 73, 75};
        register_classdb_global(&global_classdb_array[232], (const char *)data, 10);
    }
    {
        // BoneAttachment
        char data[] = {66, 111, 110, 101, 65, 116, 116, 97, 99, 104, 109, 101, 110, 116};
        register_classdb_global(&global_classdb_array[233], (const char *)data, 14);
    }
    {
        // VehicleBody
        char data[] = {86, 101, 104, 105, 99, 108, 101, 66, 111, 100, 121};
        register_classdb_global(&global_classdb_array[234], (const char *)data, 11);
    }
    {
        // VehicleWheel
        char data[] = {86, 101, 104, 105, 99, 108, 101, 87, 104, 101, 101, 108};
        register_classdb_global(&global_classdb_array[235], (const char *)data, 12);
    }
    {
        // Area
        char data[] = {65, 114, 101, 97};
        register_classdb_global(&global_classdb_array[236], (const char *)data, 4);
    }
    {
        // VisualShaderNodeVectorOp
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 86, 101, 99, 116, 111, 114, 79, 112};
        register_classdb_global(&global_classdb_array[237], (const char *)data, 24);
    }
    {
        // VisualShaderNodeColorOp
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 67, 111, 108, 111, 114, 79, 112};
        register_classdb_global(&global_classdb_array[238], (const char *)data, 23);
    }
    {
        // VisualShaderNodeTransformMult
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 84, 114, 97, 110, 115, 102, 111, 114, 109, 77, 117, 108, 116};
        register_classdb_global(&global_classdb_array[239], (const char *)data, 29);
    }
    {
        // VisualShaderNodeTransformVecMult
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 84, 114, 97, 110, 115, 102, 111, 114, 109, 86, 101, 99, 77, 117, 108, 116};
        register_classdb_global(&global_classdb_array[240], (const char *)data, 32);
    }
    {
        // VisualShaderNodeScalarFunc
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 83, 99, 97, 108, 97, 114, 70, 117, 110, 99};
        register_classdb_global(&global_classdb_array[241], (const char *)data, 26);
    }
    {
        // VisualShaderNodeVectorFunc
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 86, 101, 99, 116, 111, 114, 70, 117, 110, 99};
        register_classdb_global(&global_classdb_array[242], (const char *)data, 26);
    }
    {
        // VisualShaderNodeColorFunc
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 67, 111, 108, 111, 114, 70, 117, 110, 99};
        register_classdb_global(&global_classdb_array[243], (const char *)data, 25);
    }
    {
        // VisualShaderNodeTransformFunc
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 84, 114, 97, 110, 115, 102, 111, 114, 109, 70, 117, 110, 99};
        register_classdb_global(&global_classdb_array[244], (const char *)data, 29);
    }
    {
        // VisualShaderNodeDotProduct
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 68, 111, 116, 80, 114, 111, 100, 117, 99, 116};
        register_classdb_global(&global_classdb_array[245], (const char *)data, 26);
    }
    {
        // VisualShaderNodeVectorLen
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 86, 101, 99, 116, 111, 114, 76, 101, 110};
        register_classdb_global(&global_classdb_array[246], (const char *)data, 25);
    }
    {
        // VisualShaderNodeDeterminant
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 68, 101, 116, 101, 114, 109, 105, 110, 97, 110, 116};
        register_classdb_global(&global_classdb_array[247], (const char *)data, 27);
    }
    {
        // VisualShaderNodeScalarDerivativeFunc
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 83, 99, 97, 108, 97, 114, 68, 101, 114, 105, 118, 97, 116, 105, 118, 101, 70, 117, 110, 99};
        register_classdb_global(&global_classdb_array[248], (const char *)data, 36);
    }
    {
        // VisualShaderNodeVectorDerivativeFunc
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 86, 101, 99, 116, 111, 114, 68, 101, 114, 105, 118, 97, 116, 105, 118, 101, 70, 117, 110, 99};
        register_classdb_global(&global_classdb_array[249], (const char *)data, 36);
    }
    {
        // VisualShaderNodeOuterProduct
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 79, 117, 116, 101, 114, 80, 114, 111, 100, 117, 99, 116};
        register_classdb_global(&global_classdb_array[250], (const char *)data, 28);
    }
    {
        // VisualShaderNodeVectorScalarStep
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 86, 101, 99, 116, 111, 114, 83, 99, 97, 108, 97, 114, 83, 116, 101, 112};
        register_classdb_global(&global_classdb_array[251], (const char *)data, 32);
    }
    {
        // VisualShaderNodeVectorClamp
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 86, 101, 99, 116, 111, 114, 67, 108, 97, 109, 112};
        register_classdb_global(&global_classdb_array[252], (const char *)data, 27);
    }
    {
        // VisualShaderNodeScalarClamp
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 83, 99, 97, 108, 97, 114, 67, 108, 97, 109, 112};
        register_classdb_global(&global_classdb_array[253], (const char *)data, 27);
    }
    {
        // VisualShaderNodeFaceForward
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 70, 97, 99, 101, 70, 111, 114, 119, 97, 114, 100};
        register_classdb_global(&global_classdb_array[254], (const char *)data, 27);
    }
    {
        // VisualShaderNodeScalarSmoothStep
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 83, 99, 97, 108, 97, 114, 83, 109, 111, 111, 116, 104, 83, 116, 101, 112};
        register_classdb_global(&global_classdb_array[255], (const char *)data, 32);
    }
    {
        // VisualShaderNodeVectorSmoothStep
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 86, 101, 99, 116, 111, 114, 83, 109, 111, 111, 116, 104, 83, 116, 101, 112};
        register_classdb_global(&global_classdb_array[256], (const char *)data, 32);
    }
    {
        // VisualShaderNodeVectorScalarSmoothStep
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 86, 101, 99, 116, 111, 114, 83, 99, 97, 108, 97, 114, 83, 109, 111, 111, 116, 104, 83, 116, 101, 112};
        register_classdb_global(&global_classdb_array[257], (const char *)data, 38);
    }
    {
        // VisualShaderNodeVectorDistance
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 86, 101, 99, 116, 111, 114, 68, 105, 115, 116, 97, 110, 99, 101};
        register_classdb_global(&global_classdb_array[258], (const char *)data, 30);
    }
    {
        // VisualShaderNodeVectorRefract
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 86, 101, 99, 116, 111, 114, 82, 101, 102, 114, 97, 99, 116};
        register_classdb_global(&global_classdb_array[259], (const char *)data, 29);
    }
    {
        // VisualShaderNodeScalarInterp
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 83, 99, 97, 108, 97, 114, 73, 110, 116, 101, 114, 112};
        register_classdb_global(&global_classdb_array[260], (const char *)data, 28);
    }
    {
        // VisualShaderNodeVectorInterp
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 86, 101, 99, 116, 111, 114, 73, 110, 116, 101, 114, 112};
        register_classdb_global(&global_classdb_array[261], (const char *)data, 28);
    }
    {
        // VisualShaderNodeVectorScalarMix
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 86, 101, 99, 116, 111, 114, 83, 99, 97, 108, 97, 114, 77, 105, 120};
        register_classdb_global(&global_classdb_array[262], (const char *)data, 31);
    }
    {
        // VisualShaderNodeVectorCompose
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 86, 101, 99, 116, 111, 114, 67, 111, 109, 112, 111, 115, 101};
        register_classdb_global(&global_classdb_array[263], (const char *)data, 29);
    }
    {
        // VisualShaderNodeTransformCompose
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 84, 114, 97, 110, 115, 102, 111, 114, 109, 67, 111, 109, 112, 111, 115, 101};
        register_classdb_global(&global_classdb_array[264], (const char *)data, 32);
    }
    {
        // VisualShaderNodeVectorDecompose
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 86, 101, 99, 116, 111, 114, 68, 101, 99, 111, 109, 112, 111, 115, 101};
        register_classdb_global(&global_classdb_array[265], (const char *)data, 31);
    }
    {
        // VisualShaderNodeTransformDecompose
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 84, 114, 97, 110, 115, 102, 111, 114, 109, 68, 101, 99, 111, 109, 112, 111, 115, 101};
        register_classdb_global(&global_classdb_array[266], (const char *)data, 34);
    }
    {
        // VisualShaderNodeTexture
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[267], (const char *)data, 23);
    }
    {
        // VisualShaderNodeCubeMap
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 67, 117, 98, 101, 77, 97, 112};
        register_classdb_global(&global_classdb_array[268], (const char *)data, 23);
    }
    {
        // CubeMap
        char data[] = {67, 117, 98, 101, 77, 97, 112};
        register_classdb_global(&global_classdb_array[269], (const char *)data, 7);
    }
    {
        // VisualShaderNodeUniform
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 85, 110, 105, 102, 111, 114, 109};
        register_classdb_global(&global_classdb_array[270], (const char *)data, 23);
    }
    {
        // VisualShaderNodeScalarUniform
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 83, 99, 97, 108, 97, 114, 85, 110, 105, 102, 111, 114, 109};
        register_classdb_global(&global_classdb_array[271], (const char *)data, 29);
    }
    {
        // VisualShaderNodeBooleanUniform
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 66, 111, 111, 108, 101, 97, 110, 85, 110, 105, 102, 111, 114, 109};
        register_classdb_global(&global_classdb_array[272], (const char *)data, 30);
    }
    {
        // Skeleton2D
        char data[] = {83, 107, 101, 108, 101, 116, 111, 110, 50, 68};
        register_classdb_global(&global_classdb_array[273], (const char *)data, 10);
    }
    {
        // Bone2D
        char data[] = {66, 111, 110, 101, 50, 68};
        register_classdb_global(&global_classdb_array[274], (const char *)data, 6);
    }
    {
        // Light2D
        char data[] = {76, 105, 103, 104, 116, 50, 68};
        register_classdb_global(&global_classdb_array[275], (const char *)data, 7);
    }
    {
        // LightOccluder2D
        char data[] = {76, 105, 103, 104, 116, 79, 99, 99, 108, 117, 100, 101, 114, 50, 68};
        register_classdb_global(&global_classdb_array[276], (const char *)data, 15);
    }
    {
        // OccluderPolygon2D
        char data[] = {79, 99, 99, 108, 117, 100, 101, 114, 80, 111, 108, 121, 103, 111, 110, 50, 68};
        register_classdb_global(&global_classdb_array[277], (const char *)data, 17);
    }
    {
        // YSort
        char data[] = {89, 83, 111, 114, 116};
        register_classdb_global(&global_classdb_array[278], (const char *)data, 5);
    }
    {
        // BackBufferCopy
        char data[] = {66, 97, 99, 107, 66, 117, 102, 102, 101, 114, 67, 111, 112, 121};
        register_classdb_global(&global_classdb_array[279], (const char *)data, 14);
    }
    {
        // Camera2D
        char data[] = {67, 97, 109, 101, 114, 97, 50, 68};
        register_classdb_global(&global_classdb_array[280], (const char *)data, 8);
    }
    {
        // Joint2D
        char data[] = {74, 111, 105, 110, 116, 50, 68};
        register_classdb_global(&global_classdb_array[281], (const char *)data, 7);
    }
    {
        // PinJoint2D
        char data[] = {80, 105, 110, 74, 111, 105, 110, 116, 50, 68};
        register_classdb_global(&global_classdb_array[282], (const char *)data, 10);
    }
    {
        // GrooveJoint2D
        char data[] = {71, 114, 111, 111, 118, 101, 74, 111, 105, 110, 116, 50, 68};
        register_classdb_global(&global_classdb_array[283], (const char *)data, 13);
    }
    {
        // DampedSpringJoint2D
        char data[] = {68, 97, 109, 112, 101, 100, 83, 112, 114, 105, 110, 103, 74, 111, 105, 110, 116, 50, 68};
        register_classdb_global(&global_classdb_array[284], (const char *)data, 19);
    }
    {
        // TileSet
        char data[] = {84, 105, 108, 101, 83, 101, 116};
        register_classdb_global(&global_classdb_array[285], (const char *)data, 7);
    }
    {
        // TileMap
        char data[] = {84, 105, 108, 101, 77, 97, 112};
        register_classdb_global(&global_classdb_array[286], (const char *)data, 7);
    }
    {
        // ParallaxBackground
        char data[] = {80, 97, 114, 97, 108, 108, 97, 120, 66, 97, 99, 107, 103, 114, 111, 117, 110, 100};
        register_classdb_global(&global_classdb_array[287], (const char *)data, 18);
    }
    {
        // ParallaxLayer
        char data[] = {80, 97, 114, 97, 108, 108, 97, 120, 76, 97, 121, 101, 114};
        register_classdb_global(&global_classdb_array[288], (const char *)data, 13);
    }
    {
        // TouchScreenButton
        char data[] = {84, 111, 117, 99, 104, 83, 99, 114, 101, 101, 110, 66, 117, 116, 116, 111, 110};
        register_classdb_global(&global_classdb_array[289], (const char *)data, 17);
    }
    {
        // RemoteTransform2D
        char data[] = {82, 101, 109, 111, 116, 101, 84, 114, 97, 110, 115, 102, 111, 114, 109, 50, 68};
        register_classdb_global(&global_classdb_array[290], (const char *)data, 17);
    }
    {
        // ParticlesMaterial
        char data[] = {80, 97, 114, 116, 105, 99, 108, 101, 115, 77, 97, 116, 101, 114, 105, 97, 108};
        register_classdb_global(&global_classdb_array[291], (const char *)data, 17);
    }
    {
        // CylinderMesh
        char data[] = {67, 121, 108, 105, 110, 100, 101, 114, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[292], (const char *)data, 12);
    }
    {
        // PlaneMesh
        char data[] = {80, 108, 97, 110, 101, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[293], (const char *)data, 9);
    }
    {
        // PrismMesh
        char data[] = {80, 114, 105, 115, 109, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[294], (const char *)data, 9);
    }
    {
        // QuadMesh
        char data[] = {81, 117, 97, 100, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[295], (const char *)data, 8);
    }
    {
        // SphereMesh
        char data[] = {83, 112, 104, 101, 114, 101, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[296], (const char *)data, 10);
    }
    {
        // PointMesh
        char data[] = {80, 111, 105, 110, 116, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[297], (const char *)data, 9);
    }
    {
        // SpatialMaterial
        char data[] = {83, 112, 97, 116, 105, 97, 108, 77, 97, 116, 101, 114, 105, 97, 108};
        register_classdb_global(&global_classdb_array[298], (const char *)data, 15);
    }
    {
        // MeshLibrary
        char data[] = {77, 101, 115, 104, 76, 105, 98, 114, 97, 114, 121};
        register_classdb_global(&global_classdb_array[299], (const char *)data, 11);
    }
    {
        // PanoramaSky
        char data[] = {80, 97, 110, 111, 114, 97, 109, 97, 83, 107, 121};
        register_classdb_global(&global_classdb_array[300], (const char *)data, 11);
    }
    {
        // ProceduralSky
        char data[] = {80, 114, 111, 99, 101, 100, 117, 114, 97, 108, 83, 107, 121};
        register_classdb_global(&global_classdb_array[301], (const char *)data, 13);
    }
    {
        // PopupDialog
        char data[] = {80, 111, 112, 117, 112, 68, 105, 97, 108, 111, 103};
        register_classdb_global(&global_classdb_array[302], (const char *)data, 11);
    }
    {
        // MarginContainer
        char data[] = {77, 97, 114, 103, 105, 110, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[303], (const char *)data, 15);
    }
    {
        // ViewportContainer
        char data[] = {86, 105, 101, 119, 112, 111, 114, 116, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[304], (const char *)data, 17);
    }
    {
        // SplitContainer
        char data[] = {83, 112, 108, 105, 116, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[305], (const char *)data, 14);
    }
    {
        // HSplitContainer
        char data[] = {72, 83, 112, 108, 105, 116, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[306], (const char *)data, 15);
    }
    {
        // VSplitContainer
        char data[] = {86, 83, 112, 108, 105, 116, 67, 111, 110, 116, 97, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[307], (const char *)data, 15);
    }
    {
        // GraphNode
        char data[] = {71, 114, 97, 112, 104, 78, 111, 100, 101};
        register_classdb_global(&global_classdb_array[308], (const char *)data, 9);
    }
    {
        // GraphEdit
        char data[] = {71, 114, 97, 112, 104, 69, 100, 105, 116};
        register_classdb_global(&global_classdb_array[309], (const char *)data, 9);
    }
    {
        // Skin
        char data[] = {83, 107, 105, 110};
        register_classdb_global(&global_classdb_array[310], (const char *)data, 4);
    }
    {
        // SkinReference
        char data[] = {83, 107, 105, 110, 82, 101, 102, 101, 114, 101, 110, 99, 101};
        register_classdb_global(&global_classdb_array[311], (const char *)data, 13);
    }
    {
        // Spatial
        char data[] = {83, 112, 97, 116, 105, 97, 108};
        register_classdb_global(&global_classdb_array[312], (const char *)data, 7);
    }
    {
        // SpatialGizmo
        char data[] = {83, 112, 97, 116, 105, 97, 108, 71, 105, 122, 109, 111};
        register_classdb_global(&global_classdb_array[313], (const char *)data, 12);
    }
    {
        // Skeleton
        char data[] = {83, 107, 101, 108, 101, 116, 111, 110};
        register_classdb_global(&global_classdb_array[314], (const char *)data, 8);
    }
    {
        // AnimationPlayer
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 80, 108, 97, 121, 101, 114};
        register_classdb_global(&global_classdb_array[315], (const char *)data, 15);
    }
    {
        // Tween
        char data[] = {84, 119, 101, 101, 110};
        register_classdb_global(&global_classdb_array[316], (const char *)data, 5);
    }
    {
        // VisualInstance
        char data[] = {86, 105, 115, 117, 97, 108, 73, 110, 115, 116, 97, 110, 99, 101};
        register_classdb_global(&global_classdb_array[317], (const char *)data, 14);
    }
    {
        // GeometryInstance
        char data[] = {71, 101, 111, 109, 101, 116, 114, 121, 73, 110, 115, 116, 97, 110, 99, 101};
        register_classdb_global(&global_classdb_array[318], (const char *)data, 16);
    }
    {
        // Camera
        char data[] = {67, 97, 109, 101, 114, 97};
        register_classdb_global(&global_classdb_array[319], (const char *)data, 6);
    }
    {
        // Environment
        char data[] = {69, 110, 118, 105, 114, 111, 110, 109, 101, 110, 116};
        register_classdb_global(&global_classdb_array[320], (const char *)data, 11);
    }
    {
        // ClippedCamera
        char data[] = {67, 108, 105, 112, 112, 101, 100, 67, 97, 109, 101, 114, 97};
        register_classdb_global(&global_classdb_array[321], (const char *)data, 13);
    }
    {
        // Listener
        char data[] = {76, 105, 115, 116, 101, 110, 101, 114};
        register_classdb_global(&global_classdb_array[322], (const char *)data, 8);
    }
    {
        // ARVRCamera
        char data[] = {65, 82, 86, 82, 67, 97, 109, 101, 114, 97};
        register_classdb_global(&global_classdb_array[323], (const char *)data, 10);
    }
    {
        // ARVRController
        char data[] = {65, 82, 86, 82, 67, 111, 110, 116, 114, 111, 108, 108, 101, 114};
        register_classdb_global(&global_classdb_array[324], (const char *)data, 14);
    }
    {
        // Mesh
        char data[] = {77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[325], (const char *)data, 4);
    }
    {
        // ARVRAnchor
        char data[] = {65, 82, 86, 82, 65, 110, 99, 104, 111, 114};
        register_classdb_global(&global_classdb_array[326], (const char *)data, 10);
    }
    {
        // ARVROrigin
        char data[] = {65, 82, 86, 82, 79, 114, 105, 103, 105, 110};
        register_classdb_global(&global_classdb_array[327], (const char *)data, 10);
    }
    {
        // InterpolatedCamera
        char data[] = {73, 110, 116, 101, 114, 112, 111, 108, 97, 116, 101, 100, 67, 97, 109, 101, 114, 97};
        register_classdb_global(&global_classdb_array[328], (const char *)data, 18);
    }
    {
        // AnimationNodeBlendTree
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 66, 108, 101, 110, 100, 84, 114, 101, 101};
        register_classdb_global(&global_classdb_array[329], (const char *)data, 22);
    }
    {
        // AnimationNodeBlendSpace1D
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 66, 108, 101, 110, 100, 83, 112, 97, 99, 101, 49, 68};
        register_classdb_global(&global_classdb_array[330], (const char *)data, 25);
    }
    {
        // AnimationNodeBlendSpace2D
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 66, 108, 101, 110, 100, 83, 112, 97, 99, 101, 50, 68};
        register_classdb_global(&global_classdb_array[331], (const char *)data, 25);
    }
    {
        // AnimationNodeStateMachine
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 83, 116, 97, 116, 101, 77, 97, 99, 104, 105, 110, 101};
        register_classdb_global(&global_classdb_array[332], (const char *)data, 25);
    }
    {
        // AnimationNodeStateMachinePlayback
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 83, 116, 97, 116, 101, 77, 97, 99, 104, 105, 110, 101, 80, 108, 97, 121, 98, 97, 99, 107};
        register_classdb_global(&global_classdb_array[333], (const char *)data, 33);
    }
    {
        // AnimationNodeStateMachineTransition
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 83, 116, 97, 116, 101, 77, 97, 99, 104, 105, 110, 101, 84, 114, 97, 110, 115, 105, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[334], (const char *)data, 35);
    }
    {
        // AnimationNodeOutput
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 79, 117, 116, 112, 117, 116};
        register_classdb_global(&global_classdb_array[335], (const char *)data, 19);
    }
    {
        // AnimationNodeOneShot
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 79, 110, 101, 83, 104, 111, 116};
        register_classdb_global(&global_classdb_array[336], (const char *)data, 20);
    }
    {
        // AnimationNodeAnimation
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 65, 110, 105, 109, 97, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[337], (const char *)data, 22);
    }
    {
        // AnimationNodeAdd2
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 65, 100, 100, 50};
        register_classdb_global(&global_classdb_array[338], (const char *)data, 17);
    }
    {
        // AnimationNodeAdd3
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 65, 100, 100, 51};
        register_classdb_global(&global_classdb_array[339], (const char *)data, 17);
    }
    {
        // AnimationNodeBlend2
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 66, 108, 101, 110, 100, 50};
        register_classdb_global(&global_classdb_array[340], (const char *)data, 19);
    }
    {
        // AnimationNodeBlend3
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 66, 108, 101, 110, 100, 51};
        register_classdb_global(&global_classdb_array[341], (const char *)data, 19);
    }
    {
        // AnimationNodeTimeScale
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 84, 105, 109, 101, 83, 99, 97, 108, 101};
        register_classdb_global(&global_classdb_array[342], (const char *)data, 22);
    }
    {
        // AnimationNodeTimeSeek
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 84, 105, 109, 101, 83, 101, 101, 107};
        register_classdb_global(&global_classdb_array[343], (const char *)data, 21);
    }
    {
        // AnimationNodeTransition
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 78, 111, 100, 101, 84, 114, 97, 110, 115, 105, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[344], (const char *)data, 23);
    }
    {
        // CollisionObject
        char data[] = {67, 111, 108, 108, 105, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116};
        register_classdb_global(&global_classdb_array[345], (const char *)data, 15);
    }
    {
        // PhysicsBody
        char data[] = {80, 104, 121, 115, 105, 99, 115, 66, 111, 100, 121};
        register_classdb_global(&global_classdb_array[346], (const char *)data, 11);
    }
    {
        // StaticBody
        char data[] = {83, 116, 97, 116, 105, 99, 66, 111, 100, 121};
        register_classdb_global(&global_classdb_array[347], (const char *)data, 10);
    }
    {
        // PhysicsMaterial
        char data[] = {80, 104, 121, 115, 105, 99, 115, 77, 97, 116, 101, 114, 105, 97, 108};
        register_classdb_global(&global_classdb_array[348], (const char *)data, 15);
    }
    {
        // RigidBody
        char data[] = {82, 105, 103, 105, 100, 66, 111, 100, 121};
        register_classdb_global(&global_classdb_array[349], (const char *)data, 9);
    }
    {
        // ProximityGroup
        char data[] = {80, 114, 111, 120, 105, 109, 105, 116, 121, 71, 114, 111, 117, 112};
        register_classdb_global(&global_classdb_array[350], (const char *)data, 14);
    }
    {
        // CollisionShape
        char data[] = {67, 111, 108, 108, 105, 115, 105, 111, 110, 83, 104, 97, 112, 101};
        register_classdb_global(&global_classdb_array[351], (const char *)data, 14);
    }
    {
        // CollisionPolygon
        char data[] = {67, 111, 108, 108, 105, 115, 105, 111, 110, 80, 111, 108, 121, 103, 111, 110};
        register_classdb_global(&global_classdb_array[352], (const char *)data, 16);
    }
    {
        // RayCast
        char data[] = {82, 97, 121, 67, 97, 115, 116};
        register_classdb_global(&global_classdb_array[353], (const char *)data, 7);
    }
    {
        // MultiMeshInstance
        char data[] = {77, 117, 108, 116, 105, 77, 101, 115, 104, 73, 110, 115, 116, 97, 110, 99, 101};
        register_classdb_global(&global_classdb_array[354], (const char *)data, 17);
    }
    {
        // MultiMesh
        char data[] = {77, 117, 108, 116, 105, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[355], (const char *)data, 9);
    }
    {
        // Curve3D
        char data[] = {67, 117, 114, 118, 101, 51, 68};
        register_classdb_global(&global_classdb_array[356], (const char *)data, 7);
    }
    {
        // Path
        char data[] = {80, 97, 116, 104};
        register_classdb_global(&global_classdb_array[357], (const char *)data, 4);
    }
    {
        // PathFollow
        char data[] = {80, 97, 116, 104, 70, 111, 108, 108, 111, 119};
        register_classdb_global(&global_classdb_array[358], (const char *)data, 10);
    }
    {
        // VisibilityNotifier
        char data[] = {86, 105, 115, 105, 98, 105, 108, 105, 116, 121, 78, 111, 116, 105, 102, 105, 101, 114};
        register_classdb_global(&global_classdb_array[359], (const char *)data, 18);
    }
    {
        // VisibilityEnabler
        char data[] = {86, 105, 115, 105, 98, 105, 108, 105, 116, 121, 69, 110, 97, 98, 108, 101, 114};
        register_classdb_global(&global_classdb_array[360], (const char *)data, 17);
    }
    {
        // WorldEnvironment
        char data[] = {87, 111, 114, 108, 100, 69, 110, 118, 105, 114, 111, 110, 109, 101, 110, 116};
        register_classdb_global(&global_classdb_array[361], (const char *)data, 16);
    }
    {
        // RemoteTransform
        char data[] = {82, 101, 109, 111, 116, 101, 84, 114, 97, 110, 115, 102, 111, 114, 109};
        register_classdb_global(&global_classdb_array[362], (const char *)data, 15);
    }
    {
        // Joint
        char data[] = {74, 111, 105, 110, 116};
        register_classdb_global(&global_classdb_array[363], (const char *)data, 5);
    }
    {
        // PinJoint
        char data[] = {80, 105, 110, 74, 111, 105, 110, 116};
        register_classdb_global(&global_classdb_array[364], (const char *)data, 8);
    }
    {
        // HingeJoint
        char data[] = {72, 105, 110, 103, 101, 74, 111, 105, 110, 116};
        register_classdb_global(&global_classdb_array[365], (const char *)data, 10);
    }
    {
        // SliderJoint
        char data[] = {83, 108, 105, 100, 101, 114, 74, 111, 105, 110, 116};
        register_classdb_global(&global_classdb_array[366], (const char *)data, 11);
    }
    {
        // ConeTwistJoint
        char data[] = {67, 111, 110, 101, 84, 119, 105, 115, 116, 74, 111, 105, 110, 116};
        register_classdb_global(&global_classdb_array[367], (const char *)data, 14);
    }
    {
        // Generic6DOFJoint
        char data[] = {71, 101, 110, 101, 114, 105, 99, 54, 68, 79, 70, 74, 111, 105, 110, 116};
        register_classdb_global(&global_classdb_array[368], (const char *)data, 16);
    }
    {
        // Shader
        char data[] = {83, 104, 97, 100, 101, 114};
        register_classdb_global(&global_classdb_array[369], (const char *)data, 6);
    }
    {
        // VisualShader
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114};
        register_classdb_global(&global_classdb_array[370], (const char *)data, 12);
    }
    {
        // VisualShaderNode
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101};
        register_classdb_global(&global_classdb_array[371], (const char *)data, 16);
    }
    {
        // VisualShaderNodeCustom
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 67, 117, 115, 116, 111, 109};
        register_classdb_global(&global_classdb_array[372], (const char *)data, 22);
    }
    {
        // VisualShaderNodeInput
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 73, 110, 112, 117, 116};
        register_classdb_global(&global_classdb_array[373], (const char *)data, 21);
    }
    {
        // VisualShaderNodeGroupBase
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 71, 114, 111, 117, 112, 66, 97, 115, 101};
        register_classdb_global(&global_classdb_array[374], (const char *)data, 25);
    }
    {
        // VisualShaderNodeOutput
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 79, 117, 116, 112, 117, 116};
        register_classdb_global(&global_classdb_array[375], (const char *)data, 22);
    }
    {
        // VisualShaderNodeScalarConstant
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 83, 99, 97, 108, 97, 114, 67, 111, 110, 115, 116, 97, 110, 116};
        register_classdb_global(&global_classdb_array[376], (const char *)data, 30);
    }
    {
        // VisualShaderNodeBooleanConstant
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 66, 111, 111, 108, 101, 97, 110, 67, 111, 110, 115, 116, 97, 110, 116};
        register_classdb_global(&global_classdb_array[377], (const char *)data, 31);
    }
    {
        // VisualShaderNodeColorConstant
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 67, 111, 108, 111, 114, 67, 111, 110, 115, 116, 97, 110, 116};
        register_classdb_global(&global_classdb_array[378], (const char *)data, 29);
    }
    {
        // VisualShaderNodeVec3Constant
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 86, 101, 99, 51, 67, 111, 110, 115, 116, 97, 110, 116};
        register_classdb_global(&global_classdb_array[379], (const char *)data, 28);
    }
    {
        // VisualShaderNodeTransformConstant
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 84, 114, 97, 110, 115, 102, 111, 114, 109, 67, 111, 110, 115, 116, 97, 110, 116};
        register_classdb_global(&global_classdb_array[380], (const char *)data, 33);
    }
    {
        // VisualShaderNodeScalarOp
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 83, 99, 97, 108, 97, 114, 79, 112};
        register_classdb_global(&global_classdb_array[381], (const char *)data, 24);
    }
    {
        // VisualShaderNodeTextureUniform
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 84, 101, 120, 116, 117, 114, 101, 85, 110, 105, 102, 111, 114, 109};
        register_classdb_global(&global_classdb_array[382], (const char *)data, 30);
    }
    {
        // VisualShaderNodeColorUniform
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 67, 111, 108, 111, 114, 85, 110, 105, 102, 111, 114, 109};
        register_classdb_global(&global_classdb_array[383], (const char *)data, 28);
    }
    {
        // VisualShaderNodeVec3Uniform
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 86, 101, 99, 51, 85, 110, 105, 102, 111, 114, 109};
        register_classdb_global(&global_classdb_array[384], (const char *)data, 27);
    }
    {
        // VisualShaderNodeTransformUniform
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 84, 114, 97, 110, 115, 102, 111, 114, 109, 85, 110, 105, 102, 111, 114, 109};
        register_classdb_global(&global_classdb_array[385], (const char *)data, 32);
    }
    {
        // VisualShaderNodeTextureUniformTriplanar
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 84, 101, 120, 116, 117, 114, 101, 85, 110, 105, 102, 111, 114, 109, 84, 114, 105, 112, 108, 97, 110, 97, 114};
        register_classdb_global(&global_classdb_array[386], (const char *)data, 39);
    }
    {
        // VisualShaderNodeCubeMapUniform
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 67, 117, 98, 101, 77, 97, 112, 85, 110, 105, 102, 111, 114, 109};
        register_classdb_global(&global_classdb_array[387], (const char *)data, 30);
    }
    {
        // VisualShaderNodeIf
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 73, 102};
        register_classdb_global(&global_classdb_array[388], (const char *)data, 18);
    }
    {
        // VisualShaderNodeSwitch
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 83, 119, 105, 116, 99, 104};
        register_classdb_global(&global_classdb_array[389], (const char *)data, 22);
    }
    {
        // VisualShaderNodeScalarSwitch
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 83, 99, 97, 108, 97, 114, 83, 119, 105, 116, 99, 104};
        register_classdb_global(&global_classdb_array[390], (const char *)data, 28);
    }
    {
        // VisualShaderNodeFresnel
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 70, 114, 101, 115, 110, 101, 108};
        register_classdb_global(&global_classdb_array[391], (const char *)data, 23);
    }
    {
        // VisualShaderNodeExpression
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 69, 120, 112, 114, 101, 115, 115, 105, 111, 110};
        register_classdb_global(&global_classdb_array[392], (const char *)data, 26);
    }
    {
        // VisualShaderNodeGlobalExpression
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 71, 108, 111, 98, 97, 108, 69, 120, 112, 114, 101, 115, 115, 105, 111, 110};
        register_classdb_global(&global_classdb_array[393], (const char *)data, 32);
    }
    {
        // VisualShaderNodeIs
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 73, 115};
        register_classdb_global(&global_classdb_array[394], (const char *)data, 18);
    }
    {
        // VisualShaderNodeCompare
        char data[] = {86, 105, 115, 117, 97, 108, 83, 104, 97, 100, 101, 114, 78, 111, 100, 101, 67, 111, 109, 112, 97, 114, 101};
        register_classdb_global(&global_classdb_array[395], (const char *)data, 23);
    }
    {
        // Material
        char data[] = {77, 97, 116, 101, 114, 105, 97, 108};
        register_classdb_global(&global_classdb_array[396], (const char *)data, 8);
    }
    {
        // ShaderMaterial
        char data[] = {83, 104, 97, 100, 101, 114, 77, 97, 116, 101, 114, 105, 97, 108};
        register_classdb_global(&global_classdb_array[397], (const char *)data, 14);
    }
    {
        // CanvasItemMaterial
        char data[] = {67, 97, 110, 118, 97, 115, 73, 116, 101, 109, 77, 97, 116, 101, 114, 105, 97, 108};
        register_classdb_global(&global_classdb_array[398], (const char *)data, 18);
    }
    {
        // CPUParticles2D
        char data[] = {67, 80, 85, 80, 97, 114, 116, 105, 99, 108, 101, 115, 50, 68};
        register_classdb_global(&global_classdb_array[399], (const char *)data, 14);
    }
    {
        // Particles2D
        char data[] = {80, 97, 114, 116, 105, 99, 108, 101, 115, 50, 68};
        register_classdb_global(&global_classdb_array[400], (const char *)data, 11);
    }
    {
        // Sprite
        char data[] = {83, 112, 114, 105, 116, 101};
        register_classdb_global(&global_classdb_array[401], (const char *)data, 6);
    }
    {
        // AnimatedSprite
        char data[] = {65, 110, 105, 109, 97, 116, 101, 100, 83, 112, 114, 105, 116, 101};
        register_classdb_global(&global_classdb_array[402], (const char *)data, 14);
    }
    {
        // Position2D
        char data[] = {80, 111, 115, 105, 116, 105, 111, 110, 50, 68};
        register_classdb_global(&global_classdb_array[403], (const char *)data, 10);
    }
    {
        // Line2D
        char data[] = {76, 105, 110, 101, 50, 68};
        register_classdb_global(&global_classdb_array[404], (const char *)data, 6);
    }
    {
        // MeshInstance2D
        char data[] = {77, 101, 115, 104, 73, 110, 115, 116, 97, 110, 99, 101, 50, 68};
        register_classdb_global(&global_classdb_array[405], (const char *)data, 14);
    }
    {
        // MultiMeshInstance2D
        char data[] = {77, 117, 108, 116, 105, 77, 101, 115, 104, 73, 110, 115, 116, 97, 110, 99, 101, 50, 68};
        register_classdb_global(&global_classdb_array[406], (const char *)data, 19);
    }
    {
        // CollisionObject2D
        char data[] = {67, 111, 108, 108, 105, 115, 105, 111, 110, 79, 98, 106, 101, 99, 116, 50, 68};
        register_classdb_global(&global_classdb_array[407], (const char *)data, 17);
    }
    {
        // PhysicsBody2D
        char data[] = {80, 104, 121, 115, 105, 99, 115, 66, 111, 100, 121, 50, 68};
        register_classdb_global(&global_classdb_array[408], (const char *)data, 13);
    }
    {
        // StaticBody2D
        char data[] = {83, 116, 97, 116, 105, 99, 66, 111, 100, 121, 50, 68};
        register_classdb_global(&global_classdb_array[409], (const char *)data, 12);
    }
    {
        // RigidBody2D
        char data[] = {82, 105, 103, 105, 100, 66, 111, 100, 121, 50, 68};
        register_classdb_global(&global_classdb_array[410], (const char *)data, 11);
    }
    {
        // KinematicBody2D
        char data[] = {75, 105, 110, 101, 109, 97, 116, 105, 99, 66, 111, 100, 121, 50, 68};
        register_classdb_global(&global_classdb_array[411], (const char *)data, 15);
    }
    {
        // KinematicCollision2D
        char data[] = {75, 105, 110, 101, 109, 97, 116, 105, 99, 67, 111, 108, 108, 105, 115, 105, 111, 110, 50, 68};
        register_classdb_global(&global_classdb_array[412], (const char *)data, 20);
    }
    {
        // Area2D
        char data[] = {65, 114, 101, 97, 50, 68};
        register_classdb_global(&global_classdb_array[413], (const char *)data, 6);
    }
    {
        // CollisionShape2D
        char data[] = {67, 111, 108, 108, 105, 115, 105, 111, 110, 83, 104, 97, 112, 101, 50, 68};
        register_classdb_global(&global_classdb_array[414], (const char *)data, 16);
    }
    {
        // Shape2D
        char data[] = {83, 104, 97, 112, 101, 50, 68};
        register_classdb_global(&global_classdb_array[415], (const char *)data, 7);
    }
    {
        // CollisionPolygon2D
        char data[] = {67, 111, 108, 108, 105, 115, 105, 111, 110, 80, 111, 108, 121, 103, 111, 110, 50, 68};
        register_classdb_global(&global_classdb_array[416], (const char *)data, 18);
    }
    {
        // RayCast2D
        char data[] = {82, 97, 121, 67, 97, 115, 116, 50, 68};
        register_classdb_global(&global_classdb_array[417], (const char *)data, 9);
    }
    {
        // VisibilityNotifier2D
        char data[] = {86, 105, 115, 105, 98, 105, 108, 105, 116, 121, 78, 111, 116, 105, 102, 105, 101, 114, 50, 68};
        register_classdb_global(&global_classdb_array[418], (const char *)data, 20);
    }
    {
        // VisibilityEnabler2D
        char data[] = {86, 105, 115, 105, 98, 105, 108, 105, 116, 121, 69, 110, 97, 98, 108, 101, 114, 50, 68};
        register_classdb_global(&global_classdb_array[419], (const char *)data, 19);
    }
    {
        // Polygon2D
        char data[] = {80, 111, 108, 121, 103, 111, 110, 50, 68};
        register_classdb_global(&global_classdb_array[420], (const char *)data, 9);
    }
    {
        // CurveTexture
        char data[] = {67, 117, 114, 118, 101, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[421], (const char *)data, 12);
    }
    {
        // GradientTexture
        char data[] = {71, 114, 97, 100, 105, 101, 110, 116, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[422], (const char *)data, 15);
    }
    {
        // ArrayMesh
        char data[] = {65, 114, 114, 97, 121, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[423], (const char *)data, 9);
    }
    {
        // SurfaceTool
        char data[] = {83, 117, 114, 102, 97, 99, 101, 84, 111, 111, 108};
        register_classdb_global(&global_classdb_array[424], (const char *)data, 11);
    }
    {
        // MeshDataTool
        char data[] = {77, 101, 115, 104, 68, 97, 116, 97, 84, 111, 111, 108};
        register_classdb_global(&global_classdb_array[425], (const char *)data, 12);
    }
    {
        // PrimitiveMesh
        char data[] = {80, 114, 105, 109, 105, 116, 105, 118, 101, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[426], (const char *)data, 13);
    }
    {
        // CapsuleMesh
        char data[] = {67, 97, 112, 115, 117, 108, 101, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[427], (const char *)data, 11);
    }
    {
        // CubeMesh
        char data[] = {67, 117, 98, 101, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[428], (const char *)data, 8);
    }
    {
        // RayShape
        char data[] = {82, 97, 121, 83, 104, 97, 112, 101};
        register_classdb_global(&global_classdb_array[429], (const char *)data, 8);
    }
    {
        // SphereShape
        char data[] = {83, 112, 104, 101, 114, 101, 83, 104, 97, 112, 101};
        register_classdb_global(&global_classdb_array[430], (const char *)data, 11);
    }
    {
        // BoxShape
        char data[] = {66, 111, 120, 83, 104, 97, 112, 101};
        register_classdb_global(&global_classdb_array[431], (const char *)data, 8);
    }
    {
        // CapsuleShape
        char data[] = {67, 97, 112, 115, 117, 108, 101, 83, 104, 97, 112, 101};
        register_classdb_global(&global_classdb_array[432], (const char *)data, 12);
    }
    {
        // CylinderShape
        char data[] = {67, 121, 108, 105, 110, 100, 101, 114, 83, 104, 97, 112, 101};
        register_classdb_global(&global_classdb_array[433], (const char *)data, 13);
    }
    {
        // HeightMapShape
        char data[] = {72, 101, 105, 103, 104, 116, 77, 97, 112, 83, 104, 97, 112, 101};
        register_classdb_global(&global_classdb_array[434], (const char *)data, 14);
    }
    {
        // PlaneShape
        char data[] = {80, 108, 97, 110, 101, 83, 104, 97, 112, 101};
        register_classdb_global(&global_classdb_array[435], (const char *)data, 10);
    }
    {
        // ConvexPolygonShape
        char data[] = {67, 111, 110, 118, 101, 120, 80, 111, 108, 121, 103, 111, 110, 83, 104, 97, 112, 101};
        register_classdb_global(&global_classdb_array[436], (const char *)data, 18);
    }
    {
        // ConcavePolygonShape
        char data[] = {67, 111, 110, 99, 97, 118, 101, 80, 111, 108, 121, 103, 111, 110, 83, 104, 97, 112, 101};
        register_classdb_global(&global_classdb_array[437], (const char *)data, 19);
    }
    {
        // SpatialVelocityTracker
        char data[] = {83, 112, 97, 116, 105, 97, 108, 86, 101, 108, 111, 99, 105, 116, 121, 84, 114, 97, 99, 107, 101, 114};
        register_classdb_global(&global_classdb_array[438], (const char *)data, 22);
    }
    {
        // Sky
        char data[] = {83, 107, 121};
        register_classdb_global(&global_classdb_array[439], (const char *)data, 3);
    }
    {
        // CameraTexture
        char data[] = {67, 97, 109, 101, 114, 97, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[440], (const char *)data, 13);
    }
    {
        // TextureLayered
        char data[] = {84, 101, 120, 116, 117, 114, 101, 76, 97, 121, 101, 114, 101, 100};
        register_classdb_global(&global_classdb_array[441], (const char *)data, 14);
    }
    {
        // Texture3D
        char data[] = {84, 101, 120, 116, 117, 114, 101, 51, 68};
        register_classdb_global(&global_classdb_array[442], (const char *)data, 9);
    }
    {
        // TextureArray
        char data[] = {84, 101, 120, 116, 117, 114, 101, 65, 114, 114, 97, 121};
        register_classdb_global(&global_classdb_array[443], (const char *)data, 12);
    }
    {
        // Animation
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[444], (const char *)data, 9);
    }
    {
        // AudioStreamSample
        char data[] = {65, 117, 100, 105, 111, 83, 116, 114, 101, 97, 109, 83, 97, 109, 112, 108, 101};
        register_classdb_global(&global_classdb_array[445], (const char *)data, 17);
    }
    {
        // SegmentShape2D
        char data[] = {83, 101, 103, 109, 101, 110, 116, 83, 104, 97, 112, 101, 50, 68};
        register_classdb_global(&global_classdb_array[446], (const char *)data, 14);
    }
    {
        // RayShape2D
        char data[] = {82, 97, 121, 83, 104, 97, 112, 101, 50, 68};
        register_classdb_global(&global_classdb_array[447], (const char *)data, 10);
    }
    {
        // CircleShape2D
        char data[] = {67, 105, 114, 99, 108, 101, 83, 104, 97, 112, 101, 50, 68};
        register_classdb_global(&global_classdb_array[448], (const char *)data, 13);
    }
    {
        // RectangleShape2D
        char data[] = {82, 101, 99, 116, 97, 110, 103, 108, 101, 83, 104, 97, 112, 101, 50, 68};
        register_classdb_global(&global_classdb_array[449], (const char *)data, 16);
    }
    {
        // CapsuleShape2D
        char data[] = {67, 97, 112, 115, 117, 108, 101, 83, 104, 97, 112, 101, 50, 68};
        register_classdb_global(&global_classdb_array[450], (const char *)data, 14);
    }
    {
        // ConvexPolygonShape2D
        char data[] = {67, 111, 110, 118, 101, 120, 80, 111, 108, 121, 103, 111, 110, 83, 104, 97, 112, 101, 50, 68};
        register_classdb_global(&global_classdb_array[451], (const char *)data, 20);
    }
    {
        // ConcavePolygonShape2D
        char data[] = {67, 111, 110, 99, 97, 118, 101, 80, 111, 108, 121, 103, 111, 110, 83, 104, 97, 112, 101, 50, 68};
        register_classdb_global(&global_classdb_array[452], (const char *)data, 21);
    }
    {
        // Curve2D
        char data[] = {67, 117, 114, 118, 101, 50, 68};
        register_classdb_global(&global_classdb_array[453], (const char *)data, 7);
    }
    {
        // Path2D
        char data[] = {80, 97, 116, 104, 50, 68};
        register_classdb_global(&global_classdb_array[454], (const char *)data, 6);
    }
    {
        // PathFollow2D
        char data[] = {80, 97, 116, 104, 70, 111, 108, 108, 111, 119, 50, 68};
        register_classdb_global(&global_classdb_array[455], (const char *)data, 12);
    }
    {
        // Navigation2D
        char data[] = {78, 97, 118, 105, 103, 97, 116, 105, 111, 110, 50, 68};
        register_classdb_global(&global_classdb_array[456], (const char *)data, 12);
    }
    {
        // NavigationPolygon
        char data[] = {78, 97, 118, 105, 103, 97, 116, 105, 111, 110, 80, 111, 108, 121, 103, 111, 110};
        register_classdb_global(&global_classdb_array[457], (const char *)data, 17);
    }
    {
        // NavigationPolygonInstance
        char data[] = {78, 97, 118, 105, 103, 97, 116, 105, 111, 110, 80, 111, 108, 121, 103, 111, 110, 73, 110, 115, 116, 97, 110, 99, 101};
        register_classdb_global(&global_classdb_array[458], (const char *)data, 25);
    }
    {
        // SceneState
        char data[] = {83, 99, 101, 110, 101, 83, 116, 97, 116, 101};
        register_classdb_global(&global_classdb_array[459], (const char *)data, 10);
    }
    {
        // PackedScene
        char data[] = {80, 97, 99, 107, 101, 100, 83, 99, 101, 110, 101};
        register_classdb_global(&global_classdb_array[460], (const char *)data, 11);
    }
    {
        // SceneTree
        char data[] = {83, 99, 101, 110, 101, 84, 114, 101, 101};
        register_classdb_global(&global_classdb_array[461], (const char *)data, 9);
    }
    {
        // SceneTreeTimer
        char data[] = {83, 99, 101, 110, 101, 84, 114, 101, 101, 84, 105, 109, 101, 114};
        register_classdb_global(&global_classdb_array[462], (const char *)data, 14);
    }
    {
        // EditorPlugin
        char data[] = {69, 100, 105, 116, 111, 114, 80, 108, 117, 103, 105, 110};
        register_classdb_global(&global_classdb_array[463], (const char *)data, 12);
    }
    {
        // EditorImportPlugin
        char data[] = {69, 100, 105, 116, 111, 114, 73, 109, 112, 111, 114, 116, 80, 108, 117, 103, 105, 110};
        register_classdb_global(&global_classdb_array[464], (const char *)data, 18);
    }
    {
        // EditorScript
        char data[] = {69, 100, 105, 116, 111, 114, 83, 99, 114, 105, 112, 116};
        register_classdb_global(&global_classdb_array[465], (const char *)data, 12);
    }
    {
        // EditorSelection
        char data[] = {69, 100, 105, 116, 111, 114, 83, 101, 108, 101, 99, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[466], (const char *)data, 15);
    }
    {
        // EditorFileDialog
        char data[] = {69, 100, 105, 116, 111, 114, 70, 105, 108, 101, 68, 105, 97, 108, 111, 103};
        register_classdb_global(&global_classdb_array[467], (const char *)data, 16);
    }
    {
        // EditorSettings
        char data[] = {69, 100, 105, 116, 111, 114, 83, 101, 116, 116, 105, 110, 103, 115};
        register_classdb_global(&global_classdb_array[468], (const char *)data, 14);
    }
    {
        // EditorSpatialGizmo
        char data[] = {69, 100, 105, 116, 111, 114, 83, 112, 97, 116, 105, 97, 108, 71, 105, 122, 109, 111};
        register_classdb_global(&global_classdb_array[469], (const char *)data, 18);
    }
    {
        // EditorSpatialGizmoPlugin
        char data[] = {69, 100, 105, 116, 111, 114, 83, 112, 97, 116, 105, 97, 108, 71, 105, 122, 109, 111, 80, 108, 117, 103, 105, 110};
        register_classdb_global(&global_classdb_array[470], (const char *)data, 24);
    }
    {
        // EditorResourcePreview
        char data[] = {69, 100, 105, 116, 111, 114, 82, 101, 115, 111, 117, 114, 99, 101, 80, 114, 101, 118, 105, 101, 119};
        register_classdb_global(&global_classdb_array[471], (const char *)data, 21);
    }
    {
        // EditorResourcePreviewGenerator
        char data[] = {69, 100, 105, 116, 111, 114, 82, 101, 115, 111, 117, 114, 99, 101, 80, 114, 101, 118, 105, 101, 119, 71, 101, 110, 101, 114, 97, 116, 111, 114};
        register_classdb_global(&global_classdb_array[472], (const char *)data, 30);
    }
    {
        // EditorFileSystem
        char data[] = {69, 100, 105, 116, 111, 114, 70, 105, 108, 101, 83, 121, 115, 116, 101, 109};
        register_classdb_global(&global_classdb_array[473], (const char *)data, 16);
    }
    {
        // EditorFileSystemDirectory
        char data[] = {69, 100, 105, 116, 111, 114, 70, 105, 108, 101, 83, 121, 115, 116, 101, 109, 68, 105, 114, 101, 99, 116, 111, 114, 121};
        register_classdb_global(&global_classdb_array[474], (const char *)data, 25);
    }
    {
        // EditorVCSInterface
        char data[] = {69, 100, 105, 116, 111, 114, 86, 67, 83, 73, 110, 116, 101, 114, 102, 97, 99, 101};
        register_classdb_global(&global_classdb_array[475], (const char *)data, 18);
    }
    {
        // ScriptEditor
        char data[] = {83, 99, 114, 105, 112, 116, 69, 100, 105, 116, 111, 114};
        register_classdb_global(&global_classdb_array[476], (const char *)data, 12);
    }
    {
        // EditorInterface
        char data[] = {69, 100, 105, 116, 111, 114, 73, 110, 116, 101, 114, 102, 97, 99, 101};
        register_classdb_global(&global_classdb_array[477], (const char *)data, 15);
    }
    {
        // EditorExportPlugin
        char data[] = {69, 100, 105, 116, 111, 114, 69, 120, 112, 111, 114, 116, 80, 108, 117, 103, 105, 110};
        register_classdb_global(&global_classdb_array[478], (const char *)data, 18);
    }
    {
        // EditorResourceConversionPlugin
        char data[] = {69, 100, 105, 116, 111, 114, 82, 101, 115, 111, 117, 114, 99, 101, 67, 111, 110, 118, 101, 114, 115, 105, 111, 110, 80, 108, 117, 103, 105, 110};
        register_classdb_global(&global_classdb_array[479], (const char *)data, 30);
    }
    {
        // EditorSceneImporter
        char data[] = {69, 100, 105, 116, 111, 114, 83, 99, 101, 110, 101, 73, 109, 112, 111, 114, 116, 101, 114};
        register_classdb_global(&global_classdb_array[480], (const char *)data, 19);
    }
    {
        // EditorInspector
        char data[] = {69, 100, 105, 116, 111, 114, 73, 110, 115, 112, 101, 99, 116, 111, 114};
        register_classdb_global(&global_classdb_array[481], (const char *)data, 15);
    }
    {
        // EditorInspectorPlugin
        char data[] = {69, 100, 105, 116, 111, 114, 73, 110, 115, 112, 101, 99, 116, 111, 114, 80, 108, 117, 103, 105, 110};
        register_classdb_global(&global_classdb_array[482], (const char *)data, 21);
    }
    {
        // EditorProperty
        char data[] = {69, 100, 105, 116, 111, 114, 80, 114, 111, 112, 101, 114, 116, 121};
        register_classdb_global(&global_classdb_array[483], (const char *)data, 14);
    }
    {
        // ScriptCreateDialog
        char data[] = {83, 99, 114, 105, 112, 116, 67, 114, 101, 97, 116, 101, 68, 105, 97, 108, 111, 103};
        register_classdb_global(&global_classdb_array[484], (const char *)data, 18);
    }
    {
        // AnimationTrackEditPlugin
        char data[] = {65, 110, 105, 109, 97, 116, 105, 111, 110, 84, 114, 97, 99, 107, 69, 100, 105, 116, 80, 108, 117, 103, 105, 110};
        register_classdb_global(&global_classdb_array[485], (const char *)data, 24);
    }
    {
        // EditorFeatureProfile
        char data[] = {69, 100, 105, 116, 111, 114, 70, 101, 97, 116, 117, 114, 101, 80, 114, 111, 102, 105, 108, 101};
        register_classdb_global(&global_classdb_array[486], (const char *)data, 20);
    }
    {
        // EditorScenePostImport
        char data[] = {69, 100, 105, 116, 111, 114, 83, 99, 101, 110, 101, 80, 111, 115, 116, 73, 109, 112, 111, 114, 116};
        register_classdb_global(&global_classdb_array[487], (const char *)data, 21);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("JavaScript");
        api10->godot_variant_new_object(&global_singletons_array[12], singleton);
    }
    {
        // EditorSceneImporterAssimp
        char data[] = {69, 100, 105, 116, 111, 114, 83, 99, 101, 110, 101, 73, 109, 112, 111, 114, 116, 101, 114, 65, 115, 115, 105, 109, 112};
        register_classdb_global(&global_classdb_array[488], (const char *)data, 25);
    }
    {
        // CSGShape
        char data[] = {67, 83, 71, 83, 104, 97, 112, 101};
        register_classdb_global(&global_classdb_array[489], (const char *)data, 8);
    }
    {
        // CSGPrimitive
        char data[] = {67, 83, 71, 80, 114, 105, 109, 105, 116, 105, 118, 101};
        register_classdb_global(&global_classdb_array[490], (const char *)data, 12);
    }
    {
        // CSGMesh
        char data[] = {67, 83, 71, 77, 101, 115, 104};
        register_classdb_global(&global_classdb_array[491], (const char *)data, 7);
    }
    {
        // CSGSphere
        char data[] = {67, 83, 71, 83, 112, 104, 101, 114, 101};
        register_classdb_global(&global_classdb_array[492], (const char *)data, 9);
    }
    {
        // CSGBox
        char data[] = {67, 83, 71, 66, 111, 120};
        register_classdb_global(&global_classdb_array[493], (const char *)data, 6);
    }
    {
        // CSGCylinder
        char data[] = {67, 83, 71, 67, 121, 108, 105, 110, 100, 101, 114};
        register_classdb_global(&global_classdb_array[494], (const char *)data, 11);
    }
    {
        // CSGTorus
        char data[] = {67, 83, 71, 84, 111, 114, 117, 115};
        register_classdb_global(&global_classdb_array[495], (const char *)data, 8);
    }
    {
        // JSONRPC
        char data[] = {74, 83, 79, 78, 82, 80, 67};
        register_classdb_global(&global_classdb_array[496], (const char *)data, 7);
    }
    {
        // MobileVRInterface
        char data[] = {77, 111, 98, 105, 108, 101, 86, 82, 73, 110, 116, 101, 114, 102, 97, 99, 101};
        register_classdb_global(&global_classdb_array[497], (const char *)data, 17);
    }
    {
        // OpenSimplexNoise
        char data[] = {79, 112, 101, 110, 83, 105, 109, 112, 108, 101, 120, 78, 111, 105, 115, 101};
        register_classdb_global(&global_classdb_array[498], (const char *)data, 16);
    }
    {
        // StreamTexture
        char data[] = {83, 116, 114, 101, 97, 109, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[499], (const char *)data, 13);
    }
    {
        // ImageTexture
        char data[] = {73, 109, 97, 103, 101, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[500], (const char *)data, 12);
    }
    {
        // AtlasTexture
        char data[] = {65, 116, 108, 97, 115, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[501], (const char *)data, 12);
    }
    {
        // MeshTexture
        char data[] = {77, 101, 115, 104, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[502], (const char *)data, 11);
    }
    {
        // LargeTexture
        char data[] = {76, 97, 114, 103, 101, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[503], (const char *)data, 12);
    }
    {
        // ProxyTexture
        char data[] = {80, 114, 111, 120, 121, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[504], (const char *)data, 12);
    }
    {
        // AnimatedTexture
        char data[] = {65, 110, 105, 109, 97, 116, 101, 100, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[505], (const char *)data, 15);
    }
    {
        // Font
        char data[] = {70, 111, 110, 116};
        register_classdb_global(&global_classdb_array[506], (const char *)data, 4);
    }
    {
        // BitmapFont
        char data[] = {66, 105, 116, 109, 97, 112, 70, 111, 110, 116};
        register_classdb_global(&global_classdb_array[507], (const char *)data, 10);
    }
    {
        // TextFile
        char data[] = {84, 101, 120, 116, 70, 105, 108, 101};
        register_classdb_global(&global_classdb_array[508], (const char *)data, 8);
    }
    {
        // DynamicFontData
        char data[] = {68, 121, 110, 97, 109, 105, 99, 70, 111, 110, 116, 68, 97, 116, 97};
        register_classdb_global(&global_classdb_array[509], (const char *)data, 15);
    }
    {
        // DynamicFont
        char data[] = {68, 121, 110, 97, 109, 105, 99, 70, 111, 110, 116};
        register_classdb_global(&global_classdb_array[510], (const char *)data, 11);
    }
    {
        // StyleBox
        char data[] = {83, 116, 121, 108, 101, 66, 111, 120};
        register_classdb_global(&global_classdb_array[511], (const char *)data, 8);
    }
    {
        // StyleBoxEmpty
        char data[] = {83, 116, 121, 108, 101, 66, 111, 120, 69, 109, 112, 116, 121};
        register_classdb_global(&global_classdb_array[512], (const char *)data, 13);
    }
    {
        // StyleBoxTexture
        char data[] = {83, 116, 121, 108, 101, 66, 111, 120, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[513], (const char *)data, 15);
    }
    {
        // StyleBoxFlat
        char data[] = {83, 116, 121, 108, 101, 66, 111, 120, 70, 108, 97, 116};
        register_classdb_global(&global_classdb_array[514], (const char *)data, 12);
    }
    {
        // StyleBoxLine
        char data[] = {83, 116, 121, 108, 101, 66, 111, 120, 76, 105, 110, 101};
        register_classdb_global(&global_classdb_array[515], (const char *)data, 12);
    }
    {
        // PolygonPathFinder
        char data[] = {80, 111, 108, 121, 103, 111, 110, 80, 97, 116, 104, 70, 105, 110, 100, 101, 114};
        register_classdb_global(&global_classdb_array[516], (const char *)data, 17);
    }
    {
        // AudioStreamPlayer
        char data[] = {65, 117, 100, 105, 111, 83, 116, 114, 101, 97, 109, 80, 108, 97, 121, 101, 114};
        register_classdb_global(&global_classdb_array[517], (const char *)data, 17);
    }
    {
        // AudioStreamPlayer2D
        char data[] = {65, 117, 100, 105, 111, 83, 116, 114, 101, 97, 109, 80, 108, 97, 121, 101, 114, 50, 68};
        register_classdb_global(&global_classdb_array[518], (const char *)data, 19);
    }
    {
        // AudioStreamPlayer3D
        char data[] = {65, 117, 100, 105, 111, 83, 116, 114, 101, 97, 109, 80, 108, 97, 121, 101, 114, 51, 68};
        register_classdb_global(&global_classdb_array[519], (const char *)data, 19);
    }
    {
        // LineShape2D
        char data[] = {76, 105, 110, 101, 83, 104, 97, 112, 101, 50, 68};
        register_classdb_global(&global_classdb_array[520], (const char *)data, 11);
    }
    {
        // Physics2DDirectSpaceStateSW
        char data[] = {80, 104, 121, 115, 105, 99, 115, 50, 68, 68, 105, 114, 101, 99, 116, 83, 112, 97, 99, 101, 83, 116, 97, 116, 101, 83, 87};
        register_classdb_global(&global_classdb_array[521], (const char *)data, 27);
    }
    {
        // CSGPolygon
        char data[] = {67, 83, 71, 80, 111, 108, 121, 103, 111, 110};
        register_classdb_global(&global_classdb_array[522], (const char *)data, 10);
    }
    {
        // CSGCombiner
        char data[] = {67, 83, 71, 67, 111, 109, 98, 105, 110, 101, 114};
        register_classdb_global(&global_classdb_array[523], (const char *)data, 11);
    }
    {
        // NetworkedMultiplayerENet
        char data[] = {78, 101, 116, 119, 111, 114, 107, 101, 100, 77, 117, 108, 116, 105, 112, 108, 97, 121, 101, 114, 69, 78, 101, 116};
        register_classdb_global(&global_classdb_array[524], (const char *)data, 24);
    }
    {
        // GDScriptBytecodeExporter
        char data[] = {71, 68, 83, 99, 114, 105, 112, 116, 66, 121, 116, 101, 99, 111, 100, 101, 69, 120, 112, 111, 114, 116, 101, 114};
        register_classdb_global(&global_classdb_array[525], (const char *)data, 24);
    }
    {
        // GD2CApi
        char data[] = {71, 68, 50, 67, 65, 112, 105};
        register_classdb_global(&global_classdb_array[526], (const char *)data, 7);
    }
    {
        // GDNativeLibrary
        char data[] = {71, 68, 78, 97, 116, 105, 118, 101, 76, 105, 98, 114, 97, 114, 121};
        register_classdb_global(&global_classdb_array[527], (const char *)data, 15);
    }
    {
        // GDNative
        char data[] = {71, 68, 78, 97, 116, 105, 118, 101};
        register_classdb_global(&global_classdb_array[528], (const char *)data, 8);
    }
    {
        // MultiplayerPeerGDNative
        char data[] = {77, 117, 108, 116, 105, 112, 108, 97, 121, 101, 114, 80, 101, 101, 114, 71, 68, 78, 97, 116, 105, 118, 101};
        register_classdb_global(&global_classdb_array[529], (const char *)data, 23);
    }
    {
        // PacketPeerGDNative
        char data[] = {80, 97, 99, 107, 101, 116, 80, 101, 101, 114, 71, 68, 78, 97, 116, 105, 118, 101};
        register_classdb_global(&global_classdb_array[530], (const char *)data, 18);
    }
    {
        // StreamPeerGDNative
        char data[] = {83, 116, 114, 101, 97, 109, 80, 101, 101, 114, 71, 68, 78, 97, 116, 105, 118, 101};
        register_classdb_global(&global_classdb_array[531], (const char *)data, 18);
    }
    {
        // ARVRInterfaceGDNative
        char data[] = {65, 82, 86, 82, 73, 110, 116, 101, 114, 102, 97, 99, 101, 71, 68, 78, 97, 116, 105, 118, 101};
        register_classdb_global(&global_classdb_array[532], (const char *)data, 21);
    }
    {
        // NativeScript
        char data[] = {78, 97, 116, 105, 118, 101, 83, 99, 114, 105, 112, 116};
        register_classdb_global(&global_classdb_array[533], (const char *)data, 12);
    }
    {
        // VideoStreamGDNative
        char data[] = {86, 105, 100, 101, 111, 83, 116, 114, 101, 97, 109, 71, 68, 78, 97, 116, 105, 118, 101};
        register_classdb_global(&global_classdb_array[534], (const char *)data, 19);
    }
    {
        // PluginScript
        char data[] = {80, 108, 117, 103, 105, 110, 83, 99, 114, 105, 112, 116};
        register_classdb_global(&global_classdb_array[535], (const char *)data, 12);
    }
    {
        // GDScript
        char data[] = {71, 68, 83, 99, 114, 105, 112, 116};
        register_classdb_global(&global_classdb_array[536], (const char *)data, 8);
    }
    {
        // GDScriptFunctionState
        char data[] = {71, 68, 83, 99, 114, 105, 112, 116, 70, 117, 110, 99, 116, 105, 111, 110, 83, 116, 97, 116, 101};
        register_classdb_global(&global_classdb_array[537], (const char *)data, 21);
    }
    {
        // GridMap
        char data[] = {71, 114, 105, 100, 77, 97, 112};
        register_classdb_global(&global_classdb_array[538], (const char *)data, 7);
    }
    {
        // VisualScript
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116};
        register_classdb_global(&global_classdb_array[539], (const char *)data, 12);
    }
    {
        // VisualScriptNode
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 78, 111, 100, 101};
        register_classdb_global(&global_classdb_array[540], (const char *)data, 16);
    }
    {
        // VisualScriptFunctionState
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 70, 117, 110, 99, 116, 105, 111, 110, 83, 116, 97, 116, 101};
        register_classdb_global(&global_classdb_array[541], (const char *)data, 25);
    }
    {
        // VisualScriptFunction
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 70, 117, 110, 99, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[542], (const char *)data, 20);
    }
    {
        // VisualScriptLists
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 76, 105, 115, 116, 115};
        register_classdb_global(&global_classdb_array[543], (const char *)data, 17);
    }
    {
        // VisualScriptComposeArray
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 67, 111, 109, 112, 111, 115, 101, 65, 114, 114, 97, 121};
        register_classdb_global(&global_classdb_array[544], (const char *)data, 24);
    }
    {
        // VisualScriptOperator
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 79, 112, 101, 114, 97, 116, 111, 114};
        register_classdb_global(&global_classdb_array[545], (const char *)data, 20);
    }
    {
        // VisualScriptVariableSet
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 86, 97, 114, 105, 97, 98, 108, 101, 83, 101, 116};
        register_classdb_global(&global_classdb_array[546], (const char *)data, 23);
    }
    {
        // VisualScriptVariableGet
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 86, 97, 114, 105, 97, 98, 108, 101, 71, 101, 116};
        register_classdb_global(&global_classdb_array[547], (const char *)data, 23);
    }
    {
        // VisualScriptConstant
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 67, 111, 110, 115, 116, 97, 110, 116};
        register_classdb_global(&global_classdb_array[548], (const char *)data, 20);
    }
    {
        // VisualScriptIndexGet
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 73, 110, 100, 101, 120, 71, 101, 116};
        register_classdb_global(&global_classdb_array[549], (const char *)data, 20);
    }
    {
        // VisualScriptIndexSet
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 73, 110, 100, 101, 120, 83, 101, 116};
        register_classdb_global(&global_classdb_array[550], (const char *)data, 20);
    }
    {
        // VisualScriptGlobalConstant
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 71, 108, 111, 98, 97, 108, 67, 111, 110, 115, 116, 97, 110, 116};
        register_classdb_global(&global_classdb_array[551], (const char *)data, 26);
    }
    {
        // VisualScriptClassConstant
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 67, 108, 97, 115, 115, 67, 111, 110, 115, 116, 97, 110, 116};
        register_classdb_global(&global_classdb_array[552], (const char *)data, 25);
    }
    {
        // VisualScriptMathConstant
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 77, 97, 116, 104, 67, 111, 110, 115, 116, 97, 110, 116};
        register_classdb_global(&global_classdb_array[553], (const char *)data, 24);
    }
    {
        // VisualScriptBasicTypeConstant
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 66, 97, 115, 105, 99, 84, 121, 112, 101, 67, 111, 110, 115, 116, 97, 110, 116};
        register_classdb_global(&global_classdb_array[554], (const char *)data, 29);
    }
    {
        // VisualScriptEngineSingleton
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 69, 110, 103, 105, 110, 101, 83, 105, 110, 103, 108, 101, 116, 111, 110};
        register_classdb_global(&global_classdb_array[555], (const char *)data, 27);
    }
    {
        // VisualScriptSceneNode
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 83, 99, 101, 110, 101, 78, 111, 100, 101};
        register_classdb_global(&global_classdb_array[556], (const char *)data, 21);
    }
    {
        // VisualScriptSceneTree
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 83, 99, 101, 110, 101, 84, 114, 101, 101};
        register_classdb_global(&global_classdb_array[557], (const char *)data, 21);
    }
    {
        // VisualScriptResourcePath
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 82, 101, 115, 111, 117, 114, 99, 101, 80, 97, 116, 104};
        register_classdb_global(&global_classdb_array[558], (const char *)data, 24);
    }
    {
        // VisualScriptSelf
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 83, 101, 108, 102};
        register_classdb_global(&global_classdb_array[559], (const char *)data, 16);
    }
    {
        // VisualScriptCustomNode
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 67, 117, 115, 116, 111, 109, 78, 111, 100, 101};
        register_classdb_global(&global_classdb_array[560], (const char *)data, 22);
    }
    {
        // VisualScriptSubCall
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 83, 117, 98, 67, 97, 108, 108};
        register_classdb_global(&global_classdb_array[561], (const char *)data, 19);
    }
    {
        // VisualScriptComment
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 67, 111, 109, 109, 101, 110, 116};
        register_classdb_global(&global_classdb_array[562], (const char *)data, 19);
    }
    {
        // VisualScriptConstructor
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 67, 111, 110, 115, 116, 114, 117, 99, 116, 111, 114};
        register_classdb_global(&global_classdb_array[563], (const char *)data, 23);
    }
    {
        // VisualScriptLocalVar
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 76, 111, 99, 97, 108, 86, 97, 114};
        register_classdb_global(&global_classdb_array[564], (const char *)data, 20);
    }
    {
        // VisualScriptLocalVarSet
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 76, 111, 99, 97, 108, 86, 97, 114, 83, 101, 116};
        register_classdb_global(&global_classdb_array[565], (const char *)data, 23);
    }
    {
        // VisualScriptInputAction
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 73, 110, 112, 117, 116, 65, 99, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[566], (const char *)data, 23);
    }
    {
        // VisualScriptDeconstruct
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 68, 101, 99, 111, 110, 115, 116, 114, 117, 99, 116};
        register_classdb_global(&global_classdb_array[567], (const char *)data, 23);
    }
    {
        // VisualScriptTypeCast
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 84, 121, 112, 101, 67, 97, 115, 116};
        register_classdb_global(&global_classdb_array[568], (const char *)data, 20);
    }
    {
        // VisualScriptFunctionCall
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 70, 117, 110, 99, 116, 105, 111, 110, 67, 97, 108, 108};
        register_classdb_global(&global_classdb_array[569], (const char *)data, 24);
    }
    {
        // VisualScriptPropertySet
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 80, 114, 111, 112, 101, 114, 116, 121, 83, 101, 116};
        register_classdb_global(&global_classdb_array[570], (const char *)data, 23);
    }
    {
        // VisualScriptPropertyGet
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 80, 114, 111, 112, 101, 114, 116, 121, 71, 101, 116};
        register_classdb_global(&global_classdb_array[571], (const char *)data, 23);
    }
    {
        // VisualScriptEmitSignal
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 69, 109, 105, 116, 83, 105, 103, 110, 97, 108};
        register_classdb_global(&global_classdb_array[572], (const char *)data, 22);
    }
    {
        // VisualScriptReturn
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 82, 101, 116, 117, 114, 110};
        register_classdb_global(&global_classdb_array[573], (const char *)data, 18);
    }
    {
        // VisualScriptCondition
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 67, 111, 110, 100, 105, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[574], (const char *)data, 21);
    }
    {
        // VisualScriptWhile
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 87, 104, 105, 108, 101};
        register_classdb_global(&global_classdb_array[575], (const char *)data, 17);
    }
    {
        // VisualScriptIterator
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 73, 116, 101, 114, 97, 116, 111, 114};
        register_classdb_global(&global_classdb_array[576], (const char *)data, 20);
    }
    {
        // VisualScriptSequence
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 83, 101, 113, 117, 101, 110, 99, 101};
        register_classdb_global(&global_classdb_array[577], (const char *)data, 20);
    }
    {
        // VisualScriptSwitch
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 83, 119, 105, 116, 99, 104};
        register_classdb_global(&global_classdb_array[578], (const char *)data, 18);
    }
    {
        // VisualScriptSelect
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 83, 101, 108, 101, 99, 116};
        register_classdb_global(&global_classdb_array[579], (const char *)data, 18);
    }
    {
        // VisualScriptYield
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 89, 105, 101, 108, 100};
        register_classdb_global(&global_classdb_array[580], (const char *)data, 17);
    }
    {
        // VisualScriptYieldSignal
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 89, 105, 101, 108, 100, 83, 105, 103, 110, 97, 108};
        register_classdb_global(&global_classdb_array[581], (const char *)data, 23);
    }
    {
        // VisualScriptBuiltinFunc
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 66, 117, 105, 108, 116, 105, 110, 70, 117, 110, 99};
        register_classdb_global(&global_classdb_array[582], (const char *)data, 23);
    }
    {
        // WebRTCPeerConnectionGDNative
        char data[] = {87, 101, 98, 82, 84, 67, 80, 101, 101, 114, 67, 111, 110, 110, 101, 99, 116, 105, 111, 110, 71, 68, 78, 97, 116, 105, 118, 101};
        register_classdb_global(&global_classdb_array[583], (const char *)data, 28);
    }
    {
        // WebRTCPeerConnection
        char data[] = {87, 101, 98, 82, 84, 67, 80, 101, 101, 114, 67, 111, 110, 110, 101, 99, 116, 105, 111, 110};
        register_classdb_global(&global_classdb_array[584], (const char *)data, 20);
    }
    {
        // WebRTCDataChannel
        char data[] = {87, 101, 98, 82, 84, 67, 68, 97, 116, 97, 67, 104, 97, 110, 110, 101, 108};
        register_classdb_global(&global_classdb_array[585], (const char *)data, 17);
    }
    {
        // NoiseTexture
        char data[] = {78, 111, 105, 115, 101, 84, 101, 120, 116, 117, 114, 101};
        register_classdb_global(&global_classdb_array[586], (const char *)data, 12);
    }
    {
        // EditorNavigationMeshGenerator
        char data[] = {69, 100, 105, 116, 111, 114, 78, 97, 118, 105, 103, 97, 116, 105, 111, 110, 77, 101, 115, 104, 71, 101, 110, 101, 114, 97, 116, 111, 114};
        register_classdb_global(&global_classdb_array[587], (const char *)data, 29);
    }
    {
        // RegExMatch
        char data[] = {82, 101, 103, 69, 120, 77, 97, 116, 99, 104};
        register_classdb_global(&global_classdb_array[588], (const char *)data, 10);
    }
    {
        // RegEx
        char data[] = {82, 101, 103, 69, 120};
        register_classdb_global(&global_classdb_array[589], (const char *)data, 5);
    }
    {
        // AudioStreamOGGVorbis
        char data[] = {65, 117, 100, 105, 111, 83, 116, 114, 101, 97, 109, 79, 71, 71, 86, 111, 114, 98, 105, 115};
        register_classdb_global(&global_classdb_array[590], (const char *)data, 20);
    }
    {
        // VideoStreamTheora
        char data[] = {86, 105, 100, 101, 111, 83, 116, 114, 101, 97, 109, 84, 104, 101, 111, 114, 97};
        register_classdb_global(&global_classdb_array[591], (const char *)data, 17);
    }
    {
        // UPNP
        char data[] = {85, 80, 78, 80};
        register_classdb_global(&global_classdb_array[592], (const char *)data, 4);
    }
    {
        // UPNPDevice
        char data[] = {85, 80, 78, 80, 68, 101, 118, 105, 99, 101};
        register_classdb_global(&global_classdb_array[593], (const char *)data, 10);
    }
    {
        // VisualScriptPreload
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 80, 114, 101, 108, 111, 97, 100};
        register_classdb_global(&global_classdb_array[594], (const char *)data, 19);
    }
    {
        // VisualScriptExpression
        char data[] = {86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 69, 120, 112, 114, 101, 115, 115, 105, 111, 110};
        register_classdb_global(&global_classdb_array[595], (const char *)data, 22);
    }
    {
        // _VisualScriptEditor
        char data[] = {95, 86, 105, 115, 117, 97, 108, 83, 99, 114, 105, 112, 116, 69, 100, 105, 116, 111, 114};
        register_classdb_global(&global_classdb_array[596], (const char *)data, 19);
    }
    {
        // VideoStreamWebm
        char data[] = {86, 105, 100, 101, 111, 83, 116, 114, 101, 97, 109, 87, 101, 98, 109};
        register_classdb_global(&global_classdb_array[597], (const char *)data, 15);
    }
    {
        // BulletPhysicsDirectSpaceState
        char data[] = {66, 117, 108, 108, 101, 116, 80, 104, 121, 115, 105, 99, 115, 68, 105, 114, 101, 99, 116, 83, 112, 97, 99, 101, 83, 116, 97, 116, 101};
        register_classdb_global(&global_classdb_array[598], (const char *)data, 29);
    }
    {
        // WebRTCMultiplayer
        char data[] = {87, 101, 98, 82, 84, 67, 77, 117, 108, 116, 105, 112, 108, 97, 121, 101, 114};
        register_classdb_global(&global_classdb_array[599], (const char *)data, 17);
    }
    {
        // WebRTCDataChannelGDNative
        char data[] = {87, 101, 98, 82, 84, 67, 68, 97, 116, 97, 67, 104, 97, 110, 110, 101, 108, 71, 68, 78, 97, 116, 105, 118, 101};
        register_classdb_global(&global_classdb_array[600], (const char *)data, 25);
    }
    {
        // WebSocketMultiplayerPeer
        char data[] = {87, 101, 98, 83, 111, 99, 107, 101, 116, 77, 117, 108, 116, 105, 112, 108, 97, 121, 101, 114, 80, 101, 101, 114};
        register_classdb_global(&global_classdb_array[601], (const char *)data, 24);
    }
    {
        // WebSocketServer
        char data[] = {87, 101, 98, 83, 111, 99, 107, 101, 116, 83, 101, 114, 118, 101, 114};
        register_classdb_global(&global_classdb_array[602], (const char *)data, 15);
    }
    {
        // WebSocketClient
        char data[] = {87, 101, 98, 83, 111, 99, 107, 101, 116, 67, 108, 105, 101, 110, 116};
        register_classdb_global(&global_classdb_array[603], (const char *)data, 15);
    }
    {
        // WebSocketPeer
        char data[] = {87, 101, 98, 83, 111, 99, 107, 101, 116, 80, 101, 101, 114};
        register_classdb_global(&global_classdb_array[604], (const char *)data, 13);
    }
    {
        // BulletPhysicsServer
        char data[] = {66, 117, 108, 108, 101, 116, 80, 104, 121, 115, 105, 99, 115, 83, 101, 114, 118, 101, 114};
        register_classdb_global(&global_classdb_array[605], (const char *)data, 19);
    }
    {
        // BulletPhysicsDirectBodyState
        char data[] = {66, 117, 108, 108, 101, 116, 80, 104, 121, 115, 105, 99, 115, 68, 105, 114, 101, 99, 116, 66, 111, 100, 121, 83, 116, 97, 116, 101};
        register_classdb_global(&global_classdb_array[606], (const char *)data, 28);
    }
    {
        // Physics2DServerSW
        char data[] = {80, 104, 121, 115, 105, 99, 115, 50, 68, 83, 101, 114, 118, 101, 114, 83, 87};
        register_classdb_global(&global_classdb_array[607], (const char *)data, 17);
    }
    {
        // Physics2DDirectBodyStateSW
        char data[] = {80, 104, 121, 115, 105, 99, 115, 50, 68, 68, 105, 114, 101, 99, 116, 66, 111, 100, 121, 83, 116, 97, 116, 101, 83, 87};
        register_classdb_global(&global_classdb_array[608], (const char *)data, 26);
    }
    {
        // GDScriptNativeClass
        char data[] = {71, 68, 83, 99, 114, 105, 112, 116, 78, 97, 116, 105, 118, 101, 67, 108, 97, 115, 115};
        register_classdb_global(&global_classdb_array[609], (const char *)data, 19);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("Geometry");
        api10->godot_variant_new_object(&global_singletons_array[13], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("ResourceLoader");
        api10->godot_variant_new_object(&global_singletons_array[14], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("ResourceSaver");
        api10->godot_variant_new_object(&global_singletons_array[15], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("OS");
        api10->godot_variant_new_object(&global_singletons_array[16], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("Engine");
        api10->godot_variant_new_object(&global_singletons_array[17], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("ClassDB");
        api10->godot_variant_new_object(&global_singletons_array[18], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("Marshalls");
        api10->godot_variant_new_object(&global_singletons_array[19], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("JSON");
        api10->godot_variant_new_object(&global_singletons_array[20], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("NavigationMeshGenerator");
        api10->godot_variant_new_object(&global_singletons_array[21], singleton);
    }
    {
        godot_object *singleton = api10->godot_global_get_singleton("VisualScriptEditor");
        api10->godot_variant_new_object(&global_singletons_array[22], singleton);
    }
    //printf("Exit: godot_nativescript_init\n");
}
