#ifndef __GD2C_H__
#define __GD2C_H__

#include <assert.h>
#include <gdnative_api_struct.gen.h>

#include "stdio.h"

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

struct gd2c_api_1_0 {
	int major;
	int minor;

	void GDAPI (*test)(godot_variant *r_dest, godot_variant *p_in);
};

struct gd2c_api_1_0 *gd2c10;

void initialize_gd2capi() {
    printf("initalize_gd2capi\n");
    // Get API bootstrapper
    printf("%i\n", __LINE__);
    godot_class_constructor ctor = api10->godot_get_class_constructor("GD2CApi");
    printf("%i\n", __LINE__);
    godot_object *o = ctor();
    godot_variant v;
    printf("%i\n", __LINE__);
    api10->godot_variant_new_object(&v, o);

    // Get API handle
	godot_variant major;
    godot_variant minor;
    printf("%i\n", __LINE__);
    api10->godot_variant_new_int(&major, 1);
    printf("%i\n", __LINE__);
    api10->godot_variant_new_int(&minor, 0);
    godot_variant *args[] = { &major, &minor };
    godot_variant_call_error e;
    printf("%i\n", __LINE__);
    godot_string name = api10->godot_string_chars_to_utf8("get_api");
    printf("%i\n", __LINE__);
    api10->godot_print(&name);
    printf("%i\n", __LINE__);
    godot_variant handle = api10->godot_variant_call(&v, &name, (const godot_variant **)args, 2, &e);
    printf("%i\n", __LINE__);
    api10->godot_string_destroy(&name);
    printf("%i\n", __LINE__);
    api10->godot_variant_destroy(&v);
    printf("%i\n", __LINE__);
    //api10->godot_object_destroy(o);

    // Parse API handle
    printf("%i\n", __LINE__);
    godot_string splitter = api10->godot_string_chars_to_utf8(",");
    printf("%i\n", __LINE__);
    godot_string str = api10->godot_variant_as_string(&handle);    printf("%i\n", __LINE__);
    api10->godot_print(&str);
    printf("%i\n", __LINE__);
    godot_array parts = api10->godot_string_split(&str, &splitter);
    printf("%i\n", __LINE__);
    godot_int size = api10->godot_array_size(&parts);
    //assert size == 2;

    // Extract ptr size check and ptr
    printf("%i\n", __LINE__);
    godot_variant *vptrsize = api10->godot_array_operator_index(&parts, 0);
    printf("%i\n", __LINE__);
    godot_string sptrsize = api10->godot_variant_as_string(vptrsize);
    printf("%i\n", __LINE__);
    godot_variant *vptr = api10->godot_array_operator_index(&parts, 1);
    printf("%i\n", __LINE__);
    godot_string sptr = api10->godot_variant_as_string(vptr);

    printf("%i\n", __LINE__);
    int64_t ptrsize = api10->godot_string_to_int64(&sptrsize);
    printf("%i\n", __LINE__);
    int64_t ptr = api10->godot_string_to_int64(&sptr);
    //assert sizeof(void*) == ptrsize;

    gd2c10 = (struct gd2c_api_1_0 *)ptr;

    printf("%i\n", __LINE__);
    api10->godot_string_destroy(&sptrsize);
    printf("%i\n", __LINE__);
    api10->godot_string_destroy(&sptr);
    printf("%i\n", __LINE__);
    api10->godot_array_destroy(&parts);
    printf("%i\n", __LINE__);
    api10->godot_string_destroy(&str);
    printf("%i\n", __LINE__);
    api10->godot_string_destroy(&splitter);
}

/*
void variant_get_named(godot_variant *p_self, const godot_string *p_name, godot_variant *p_dest, godot_bool *r_error);
void variant_set_named(godot_variant *p_self, const godot_string *p_name, const godot_variant *p_value, godot_bool *r_error);
void variant_set(godot_variant *p_instance, const godot_variant *p_index, const godot_variant *p_value, godot_bool *r_error);
void variant_get(const godot_variant *p_instance, const godot_variant *p_index, godot_variant *p_dest, godot_bool *r_error);
godot_error variant_decode(godot_variant *r_variant, const uint8_t *p_buffer, int p_len, int *r_len, godot_bool p_allow_objects);
void resource_load(godot_variant *r_result, const godot_string *p_path);
godot_error variant_decode(godot_variant *r_variant, const uint8_t *p_buffer, int p_len, int *r_len, godot_bool p_allow_objects) {
    void *args[] = { r_variant, p_buffer, &p_len, r_len, &p_allow_objects };
    godot_error err;
    api10->godot_method_bind_ptrcall(variant_decode_mb, __gd2capi_object, args, &err);
    return err;
}
*/

#endif