
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
0:
END;
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
            
                godot_variant stack[4];
                                api10->godot_variant_new_nil(&stack[0]);
                                    api10->godot_variant_new_nil(&stack[1]);
                                    api10->godot_variant_new_nil(&stack[2]);
                                    api10->godot_variant_new_nil(&stack[3]);
                __entry:
DEFINE 67108864;
DEFINE 67108865;
DEFINE 67108866;
DEFINE 67108867;
DEFINE 67108868;
DEFINE 67108869;
DEFINE 100663296;
0:
LINE 6;
ASSIGN 100663297 = 67108864;
LINE 7;
OPER 83886082 = 100663297 == 67108864;
JUMPIF 83886082? 56 : 15;
56:
LINE 16;
LINE 15;
JUMPIF 67108865? 68 : 63;
63:
LINE 17;
ASSIGN 100663296 = 67108865;
JUMP 68;
68:
LINE 18;
OPER 83886082 = 100663297 == 67108868;
JUMPIF 83886082? 85 : 78;
78:
LINE 19;
ASSIGN 100663296 = 67108869;
JUMP 92;
92:
LINE 22;
ASSIGN 100663296 = 67108865;
JUMP 97;
97:
LINE 23;
ASSIGN 100663296 = 67108865;
LINE 24;
LINE 25;
LINE 26;
END;
__exit:
85:
LINE 21;
LINE 20;
ASSIGN 100663297 = 67108868;
JUMP 92;
15:
LINE 8;
JUMPIF 67108865? 25 : 20;
20:
LINE 9;
ASSIGN 100663296 = 67108865;
JUMP 25;
25:
LINE 10;
OPER 83886082 = 100663297 == 67108866;
JUMPIF 83886082? 42 : 35;
42:
LINE 13;
LINE 12;
ASSIGN 100663297 = 67108868;
JUMP 49;
49:
LINE 14;
ASSIGN 100663296 = 67108869;
JUMP 97;
35:
LINE 11;
ASSIGN 100663296 = 67108867;
JUMP 49;
                    api10->godot_variant_destroy(&stack[0]);
                                    api10->godot_variant_destroy(&stack[1]);
                                    api10->godot_variant_destroy(&stack[2]);
                                    api10->godot_variant_destroy(&stack[3]);
                
            }
        
            godot_variant Class_3__init(
                godot_object* p_instance,
                void* p_method_data,
                struct Class_3_struct_t* p_user_data,
                int p_num_args,
                godot_variant** p_args)
            {   
                godot_bool __flag;   
        
                godot_variant stack[1];
                                api10->godot_variant_new_nil(&stack[0]);
                __entry:
0:
CALLBASE 83886080 = self.0(...);
END;
__exit:
                    api10->godot_variant_destroy(&stack[0]);
                
            }
        
            godot_variant Class_3_method1(
                godot_object* p_instance,
                void* p_method_data,
                struct Class_3_struct_t* p_user_data,
                int p_num_args,
                godot_variant** p_args)
            {   
                godot_bool __flag;   
        
                if (0 == Class_3_method1_constants_initialized) {
                                {
                        uint8_t data[] = { 3,0,0,0,0,0,0,0 };
                        gd2c->godot_variant_decode(&Class_3_method1_constants[0], data, 8, 3, true);
                    }
                
                    Class_3_method1_constants_initialized = 1;            
                }
            
                godot_variant stack[3];
                                api10->godot_variant_new_nil(&stack[0]);
                                    api10->godot_variant_new_nil(&stack[1]);
                                    api10->godot_variant_new_nil(&stack[2]);
                __entry:
DEFINE 67108864;
DEFINE 100663296;
DEFINE 100663297;
0:
LINE 4;
RETURN 67108864;
__exit:
                    api10->godot_variant_destroy(&stack[0]);
                                    api10->godot_variant_destroy(&stack[1]);
                                    api10->godot_variant_destroy(&stack[2]);
                
            }
        
            godot_variant Class_3_method2(
                godot_object* p_instance,
                void* p_method_data,
                struct Class_3_struct_t* p_user_data,
                int p_num_args,
                godot_variant** p_args)
            {   
                godot_bool __flag;   
        
                godot_variant stack[1];
                                api10->godot_variant_new_nil(&stack[0]);
                __entry:
0:
LINE 7;
LINE 8;
END;
__exit:
                    api10->godot_variant_destroy(&stack[0]);
                
            }
        