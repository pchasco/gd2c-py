#ifndef __GD2C_H__
#define __GD2C_H__

#include <assert.h>
#include <gdnative_api_struct.gen.h>

const godot_gdnative_core_api_struct *api10 = (void *)0;
const godot_gdnative_core_1_1_api_struct *api11 = (void *)0;
const godot_gdnative_ext_nativescript_api_struct *nativescript10 = (void *)0;
const godot_gdnative_ext_nativescript_1_1_api_struct *nativescript11 = (void *)0;

typedef godot_variant (*method_wrapper_ptr_t)(godot_object *, void *, void *, int, godot_variant **);
typedef godot_variant (*variant_method_ptr_t)(godot_object *, void *, void *, int, godot_variant **);
typedef void (*method_ptr_t)();

typedef struct vtable_t {
    struct vtable_t *base;
    int type_id;
    int method_count;
    method_wrapper_ptr_t *wrappers;
    variant_method_ptr_t *methods;
    godot_string *methods_by_name;
} vtable_t;

void vtable_init(vtable_t *vtable, vtable_t *base, int type_id, int method_count, method_wrapper_ptr_t *wrappers, variant_method_ptr_t *methods, godot_string *methods_by_name) {
    vtable->base = base;
    vtable->type_id = type_id;
    vtable->method_count = method_count;
    vtable->wrappers = wrappers;
    vtable->methods = methods;
    vtable->methods_by_name = methods_by_name;
}

#define VTABLE_METHOD(INSTANCE, METHOD_INDEX, METHOD_NAME, METHOD, METHOD_WRAPPER) \
   INSTANCE.methods[METHOD_INDEX] = (variant_method_ptr_t)METHOD; \
   INSTANCE.wrappers[METHOD_INDEX] = (method_wrapper_ptr_t)METHOD_WRAPPER; \
   //INSTANCE.methods_by_name[METHOD_INDEX] = api->godot_string_chars_to_utf8(METHOD_NAME);
/*
* Root vtable for all classes
*/
vtable_t vtable;

void vtable_init_base() {
    vtable.base = NULL;
    vtable.type_id = 0;
    vtable.method_count = 0;
    vtable.wrappers = NULL;
    vtable.methods = NULL;
    vtable.methods_by_name = NULL;
}

method_wrapper_ptr_t vtable_get_method_by_name(vtable_t *p_self, godot_gdnative_core_api_struct *api, godot_string *name) {
    for (int i = 0; i < p_self->method_count; ++i) {
        if (0 == api->godot_string_operator_equal(name, &p_self->methods_by_name[i])) {
            return p_self->wrappers[i];
        }
    }

    assert(0);
    return (method_wrapper_ptr_t)(void*)0;
}

int vtable_instanceof(vtable_t *p_self, vtable_t *p_other) {
    vtable_t *v = p_self;
    while (v != NULL) {
        if (v == p_other) {
            return 1;
        }
        v = v->base;
    }
    return 0;
}

struct class_base_t {
    struct vtable_t *__vtable;
    godot_variant __self;
};

godot_variant __nil;

godot_object __gd2capi_object;
godot_method_bind variant_get_named_mb;
godot_method_bind variant_set_named_mb;
godot_method_bind object_get_property_mb;
godot_method_bind object_set_property_mb;
godot_method_bind variant_set_mb;
godot_method_bind variant_get_mb;
godot_method_bind variant_decode_mb;
godot_method_bind resource_load_mb;	

void initialize_gd2capi() {
    godot_class_constructor ctor = api10->godot_get_class_constructor("GD2CApi")
    __gd2capi_o = ctor();

    variant_get_named_mb = api10->godot_get_method_bind("GD2CApi", "variant_get_named");
    variant_set_named_mb = api10->godot_get_method_bind("GD2CApi", "variant_set_named")
    variant_set_mb = api10->godot_get_method_bind("GD2CApi", "variant_set");
    variant_get_mb = api10->godot_get_method_bind("GD2CApi", "variant_get");
    variant_decode_mb = api10->godot_get_method_bind("GD2CApi", "variant_decode");
    resource_load_mb = api10->godot_get_method_bind("GD2CApi", "resource_load");	    
}

void variant_get_named(godot_variant *p_self, const godot_string *p_name, godot_variant *p_dest, godot_bool *r_error);
void variant_set_named(godot_variant *p_self, const godot_string *p_name, const godot_variant *p_value, godot_bool *r_error);
void variant_set(godot_variant *p_instance, const godot_variant *p_index, const godot_variant *p_value, godot_bool *r_error);
void variant_get(const godot_variant *p_instance, const godot_variant *p_index, godot_variant *p_dest, godot_bool *r_error);
godot_error variant_decode(godot_variant *r_variant, const uint8_t *p_buffer, int p_len, int *r_len, godot_bool p_allow_objects);
void resource_load(godot_variant *r_result, const godot_string *p_path);

void variant_get_named(const godot_variant *p_self, const godot_string *p_name, godot_variant *p_dest, godot_bool *r_error) {
    void *args[] = { p_self, p_name, p_dest, r_error };
    api10->godot_method_bind_ptrcall(variant_get_named_mb, __gd2capi_object, args, (void *)0);
}

void variant_set_named(const godot_variant *p_self, const godot_string *p_name, godot_variant *p_dest, godot_bool *r_error) {
    void *args[] = { p_self, p_dest, p_value, r_error };
    api10->godot_method_bind_ptrcall(variant_set_named_mb, __gd2capi_object, args, (void *)0);
}

void variant_get(const godot_variant *p_self, const godot_variant *p_index, godot_variant *p_dest, godot_bool *r_error) {
    void *args[] = { p_self, p_index, p_dest, r_error };
    api10->godot_method_bind_ptrcall(variant_get_named_mb, __gd2capi_object, args, (void *)0);
}

void variant_set(const godot_variant *p_self, const godot_variant *p_index, godot_variant *p_value, godot_bool *r_error) {
    void *args[] = { p_self, p_index, p_value, r_error };
    api10->godot_method_bind_ptrcall(variant_set_named_mb, __gd2capi_object, args, (void *)0);
}

godot_error variant_decode(godot_variant *r_variant, const uint8_t *p_buffer, int p_len, int *r_len, godot_bool p_allow_objects) {
    void *args[] = { r_variant, p_buffer, &p_len, r_len, &p_allow_objects };
    godot_error err;
    api10->godot_method_bind_ptrcall(variant_decode_mb, __gd2capi_object, args, &err);
    return err;
}

#endif