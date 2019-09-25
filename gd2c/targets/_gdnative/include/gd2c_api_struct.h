#ifndef __GD2C_API_STRUCT__
#define __GD2C_API_STRUCT__

#include <gdnative_api_struct.gen.h>

// This struct must be identical to the that compiled into godot engine
struct gd2c_api_1_0 {
	int major;
	int minor;

	void GDAPI (*variant_get_named)(const godot_variant *p_self, const godot_string *p_name, godot_variant *p_dest, godot_bool *r_error);
	void GDAPI (*variant_set_named)(godot_variant *p_self, const godot_string *p_name, const godot_variant *p_value, godot_bool *r_error);
	godot_error GDAPI (*variant_decode)(godot_variant *r_variant, const uint8_t *p_buffer, int p_len, int *r_len, godot_bool p_allow_objects);
	void GDAPI (*resource_load)(godot_variant *r_result, const godot_string *p_path);
};

#endif