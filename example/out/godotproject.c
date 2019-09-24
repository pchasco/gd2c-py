#include "gd2c.h"
#include "godotproject.h"

#include "stdio.h"

void print(const char *str) {
    godot_string gs = api10->godot_string_chars_to_utf8(str);
    api10->godot_print(&gs);
    api10->godot_string_destroy(&gs);
}

void *Class_1_ctor(godot_object *p_instance, void *p_method_data)
{
    printf("ctor\n");
    struct Class_1_struct_t *user_data = api10->godot_alloc(sizeof(struct Class_1_struct_t));
    user_data->__vtable = &Class_1_vtable;
    api10->godot_variant_new_object(&user_data->__self, p_instance);
    Class_1__init_func(p_instance, (void *)0, user_data, 0, (void *)0);
    return user_data;
}
void Class_1_dtor(godot_object *p_instance, void *p_method_data, void *_p_user_data)
{
    printf("dtor\n");
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    api10->godot_variant_destroy(&p_user_data->__self);
    api10->godot_free(p_user_data);
}
godot_variant Class_1__init_func(godot_object *p_instance, void *p_method_data, void *_p_user_data, int p_num_args, godot_variant **p_args)
{
    printf("_init\n");
    printf("%i\n", __LINE__);
    struct Class_1_struct_t *p_user_data = (struct Class_1_struct_t *)_p_user_data;
    godot_bool __flag;
    godot_variant_call_error __error;
    godot_variant __return_value;
    printf("%i\n", __LINE__);
    api10->godot_variant_new_nil(&__return_value);
    
    godot_variant v1;
    godot_variant v2;

    printf("%i\n", __LINE__);
    api10->godot_variant_new_int(&v1, 1);
    printf("%i\n", __LINE__);
    gd2c10->test(&v1, &v2);

    printf("%i\n", __LINE__);
    godot_string s = api10->godot_variant_as_string(&v2);

    printf("%i\n", __LINE__);
    api10->godot_print(&s);
    printf("%i\n", __LINE__);
    api10->godot_string_destroy(&s);
    printf("%i\n", __LINE__);
    api10->godot_variant_destroy(&v2);
    printf("%i\n", __LINE__);
    api10->godot_variant_destroy(&v1);

    printf("%i\n", __LINE__);
    return __return_value;
}


void Class_1_vtable_init()
{
    vtable_init(&Class_1_vtable, &vtable, 2, 1, (void *)0, Class_1_vtable_methods, Class_1_vtable_method_names);
    VTABLE_METHOD(Class_1_vtable, 0, "_init", Class_1__init_func, (void *)0);
}
void GDN_EXPORT GD2C_gdnative_init(godot_gdnative_init_options *p_options)
{
    printf("GD2C_gdnative_init\n");

    api10 = p_options->api_struct;

    const godot_gdnative_api_struct *extension = api10->next;
    while (extension)
    {
        if (extension->version.major == 1 && extension->version.minor == 1)
        {
            printf("Found api11\n");
            api11 = (const godot_gdnative_core_1_1_api_struct *)extension;

            break;
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
            printf("Found nativescript10\n");
            while (extension)
            {
                if (extension->version.major == 1 && extension->version.minor == 1)
                {
                    nativescript11 = (const godot_gdnative_ext_nativescript_1_1_api_struct *)extension;
                    printf("Found nativescript11\n");
                }
                extension = extension->next;
            }
        };
        break;

        default:
            break;
        }
    }

    print("api found");
    api10->godot_variant_new_nil(&__nil);
}
void GDN_EXPORT GD2C_gdnative_terminate(godot_gdnative_terminate_options *p_options)
{
    api10->godot_variant_destroy(&__nil);
    if (0 != Class_1_godot_array_get_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_1_godot_array_get_local_const[0]);
    }
    if (0 != Class_1_nested_loop_local_const_initialized)
    {
        api10->godot_variant_destroy(&Class_1_nested_loop_local_const[0]);
        api10->godot_variant_destroy(&Class_1_nested_loop_local_const[1]);
        api10->godot_variant_destroy(&Class_1_nested_loop_local_const[2]);
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

    initialize_gd2capi();
}
