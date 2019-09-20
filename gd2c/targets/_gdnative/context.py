from __future__ import annotations
from typing import Union, List, Set, FrozenSet, Optional, Dict, IO, TYPE_CHECKING
from gd2c.gdscriptclass import GDScriptClass, GDScriptFunction, GDScriptMember
from gd2c.address import *

class Variable:
    class_context: 'ClassContext'
    func_context: 'FunctionContext'
    address: GDScriptAddress
    var_type: int
    cls: GDScriptClass
    _identifier: str
    
    def __init__(self, class_context: 'ClassContext', func_context: 'FunctionContext', address: int):
        self.class_context = class_context
        self.func_context = func_context
        self.address = GDScriptAddress(address)

        self._identifier = ""

        if self.address.mode == ADDRESS_MODE_STACK or self.address.mode == ADDRESS_MODE_STACKVARIABLE:
            if self.address.offset >= func_context.func.len_parameters:
                self.identifier = f"st_{self.address.address}"

    def define(self) -> str:
        assert self.identifier
        return f"godot_variant {self.identifier};\n"    

    def needs_definition(self) -> bool:
        return self.address.mode in (ADDRESS_MODE_STACK, ADDRESS_MODE_STACKVARIABLE) \
            and self.address.offset >= self.func_context.func.len_parameters

    def value(self) -> str:
        if self.address.mode == ADDRESS_MODE_SELF:
            return f"p_user_data->__self"
        elif self.address.mode == ADDRESS_MODE_CLASS:
            pass
        elif self.address.mode == ADDRESS_MODE_MEMBER:
            pass
        elif self.address.mode == ADDRESS_MODE_CLASSCONSTANT:
            pass
        elif self.address.mode == ADDRESS_MODE_LOCALCONSTANT:
            return f"{self.func_context.local_constants_array_identifier}[{self.address.offset}]"
        elif self.address.mode == ADDRESS_MODE_STACK or self.address.mode == ADDRESS_MODE_STACKVARIABLE:
            if self.address.offset < self.func_context.func.len_parameters:
                return f"*p_args[{self.address.offset}]"
            else:
                return self.identifier
        elif self.address.mode == ADDRESS_MODE_GLOBAL:
            pass
        elif self.address.mode == ADDRESS_MODE_NAMEDGLOBAL:
            pass
        elif self.address.mode == ADDRESS_MODE_NIL:
            return "__nil"
        elif self.address.mode == ADDRESS_MODE_PARAMETER:
            pass
        elif self.address.mode == ADDRESS_MODE_TEMPORARY:
            pass
        elif self.address.mode == ADDRESS_MODE_SETTERVALUEPARAMETER:
            pass

        return f"{AddressModePrefix[self.address.mode]}_{self.address.address}"

    def address_of(self) -> str:
        if self.address.mode == ADDRESS_MODE_SELF:
            return f"&p_user_data->self"
        elif self.address.mode == ADDRESS_MODE_CLASS:
            pass
        elif self.address.mode == ADDRESS_MODE_MEMBER:
            pass
        elif self.address.mode == ADDRESS_MODE_CLASSCONSTANT:
            pass
        elif self.address.mode == ADDRESS_MODE_LOCALCONSTANT:
            return f"&{self.func_context.local_constants_array_identifier}[{self.address.offset}]"
        elif self.address.mode == ADDRESS_MODE_STACK or self.address.mode == ADDRESS_MODE_STACKVARIABLE:
            if self.address.offset < self.func_context.func.len_parameters:
                return f"p_args[{self.address.offset}]"
            else:
                return f"&{self.identifier}"
        elif self.address.mode == ADDRESS_MODE_GLOBAL:
            pass
        elif self.address.mode == ADDRESS_MODE_NAMEDGLOBAL:
            pass
        elif self.address.mode == ADDRESS_MODE_NIL:
            return "&__nil"
        elif self.address.mode == ADDRESS_MODE_PARAMETER:
            pass
        elif self.address.mode == ADDRESS_MODE_TEMPORARY:
            pass
        elif self.address.mode == ADDRESS_MODE_SETTERVALUEPARAMETER:
            pass

        return f"&{AddressModePrefix[self.address.mode]}_{self.address.address}"


class FunctionContext:
    func: GDScriptFunction
    class_context: ClassContext
    variables: Dict[int, Variable]
    local_constants_array_identifier: str
    global_names_identifier: str

    def __init__(self, func: GDScriptFunction, class_context: ClassContext):
        assert func
        assert func.cfg
        assert class_context

        self.func = func
        self.class_context = class_context    
        self.function_identifier =  f"{self.class_context.cls.name}_{self.func.name}_func"
        self.local_constants_array_identifier = f"{self.class_context.cls.name}_{self.func.name}_local_const"
        self.initialized_local_constants_array_identifier = f"{self.class_context.cls.name}_{self.func.name}_local_const_initialized"
        self.global_names_identifier = f"{self.class_context.cls.name}_{self.func.name}_global_names"
        self.init_variables()

    def init_variables(self) -> None:
        assert self.func
        assert self.func.cfg

        self.func.cfg.live_variable_analysis()

        all_addr: Set[int] = set()

        for block in self.func.cfg.nodes():
            all_addr.update(block.defs)
            all_addr.update(block.uses)

        variables: Dict[int, Variable] = {}
        for addr in all_addr:
            variables[addr] = Variable(self.class_context, self, addr)

        self.variables = variables
        

class VtableEntry:
    func_context: FunctionContext
    index: int

    def __init__(self, index: int, func: FunctionContext):
        self.index = index
        self.func_context = func

class MemberContext:
    member: GDScriptMember
    member_identifier: str
    path: str
    setter_identifier: str
    getter_identifier: str

    def __init__(self, cls: GDScriptClass, member: GDScriptMember):
        self.member = member
        self.member_identifier = f"{member.name}"
        self.path = f"{member.name}"
        self.setter_identifier = f"{cls.name}_set_{member.name}"
        self.getter_identifier = f"{cls.name}_get_{member.name}"

class ClassContext:
    cls: GDScriptClass
    base_context: Optional[ClassContext]
    function_contexts: Dict[str, FunctionContext]
    member_contexts: Dict[str, MemberContext]
    vtable_entries: List[VtableEntry]
    struct_tag: str
    vtable_wrappers_identifier: str
    vtable_methods_identifier: str
    vtable_method_names_identifier: str
    vable_identifier: str
    base_vtable_identifier: str
    vtable_init_function_identifier: str
    constants_initialized_identifier: str
    constants_array_identifier: str
    ctor_identifier: str
    dtor_identifier: str

    def __init__(self, cls: GDScriptClass, base_context: Optional[ClassContext]):
        self.cls = cls
        self.base_context = base_context
        self.function_contexts = {}
        self.member_contexts = {}
        self.vtable_entries = []
        self.struct_tag = f"{cls.name}_struct_t"
        self.vtable_wrappers_identifier = f"{cls.name}_vtable_wrappers"
        self.vtable_methods_identifier = f"{cls.name}_vtable_methods"
        self.vtable_method_names_identifier = f"{cls.name}_vtable_method_names"
        self.vtable_identifier = f"{cls.name}_vtable"
        self.base_vtable_identifier = "vtable"
        self.vtable_init_function_identifier = f"{cls.name}_vtable_init"
        self.constants_initialized_identifier = f"{cls.name}_constants_initialized"
        self.constants_array_identifier = f"{cls.name}_constants"
        self.ctor_identifier = f"{cls.name}_ctor"
        self.dtor_identifier = f"{cls.name}_dtor"

        self.initialize_members()
        self.initialize_vtable()

    def initialize_members(self):
        own_members = self.cls.own_members()
        own_member_names = [m.name for m in own_members]
        for member in self.cls.members():
            if member.name in own_member_names:
                self.member_contexts[member.name] = MemberContext(self.cls, member)
            elif self.base_context:
                self.member_contexts[member.name] = self.base_context.member_contexts[member.name]
            else:
                raise Exception("internal error: base_context is None")

    def initialize_vtable(self):
        self.function_contexts = dict([(f.name, FunctionContext(f, self)) for f in self.cls.functions()])

        self.vtable_entries = []
        new_funcs: List[FunctionContext] = []
        if self.cls.base:
            assert self.base_context
            self.base_vtable_identifier = self.base_context.vtable_identifier
            self.vtable_entries.extend(self.base_context.vtable_entries)
            for func_context in self.function_contexts.values():
                found = False
                for i, entry in enumerate(self.vtable_entries):
                    if entry.func_context.func.name == func_context.func.name:
                        self.vtable_entries[i] = VtableEntry(entry.index, func_context)
                        found = True
                        break

                if not found:
                    new_funcs.append(func_context)
        else:
            new_funcs.extend(self.function_contexts.values())

        for func_context in new_funcs:
            self.vtable_entries.append(VtableEntry(len(self.vtable_entries), func_context))

    def get_member_vtable_entry(self, method_name: str) -> Union[VtableEntry, None]:
        for entry in self.vtable_entries:
            if entry.func_context.func.name == method_name:
                return entry
        
        return None

    def get_function_context(self, what: Union[str, GDScriptFunction]) -> FunctionContext:
        if isinstance(what, str):
            return self.function_contexts[what]

        if isinstance(what, GDScriptFunction):
            for func_context in self.function_contexts.values():
                if func_context.func == what:
                    return func_context

        raise Exception("function not found")

    def get_member_context(self, what: Union[str, int]) -> MemberContext:
        if isinstance(what, str):
            return self.member_contexts[what]

        if isinstance(what, int):
            for member_context in self.member_contexts.values():
                if member_context.member.index == what:
                    return member_context

        raise Exception("member not found")
