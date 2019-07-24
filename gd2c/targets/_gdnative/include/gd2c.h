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


struct gd2c_api {
    void GDAPI (*godot_variant_from_chars)(godot_variant *dest, const char *src);
    int GDAPI (*godot_variant_len)(const godot_variant *src);
    void GDAPI (*godot_print)(int arg_count, const godot_variant **args);
    void GDAPI (*godot_variant_decode)(godot_variant *dest, const uint8_t *data, int length, int variant_type, godot_bool unsure);
};

struct gd2c_api __gd2c;
struct gd2c_api *gd2c = &__gd2c;

godot_variant __nil;

#endif