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
godot_variant Class_1_get_direction(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data)
{
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    godot_variant value;
    api10->godot_variant_new_copy(&value, &p_user_data->direction);
    return value;
}

void Class_1_set_direction(
    godot_object *p_instance,
    void *p_method_data,
    void *_p_user_data,
    godot_variant *p_value)
{
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    api10->godot_variant_new_copy(&p_user_data->direction, p_value);
}
godot_variant Class_1__physics_process_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    //printf("Enter: Class_1__physics_process_func\n");
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_1__physics_process_local_const_initialized)
    {
        {
            char data[] = {100, 111, 95, 97, 99, 116, 117, 97, 108, 95, 115, 116, 117, 102, 102};
            godot_string s;
            api10->godot_string_new(&s);
            api10->godot_string_parse_utf8_with_len(&s, data, 15);
            api10->godot_string_name_new(&Class_1__physics_process_global_names[0], &s);
            api10->godot_string_destroy(&s);
        }
        Class_1__physics_process_local_const_initialized = 1;
    }
    godot_variant st_83886081;
    goto _entry;
_entry:
    // <gd2c.bytecode.ParameterGDScriptOp object at 0x110b415f8>;
    api10->godot_variant_new_nil(&st_83886081);
    goto _0;
_0:
    goto _2;
_2:
{
    godot_variant *args[] = {p_args[0]};
    godot_variant call_result = p_user_data->__vtable->methods[2](p_instance, p_method_data, p_user_data, 1, args);
    api10->godot_variant_new_copy(&st_83886081, &call_result);
    api10->godot_variant_destroy(&call_result);
}
    goto _exit;
_exit:
    api10->godot_variant_destroy(&st_83886081);
    goto _cleanup;
_cleanup:
    //printf("Exit: Class_1__physics_process_func\n");
    return __return_value;
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
            uint8_t data[] = {2, 0, 0, 0, 3, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1__init_local_const[1], data, 8, &bytesRead, true);
            print_variant(&Class_1__init_local_const[1]);
        }
        Class_1__init_local_const_initialized = 1;
    }
    godot_variant st_83886080;
    goto _entry;
_entry:
    // DEFINE 67108864;
    // DEFINE 67108865;
    api10->godot_variant_new_nil(&st_83886080);
    goto _0;
_0:
    goto _2;
_2:
{
    int t = api10->godot_variant_as_int(&Class_1__init_local_const[1]);
    godot_variant_call_error err;
    godot_variant *args[] = {&Class_1__init_local_const[0]};
    gd2c10->variant_convert(&st_83886080, t, (const godot_variant **)args, 1, &err);
}
    api10->godot_variant_new_copy(&p_user_data->direction, &st_83886080);
    goto _exit;
_exit:
    api10->godot_variant_destroy(&st_83886080);
    goto _cleanup;
_cleanup:
    //printf("Exit: Class_1__init_func\n");
    return __return_value;
}
godot_variant Class_1_do_actual_stuff_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    //printf("Enter: Class_1_do_actual_stuff_func\n");
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    api10->godot_variant_new_nil(&__return_value);
    if (0 == Class_1_do_actual_stuff_local_const_initialized)
    {
        {
            uint8_t data[] = {2, 0, 0, 0, 100, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1_do_actual_stuff_local_const[0], data, 8, &bytesRead, true);
            print_variant(&Class_1_do_actual_stuff_local_const[0]);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 244, 1, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1_do_actual_stuff_local_const[1], data, 8, &bytesRead, true);
            print_variant(&Class_1_do_actual_stuff_local_const[1]);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 255, 255, 255, 255};
            int bytesRead;
            gd2c10->variant_decode(&Class_1_do_actual_stuff_local_const[2], data, 8, &bytesRead, true);
            print_variant(&Class_1_do_actual_stuff_local_const[2]);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 3, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1_do_actual_stuff_local_const[3], data, 8, &bytesRead, true);
            print_variant(&Class_1_do_actual_stuff_local_const[3]);
        }
        {
            uint8_t data[] = {2, 0, 0, 0, 1, 0, 0, 0};
            int bytesRead;
            gd2c10->variant_decode(&Class_1_do_actual_stuff_local_const[4], data, 8, &bytesRead, true);
            print_variant(&Class_1_do_actual_stuff_local_const[4]);
        }
        {
            char data[] = {112, 111, 115, 105, 116, 105, 111, 110};
            godot_string s;
            api10->godot_string_new(&s);
            api10->godot_string_parse_utf8_with_len(&s, data, 8);
            api10->godot_string_name_new(&Class_1_do_actual_stuff_global_names[0], &s);
            api10->godot_string_destroy(&s);
        }
        {
            char data[] = {120};
            godot_string s;
            api10->godot_string_new(&s);
            api10->godot_string_parse_utf8_with_len(&s, data, 1);
            api10->godot_string_name_new(&Class_1_do_actual_stuff_global_names[1], &s);
            api10->godot_string_destroy(&s);
        }
        {
            char data[] = {121};
            godot_string s;
            api10->godot_string_new(&s);
            api10->godot_string_parse_utf8_with_len(&s, data, 1);
            api10->godot_string_name_new(&Class_1_do_actual_stuff_global_names[2], &s);
            api10->godot_string_destroy(&s);
        }
        Class_1_do_actual_stuff_local_const_initialized = 1;
    }
    godot_variant st_83886081;
    godot_variant st_83886083;
    godot_variant st_83886084;
    goto _entry;
_entry:
    // <gd2c.bytecode.ParameterGDScriptOp object at 0x110c380f0>;
    // DEFINE 67108864;
    // DEFINE 67108865;
    // DEFINE 67108866;
    // DEFINE 67108867;
    // DEFINE 67108868;
    api10->godot_variant_new_nil(&st_83886081);
    api10->godot_variant_new_nil(&st_83886083);
    api10->godot_variant_new_nil(&st_83886084);
    goto _0;
_0:
    goto _2;
_2:
    gd2c10->object_get_property(&st_83886081, p_instance, &Class_1_do_actual_stuff_global_names[0]);
    gd2c10->object_get_property(&st_83886083, p_instance, &Class_1_do_actual_stuff_global_names[0]);
    gd2c10->variant_get_named(&st_83886083, &Class_1_do_actual_stuff_global_names[1], &st_83886083, &__flag);
    api11->godot_variant_evaluate(8, &Class_1_do_actual_stuff_local_const[0], p_args[0], &st_83886084, &__flag);
    api11->godot_variant_evaluate(8, &st_83886084, &p_user_data->direction, &st_83886084, &__flag);
    api11->godot_variant_evaluate(6, &st_83886083, &st_83886084, &st_83886083, &__flag);
    gd2c10->variant_set_named(&st_83886081, &Class_1_do_actual_stuff_global_names[1], &st_83886083, &__flag);
    gd2c10->object_set_property(p_instance, &Class_1_do_actual_stuff_global_names[0], &st_83886081);
    gd2c10->object_get_property(&st_83886081, p_instance, &Class_1_do_actual_stuff_global_names[0]);
    gd2c10->object_get_property(&st_83886083, p_instance, &Class_1_do_actual_stuff_global_names[0]);
    gd2c10->variant_get_named(&st_83886083, &Class_1_do_actual_stuff_global_names[2], &st_83886083, &__flag);
    api11->godot_variant_evaluate(8, &Class_1_do_actual_stuff_local_const[0], p_args[0], &st_83886084, &__flag);
    api11->godot_variant_evaluate(8, &st_83886084, &p_user_data->direction, &st_83886084, &__flag);
    api11->godot_variant_evaluate(6, &st_83886083, &st_83886084, &st_83886083, &__flag);
    gd2c10->variant_set_named(&st_83886081, &Class_1_do_actual_stuff_global_names[2], &st_83886083, &__flag);
    gd2c10->object_set_property(p_instance, &Class_1_do_actual_stuff_global_names[0], &st_83886081);
    gd2c10->object_get_property(&st_83886081, p_instance, &Class_1_do_actual_stuff_global_names[0]);
    gd2c10->variant_get_named(&st_83886081, &Class_1_do_actual_stuff_global_names[1], &st_83886081, &__flag);
    api11->godot_variant_evaluate(4, &st_83886081, &Class_1_do_actual_stuff_local_const[1], &st_83886081, &__flag);
    __flag = api10->godot_variant_as_bool(&st_83886081);
    if (__flag)
        goto _81;
    goto _94;
_81:
{
    int t = api10->godot_variant_as_int(&Class_1_do_actual_stuff_local_const[3]);
    godot_variant_call_error err;
    godot_variant *args[] = {&Class_1_do_actual_stuff_local_const[2]};
    gd2c10->variant_convert(&st_83886081, t, (const godot_variant **)args, 1, &err);
}
    api10->godot_variant_new_copy(&p_user_data->direction, &st_83886081);
    goto _93;
_93:
    goto _exit;
_exit:
    api10->godot_variant_destroy(&st_83886081);
    api10->godot_variant_destroy(&st_83886083);
    api10->godot_variant_destroy(&st_83886084);
    goto _cleanup;
_94:
    gd2c10->object_get_property(&st_83886081, p_instance, &Class_1_do_actual_stuff_global_names[0]);
    gd2c10->variant_get_named(&st_83886081, &Class_1_do_actual_stuff_global_names[1], &st_83886081, &__flag);
    api11->godot_variant_evaluate(2, &st_83886081, &Class_1_do_actual_stuff_local_const[0], &st_83886081, &__flag);
    __flag = api10->godot_variant_as_bool(&st_83886081);
    if (__flag)
        goto _109;
    goto _93;
_109:
{
    int t = api10->godot_variant_as_int(&Class_1_do_actual_stuff_local_const[3]);
    godot_variant_call_error err;
    godot_variant *args[] = {&Class_1_do_actual_stuff_local_const[4]};
    gd2c10->variant_convert(&st_83886081, t, (const godot_variant **)args, 1, &err);
}
    api10->godot_variant_new_copy(&p_user_data->direction, &st_83886081);
    goto _93;
_cleanup:
    //printf("Exit: Class_1_do_actual_stuff_func\n");
    return __return_value;
}
void Class_1_vtable_init()
{
    vtable_init(&Class_1_vtable, &vtable, 2, 3, (void *)0, Class_1_vtable_methods, Class_1_vtable_method_names);
    VTABLE_METHOD(Class_1_vtable, 0, "_physics_process", Class_1__physics_process_func, (void *)0);
    VTABLE_METHOD(Class_1_vtable, 1, "_init", Class_1__init_func, (void *)0);
    VTABLE_METHOD(Class_1_vtable, 2, "do_actual_stuff", Class_1_do_actual_stuff_func, (void *)0);
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
    }
    if (0 != Class_1_do_actual_stuff_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_1_do_actual_stuff_local_const[0]);
        api10->godot_variant_destroy(&Class_1_do_actual_stuff_local_const[1]);
        api10->godot_variant_destroy(&Class_1_do_actual_stuff_local_const[2]);
        api10->godot_variant_destroy(&Class_1_do_actual_stuff_local_const[3]);
        api10->godot_variant_destroy(&Class_1_do_actual_stuff_local_const[4]);
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
        //printf("  Register method: Class_1__physics_process_func\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_1__physics_process_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "_physics_process", attributes, method);
    }
    {
        //printf("  Register method: Class_1__init_func\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_1__init_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "_init", attributes, method);
    }
    {
        //printf("  Register method: Class_1_do_actual_stuff_func\n");
        godot_instance_method method = {NULL, NULL, NULL};
        method.method = &Class_1_do_actual_stuff_func;
        godot_method_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_method(p_handle, "Class_1", "do_actual_stuff", attributes, method);
    }
    {
        //printf("  Register member: direction\n");
        godot_property_set_func setter = {NULL, NULL, NULL};
        setter.set_func = &Class_1_set_direction;
        godot_property_get_func getter = {NULL, NULL, NULL};
        getter.get_func = &Class_1_get_direction;
        godot_property_attributes attributes = {GODOT_METHOD_RPC_MODE_DISABLED};
        nativescript10->godot_nativescript_register_property(p_handle, "Class_1", "direction", &attributes, setter, getter);
    }
    Class_1_vtable_init();
    //printf("Exit: GD2C_nativescript_init\n");
}
