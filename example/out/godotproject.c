
            godot_variant Class_1__init(
                godot_object* p_instance,
                void* p_method_data,
                struct Class_1_struct_t* p_user_data,
                int p_num_args,
                godot_variant** p_args)
            {   
                godot_bool __flag;   
        
                godot_variant stack[1];
                                api10->godot_variant_new_nil(&stack[0]);
                __entry:
goto _0;
_0:
// END;
goto __exit;
__exit:
                    api10->godot_variant_destroy(&stack[0]);
                
            }
        
            godot_variant Class_1_diamond_dom(
                godot_object* p_instance,
                void* p_method_data,
                struct Class_1_struct_t* p_user_data,
                int p_num_args,
                godot_variant** p_args)
            {   
                godot_bool __flag;   
        
                if (0 == Class_1_diamond_dom_constants_initialized) {
                                {
                        uint8_t data[] = { 2,0,0,0,3,0,0,0 };
                        gd2c->godot_variant_decode(&Class_1_diamond_dom_constants[0], data, 8, 2, true);
                    }
                                    {
                        uint8_t data[] = { 2,0,0,0,0,0,0,0 };
                        gd2c->godot_variant_decode(&Class_1_diamond_dom_constants[1], data, 8, 2, true);
                    }
                                    {
                        uint8_t data[] = { 2,0,0,0,4,0,0,0 };
                        gd2c->godot_variant_decode(&Class_1_diamond_dom_constants[2], data, 8, 2, true);
                    }
                                    {
                        uint8_t data[] = { 2,0,0,0,1,0,0,0 };
                        gd2c->godot_variant_decode(&Class_1_diamond_dom_constants[3], data, 8, 2, true);
                    }
                                    {
                        uint8_t data[] = { 2,0,0,0,5,0,0,0 };
                        gd2c->godot_variant_decode(&Class_1_diamond_dom_constants[4], data, 8, 2, true);
                    }
                                    {
                        uint8_t data[] = { 2,0,0,0,2,0,0,0 };
                        gd2c->godot_variant_decode(&Class_1_diamond_dom_constants[5], data, 8, 2, true);
                    }
                
                    Class_1_diamond_dom_constants_initialized = 1;            
                }
            
                godot_variant stack[3];
                                api10->godot_variant_new_nil(&stack[0]);
                                    api10->godot_variant_new_nil(&stack[1]);
                                    api10->godot_variant_new_nil(&stack[2]);
                __entry:
// DEFINE 67108864;
// DEFINE 67108865;
// DEFINE 67108866;
// DEFINE 67108867;
// DEFINE 67108868;
// DEFINE 67108869;
// DEFINE 100663296;
goto _0;
_0:

                api10->godot_variant_new_copy(None, None);
            
                api11->godot_variant_evaluate(0, 
                    None, 
                    None, 
                    None, 
                    __flag);
            
                __flag = api10->godot_variant_as_bool(None);
                if (__flag) goto _56;
                goto _15;
            _15:
