from __future__ import annotations
from typing import TYPE_CHECKING, IO

if TYPE_CHECKING:
    from gd2c.targets.gdnative import ClassContext

class ClassCodegen:
    def __init__(self, class_context: ClassContext):
        self.class_context = class_context

    def transpile(self, writer: IO):
        self._transpile_vtable(writer)

    def _transpile_vtable(self, writer: IO):
        writer.write(f"""
            void {self.class_context.vtable_init_function_identifier}() {{
                vtable_init(&{self.class_context.vtable_identifier}, 
                            &{self.class_context.base_vtable_identifier}, 
                            {self.class_context.cls.type_id}, 
                            {len(self.class_context.vtable_entries)},
                            {self.class_context.vtable_wrappers_identifier},
                            {self.class_context.vtable_wrappers_identifier}, 
                            (void*)0);
        """)

        for i, entry in enumerate(self.class_context.vtable_entries):
            writer.write(f"""
                VTABLE_METHOD({self.class_context.vtable_identifier}, 
                    {i},
                    "{entry.func_context.func.name}",
                    {entry.func_context.function_identifier},
                    (void*)0,
                    (void*)0);
            """)

        writer.write("""
            }
        """)

    def _transpile_ctor(self, writer: IO):
        pass

    def _transpile_dtor(self, writer: IO):
        pass
    
    def _transpile_body(self, writer: IO):
        pass