#ifndef __GD2C_H__
#define __GD2C_H__

#include <assert.h>

typedef godot_variant (*method_wrapper_ptr_t)(godot_object *, void *, void *, int, godot_variant **);
typedef void (*method_ptr_t)();

typedef struct vtable_t {
    struct vtable_t *base;
    int type_id;
    int method_count;
    method_wrapper_ptr_t *wrappers;
    method_ptr_t *methods;
    godot_string *methods_by_name;
} vtable_t;

void vtable_init(vtable_t *vtable, vtable_t *base, int type_id, int method_count, method_wrapper_ptr_t *wrappers, method_ptr_t *methods, godot_string *methods_by_name) {
    vtable->base = base;
    vtable->type_id = type_id;
    vtable->method_count = method_count;
    vtable->wrappers = wrappers;
    vtable->methods = methods;
    vtable->methods_by_name = methods_by_name;
}

#define VTABLE_METHOD(INSTANCE, METHOD_INDEX, METHOD_NAME, METHOD, METHOD_WRAPPER) \
   INSTANCE.methods[METHOD_INDEX] = (method_ptr_t)METHOD; \
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

#endif