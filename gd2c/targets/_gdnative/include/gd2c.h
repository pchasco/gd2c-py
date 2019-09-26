#ifndef __GD2C_H__
#define __GD2C_H__

#include <assert.h>
#include <gdnative_api_struct.gen.h>

#include "stdio.h"
#include "gd2c_api_struct.h"

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

struct gd2c_api_1_0 *gd2c10;

void initialize_gd2capi() {
    // Get API bootstrapper
    godot_class_constructor ctor = api10->godot_get_class_constructor("GD2CApi");
    godot_object *o = ctor();
    godot_variant v;
    api10->godot_variant_new_object(&v, o);

    // Get API handle
	godot_variant major;
    godot_variant minor;
    api10->godot_variant_new_int(&major, 1);
    api10->godot_variant_new_int(&minor, 0);
    godot_variant *args[] = { &major, &minor };
    godot_variant_call_error e;
    godot_string name = api10->godot_string_chars_to_utf8("get_api");
    godot_variant handle = api10->godot_variant_call(&v, &name, (const godot_variant **)args, 2, &e);
    api10->godot_string_destroy(&name);
    api10->godot_variant_destroy(&v);
    //api10->godot_object_destroy(o);

    // Parse API handle
    godot_string splitter = api10->godot_string_chars_to_utf8(",");
    godot_string str = api10->godot_variant_as_string(&handle);
    godot_array parts = api10->godot_string_split(&str, &splitter);
    godot_int size = api10->godot_array_size(&parts);
    //assert size == 2;

    // Extract ptr size check and ptr
    godot_variant *vptrsize = api10->godot_array_operator_index(&parts, 0);
    godot_string sptrsize = api10->godot_variant_as_string(vptrsize);
    godot_variant *vptr = api10->godot_array_operator_index(&parts, 1);
    godot_string sptr = api10->godot_variant_as_string(vptr);

    int64_t ptrsize = api10->godot_string_to_int64(&sptrsize);
    int64_t ptr = api10->godot_string_to_int64(&sptr);
    //assert sizeof(void*) == ptrsize;

    gd2c10 = (struct gd2c_api_1_0 *)ptr;
    printf("gd2c10 initialized\n");

    api10->godot_string_destroy(&sptrsize);
    api10->godot_string_destroy(&sptr);
    api10->godot_array_destroy(&parts);
    api10->godot_string_destroy(&str);
    api10->godot_string_destroy(&splitter);
}

#endif