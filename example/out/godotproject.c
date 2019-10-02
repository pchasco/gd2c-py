#include "gd2c.h"
#include "godotproject.h"
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
godot_variant Class_1_get_arr(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->arr);
    return value;
}

void Class_1_set_arr(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->arr, p_value);
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
            uint8_t data[] = {2, 0, 0, 0, 1, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1__init_local_const[0], data, 8, &bytesRead, true);
            print_variant(&Class_1__init_local_const[0]);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 2, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1__init_local_const[1], data, 8, &bytesRead, true);
            print_variant(&Class_1__init_local_const[1]);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 3, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1__init_local_const[2], data, 8, &bytesRead, true);
            print_variant(&Class_1__init_local_const[2]);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 4, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1__init_local_const[3], data, 8, &bytesRead, true);
            print_variant(&Class_1__init_local_const[3]);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 5, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1__init_local_const[4], data, 8, &bytesRead, true);
            print_variant(&Class_1__init_local_const[4]);
        }
        {
            char data[] = {95, 105, 110, 105, 116};
            godot_string s;
            api10->godot_string_new(&s);
            api10->godot_string_parse_utf8_with_len(&s, data, 5);
            api10->godot_string_name_new(&Class_1__init_global_names[0], &s);
            api10->godot_string_destroy(&s);
        }
        Class_1__init_local_const_initialized = 1;
    }
    godot_variant st_0;
    godot_variant st_1;
    godot_variant st_2;
    godot_variant st_3;
    goto _entry;
_entry:
    // DEFINE 67108864;
    // DEFINE 67108865;
    // DEFINE 67108866;
    // DEFINE 67108867;
    // DEFINE 67108868;
    api10->godot_variant_new_nil(&st_0);
    api10->godot_variant_new_nil(&st_2);
    api10->godot_variant_new_nil(&st_1);
    api10->godot_variant_new_nil(&st_3);
    goto _0;
_0:
    goto _2;
_2:
{
    godot_array arr;
    api10->godot_array_new(&arr);
    api10->godot_array_resize(&arr, 5);
    api10->godot_array_set(&arr, 0, &Class_1__init_local_const[0]);
    api10->godot_array_set(&arr, 1, &Class_1__init_local_const[1]);
    api10->godot_array_set(&arr, 2, &Class_1__init_local_const[2]);
    api10->godot_array_set(&arr, 3, &Class_1__init_local_const[3]);
    api10->godot_array_set(&arr, 4, &Class_1__init_local_const[4]);
    api10->godot_variant_new_array(&st_0, &arr);
}
    api10->godot_variant_new_copy(&p_user_data->arr, &st_0);
    //
    // Call to base _init is always ignored
    //

    api10->godot_variant_new_copy(&st_2, &p_user_data->arr);
    if (!gd2c10->variant_iter_init(&st_2, &st_1, &__flag))
    {
        goto _39;
    }
    else
    {
        gd2c10->variant_iter_get(&st_2, &st_1, &st_0, &__flag);
        goto _25;
    }
_39:
    goto _41;
_41:
    goto _2147483646;
_2147483646:
    api10->godot_variant_destroy(&st_0);
    api10->godot_variant_destroy(&st_2);
    api10->godot_variant_destroy(&st_1);
    api10->godot_variant_destroy(&st_3);
    goto _cleanup;
_25:
    goto _27;
_27:
{
    godot_variant *args[] = {&st_0};
    godot_variant_call_error err;
    gd2c10->call_gdscript_builtin(62, (const godot_variant **)args, 1, &st_3, &err);
}
    goto _34;
_34:
    if (!gd2c10->variant_iter_next(&st_2, &st_1, &__flag))
    {
        goto _39;
    }
    else
    {
        gd2c10->variant_iter_get(&st_2, &st_1, &st_0, &__flag);
        goto _27;
    }
_cleanup:
    //printf("Exit: Class_1__init_func\n");
    return __return_value;
}
void Class_1_vtable_init()
{
    vtable_init(&Class_1_vtable, &vtable, 2, 1, (void *)0, Class_1_vtable_methods, Class_1_vtable_method_names);
    VTABLE_METHOD(Class_1_vtable, 0, "_init", Class_1__init_func, (void *)0);
}
void GDN_EXPORT GD2C_gdnative_init(godot_gdnative_init_options *p_options)
{
    //printf("Enter: GD2C_gdnative_init\n");
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

    initialize_gd2capi();

    api10->godot_variant_new_nil(&__nil);
    //printf("Exit: GD2C_gdnative_init\n");
}
void GDN_EXPORT GD2C_gdnative_terminate(godot_gdnative_terminate_options *p_options)
{
    //printf("Enter: GD2C_gdnative_terminate\n");
    api10->godot_variant_destroy(&__nil);
    if (0 != Class_1__init_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_1__init_local_const[0]);
        api10->godot_variant_destroy(&Class_1__init_local_const[1]);
        api10->godot_variant_destroy(&Class_1__init_local_const[2]);
        api10->godot_variant_destroy(&Class_1__init_local_const[3]);
        api10->godot_variant_destroy(&Class_1__init_local_const[4]);
    }
}
void GDN_EXPORT GD2C_nativescript_init(void *p_handle)
{
    //printf("Enter: GD2C_nativescript_init\n");
    {
        //printf("  Register class: Class_1\n");
        godot_instance_create_func create = {NULL, NULL, NULL};
        create.create_func = Class_1_ctor;
        godot_instance_destroy_func destroy = {NULL, NULL, NULL};
        destroy.destroy_func = Class_1_dtor;
        nativescript10->godot_nativescript_register_class(p_handle, "Class_1", "Node2D", create, destroy);
    }
    {
        //printf("  Register method: Class_1__init_func\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_1__init_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "_init", attributes, method);
    }
    {
        //printf("  Register member: arr\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_1_set_arr;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_1_get_arr;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_1", "arr", &attributes, setter, getter);
    }
    Class_1_vtable_init();
    //printf("Exit: GD2C_nativescript_init\n");
}
