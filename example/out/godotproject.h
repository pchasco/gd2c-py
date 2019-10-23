                #ifndef __GD2C_GODOTPROJECT__
                #define __GD2C_GODOTPROJECT__            
            
                #include "gd2c.h"
                    method_wrapper_ptr_t Class_1_vtable_wrappers[1];
        variant_method_ptr_t Class_1_vtable_methods[1];
        godot_string Class_1_vtable_method_names[1];
        struct vtable_t Class_1_vtable;
        struct Class_1_struct_t {
            union {
                struct class_base_t;
            };
    godot_variant disabled;
        };
    int Class_1_constants_initialized = 0;
godot_variant Class_1__init_local_const[1];
int Class_1__init_local_const_initialized = 0;
        method_wrapper_ptr_t Class_3_vtable_wrappers[2];
        variant_method_ptr_t Class_3_vtable_methods[2];
        godot_string Class_3_vtable_method_names[2];
        struct vtable_t Class_3_vtable;
        struct Class_3_struct_t {
            union {
                struct class_base_t;
            };
    godot_variant taken;
        };
    int Class_3_constants_initialized = 0;
godot_variant Class_3__init_local_const[1];
int Class_3__init_local_const_initialized = 0;
                                godot_string_name Class_3__on_coin_body_enter_string_names[2];
                                godot_string Class_3__on_coin_body_enter_strings[2];
                                godot_variant Class_3__on_coin_body_enter_local_const[4];
int Class_3__on_coin_body_enter_local_const_initialized = 0;
        method_wrapper_ptr_t Class_5_vtable_wrappers[3];
        variant_method_ptr_t Class_5_vtable_methods[3];
        godot_string Class_5_vtable_method_names[3];
        struct vtable_t Class_5_vtable;
        struct Class_5_struct_t {
            union {
                struct class_base_t;
            };
    godot_variant accel;
godot_variant deaccel;
godot_variant prev_advance;
godot_variant max_speed;
godot_variant rot_speed;
godot_variant dying;
godot_variant rot_dir;
        };
    int Class_5_constants_initialized = 0;
            godot_variant Class_5_constants[2];
        godot_variant Class_5__init_local_const[6];
int Class_5__init_local_const_initialized = 0;
                                godot_string_name Class_5__die_string_names[1];
                                godot_string Class_5__die_strings[1];
                                int Class_5__die_local_const_initialized = 0;
                                godot_string_name Class_5__integrate_forces_string_names[23];
                                godot_string Class_5__integrate_forces_strings[23];
                                godot_variant Class_5__integrate_forces_local_const[16];
int Class_5__integrate_forces_local_const_initialized = 0;
        method_wrapper_ptr_t Class_7_vtable_wrappers[3];
        variant_method_ptr_t Class_7_vtable_methods[3];
        godot_string Class_7_vtable_method_names[3];
        struct vtable_t Class_7_vtable;
        struct Class_7_struct_t {
            union {
                struct class_base_t;
            };
    godot_variant min_height;
godot_variant max_height;
godot_variant max_distance;
godot_variant min_distance;
godot_variant autoturn_ray_aperture;
godot_variant angle_v_adjust;
godot_variant autoturn_speed;
godot_variant collision_exception;
        };
    int Class_7_constants_initialized = 0;
                                godot_string_name Class_7__ready_string_names[5];
                                godot_string Class_7__ready_strings[5];
                                godot_variant Class_7__ready_local_const[1];
int Class_7__ready_local_const_initialized = 0;
                                godot_string_name Class_7__physics_process_string_names[17];
                                godot_string Class_7__physics_process_strings[17];
                                godot_variant Class_7__physics_process_local_const[4];
int Class_7__physics_process_local_const_initialized = 0;
godot_variant Class_7__init_local_const[7];
int Class_7__init_local_const_initialized = 0;
        method_wrapper_ptr_t Class_9_vtable_wrappers[4];
        variant_method_ptr_t Class_9_vtable_methods[4];
        godot_string Class_9_vtable_method_names[4];
        struct vtable_t Class_9_vtable;
        struct Class_9_struct_t {
            union {
                struct class_base_t;
            };
    godot_variant linear_velocity;
godot_variant accel;
godot_variant shoot_blend;
godot_variant facing_dir;
godot_variant prev_shoot;
godot_variant sharp_turn_threshold;
godot_variant jumping;
godot_variant turn_speed;
godot_variant movement_dir;
godot_variant max_speed;
godot_variant keep_jump_inertia;
godot_variant air_idle_deaccel;
godot_variant deaccel;
        };
    int Class_9_constants_initialized = 0;
            godot_variant Class_9_constants[6];
                                        godot_string_name Class_9__ready_string_names[2];
                                godot_string Class_9__ready_strings[2];
                                godot_variant Class_9__ready_local_const[2];
int Class_9__ready_local_const_initialized = 0;
                                godot_string_name Class_9__physics_process_string_names[30];
                                godot_string Class_9__physics_process_strings[30];
                                godot_variant Class_9__physics_process_local_const[28];
int Class_9__physics_process_local_const_initialized = 0;
godot_variant Class_9__init_local_const[10];
int Class_9__init_local_const_initialized = 0;
                                godot_string_name Class_9_adjust_facing_string_names[4];
                                godot_string Class_9_adjust_facing_strings[4];
                                godot_variant Class_9_adjust_facing_local_const[2];
int Class_9_adjust_facing_local_const_initialized = 0;
            godot_variant Class_1_get_disabled(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_1_set_disabled(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_3_get_taken(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_3_set_taken(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_5_get_accel(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_5_set_accel(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_5_get_deaccel(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_5_set_deaccel(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_5_get_prev_advance(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_5_set_prev_advance(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_5_get_max_speed(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_5_set_max_speed(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_5_get_rot_speed(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_5_set_rot_speed(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_5_get_dying(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_5_set_dying(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_5_get_rot_dir(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_5_set_rot_dir(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_7_get_min_height(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_7_set_min_height(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_7_get_max_height(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_7_set_max_height(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_7_get_max_distance(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_7_set_max_distance(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_7_get_min_distance(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_7_set_min_distance(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_7_get_autoturn_ray_aperture(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_7_set_autoturn_ray_aperture(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_7_get_angle_v_adjust(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_7_set_angle_v_adjust(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_7_get_autoturn_speed(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_7_set_autoturn_speed(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_7_get_collision_exception(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_7_set_collision_exception(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_9_get_linear_velocity(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_9_set_linear_velocity(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_9_get_accel(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_9_set_accel(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_9_get_shoot_blend(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_9_set_shoot_blend(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_9_get_facing_dir(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_9_set_facing_dir(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_9_get_prev_shoot(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_9_set_prev_shoot(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_9_get_sharp_turn_threshold(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_9_set_sharp_turn_threshold(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_9_get_jumping(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_9_set_jumping(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_9_get_turn_speed(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_9_set_turn_speed(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_9_get_movement_dir(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_9_set_movement_dir(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_9_get_max_speed(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_9_set_max_speed(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_9_get_keep_jump_inertia(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_9_set_keep_jump_inertia(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_9_get_air_idle_deaccel(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_9_set_air_idle_deaccel(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                    godot_variant Class_9_get_deaccel(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data
            );

            void Class_9_set_deaccel(
                godot_object *p_instance,
                void *p_method_data,
                void *_p_user_data,
                godot_variant *p_value
            );
                void *Class_1_ctor(godot_object *p_instance, void *p_method_data)
    ;
        void Class_1_dtor(godot_object *p_instance, void *p_method_data, void *_p_user_data)
    ;
        godot_variant Class_1__init_func(             godot_object* p_instance,             void* p_method_data,             void* _p_user_data,             int p_num_args,             godot_variant** p_args);
        void *Class_3_ctor(godot_object *p_instance, void *p_method_data)
    ;
        void Class_3_dtor(godot_object *p_instance, void *p_method_data, void *_p_user_data)
    ;
        godot_variant Class_3__init_func(             godot_object* p_instance,             void* p_method_data,             void* _p_user_data,             int p_num_args,             godot_variant** p_args);
        godot_variant Class_3__on_coin_body_enter_func(             godot_object* p_instance,             void* p_method_data,             void* _p_user_data,             int p_num_args,             godot_variant** p_args);
        void *Class_5_ctor(godot_object *p_instance, void *p_method_data)
    ;
        void Class_5_dtor(godot_object *p_instance, void *p_method_data, void *_p_user_data)
    ;
        godot_variant Class_5__init_func(             godot_object* p_instance,             void* p_method_data,             void* _p_user_data,             int p_num_args,             godot_variant** p_args);
        godot_variant Class_5__die_func(             godot_object* p_instance,             void* p_method_data,             void* _p_user_data,             int p_num_args,             godot_variant** p_args);
        godot_variant Class_5__integrate_forces_func(             godot_object* p_instance,             void* p_method_data,             void* _p_user_data,             int p_num_args,             godot_variant** p_args);
        void *Class_7_ctor(godot_object *p_instance, void *p_method_data)
    ;
        void Class_7_dtor(godot_object *p_instance, void *p_method_data, void *_p_user_data)
    ;
        godot_variant Class_7__ready_func(             godot_object* p_instance,             void* p_method_data,             void* _p_user_data,             int p_num_args,             godot_variant** p_args);
        godot_variant Class_7__physics_process_func(             godot_object* p_instance,             void* p_method_data,             void* _p_user_data,             int p_num_args,             godot_variant** p_args);
        godot_variant Class_7__init_func(             godot_object* p_instance,             void* p_method_data,             void* _p_user_data,             int p_num_args,             godot_variant** p_args);
        void *Class_9_ctor(godot_object *p_instance, void *p_method_data)
    ;
        void Class_9_dtor(godot_object *p_instance, void *p_method_data, void *_p_user_data)
    ;
        godot_variant Class_9__ready_func(             godot_object* p_instance,             void* p_method_data,             void* _p_user_data,             int p_num_args,             godot_variant** p_args);
        godot_variant Class_9__physics_process_func(             godot_object* p_instance,             void* p_method_data,             void* _p_user_data,             int p_num_args,             godot_variant** p_args);
        godot_variant Class_9__init_func(             godot_object* p_instance,             void* p_method_data,             void* _p_user_data,             int p_num_args,             godot_variant** p_args);
        godot_variant Class_9_adjust_facing_func(             godot_object* p_instance,             void* p_method_data,             void* _p_user_data,             int p_num_args,             godot_variant** p_args);
                #endif
            