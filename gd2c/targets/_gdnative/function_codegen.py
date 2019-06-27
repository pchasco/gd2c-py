from __future__ import annotations
from typing import TYPE_CHECKING, IO

if TYPE_CHECKING:
    from gd2c.targets.gdnative import FunctionContext

class FunctionCodegen:
    def __init__(self, function_context: FunctionContext):
        self.function_context = function_context
    
    def transpile(self, file: IO):
        file.write(f"""
            godot_variant {self.function_context.function_identifier}(
                godot_object* p_instance,
                void* p_method_data,
                struct {self.function_context.class_context.struct_tag}* p_user_data,
                int p_num_args,
                godot_variant** p_args)
            {{      
        """)

        

        file.write("""
            }
        """)

    
