from __future__ import annotations
from typing import TYPE_CHECKING, Union, Optional, List, Dict, Set, Iterable, Tuple
from gd2c.variant import VariantType
from gd2c.bytecode import GDScriptOp
import re

if TYPE_CHECKING:
    from controlflow import ControlFlowGraph

class GDScriptGlobal:
    def __init__(self, index: int, name: str, original_name: str, vtype: int, kind_code: int, value: str, source: str):
        self.index = index
        self.original_name = original_name
        self.vtype = VariantType.get(vtype)
        self.kind_code = kind_code
        self.value = value
        self.source = source

class GDScriptFunctionConstant:
    def __init__(self, index: int, vtype: Union[VariantType, str, int], data: bytes, declaration: str):
        self.index = index
        self.vtype = VariantType.get(vtype)
        self.data = data
        self.declaration = declaration

class GDScriptClassConstant:
    def __init__(self, name: str, vtype: Union[VariantType, str, int], data: bytes, declaration: str):
        self.name = name
        self.vtype = VariantType.get(vtype)
        self.data = data
        self.declaration = declaration

class GDScriptMember:
    def __init__(self, name: str, index: int, vtype: Union[VariantType, str, int]):
        self.is_inherited = False
        self.name = name
        self.index = index
        self.vtype = VariantType.get(vtype)

class GDScriptFunctionParameter:
    name: str
    vtype: Union[VariantType, int]
    index: int
    is_assigned: Union[bool, None]

    def __init__(self, name: str, vtype: Union[VariantType, int], index: int):
        self.name = name        
        self.vtype = VariantType.get(vtype)
        self.index = index
        self.is_assigned = False

class GDScriptFunction:
    cfg: Optional[ControlFlowGraph]

    TYPE_METHOD = 0
    
    def __init__(self, name: str, function_type: int):
        self.name = name
        self.function_type = function_type
        self.default_arguments_jump_table: List[int] = []
        self.stack_size = 0
        self.return_vtype = VariantType.NIL
        self._parameters: Dict[int, GDScriptFunctionParameter] = {}
        self._constants: Dict[int, GDScriptFunctionConstant] = {}
        self._ops: List[Tuple[int, GDScriptOp]] = []
        self.global_names: List[str] = []
        self.cfg = None
        self._mutates: Set = set([])

    @property
    def len_stack_array(self) -> int:
        return self.stack_size - len(self._parameters)

    def parameters(self) -> Iterable[GDScriptFunctionParameter]:
        for param in self._parameters.values():
            yield param

    def parameter(self, what: Union[int, str]):
        if isinstance(what, int):
            return self._parameters[what]

        if isinstance(what, str):
            for parameter in self._parameters.values():
                if parameter.name == what:
                    return parameter
        
        raise Exception("parameter not found")

    @property
    def len_parameters(self) -> int:
        return len(self._parameters)

    def add_parameter(self, param: GDScriptFunctionParameter):
        self._parameters[param.index] = param

    def constants(self) -> Iterable[GDScriptFunctionConstant]:
        for const in self._constants.values():
            yield const

    @property
    def len_constants(self):
        return len(self._constants)

    def add_constant(self, const: GDScriptFunctionConstant):
        self._constants[const.index] = const

    def ops(self) -> Iterable[Tuple[int, GDScriptOp]]:
        for tup in self._ops:
            yield tup

    def add_op(self, addr: int, op: GDScriptOp):
        self._ops.append((addr, op))

    def pretty_print(self, print_bytecode=True):
        print(f"Function: {self.name}")
        print(f"  Return type: {self.return_vtype}")
        print(f"  Stack size: {self.stack_size}")
        print(f"  Parameters:")
        if any(self.parameters()):
            for p in sorted(self.parameters(), key=lambda v: v.index):
                is_assigned = 'Not determined' if p.is_assigned is None else p.is_assigned
                print(f"    {str(p.index).ljust(3)}: {p.name}: {p.vtype}")
                print(f"        is_assigned: {is_assigned}")
        else:
            print(f"    NONE")
        
        print(f"  Default arguments jump table:")
        if any(self.default_arguments_jump_table):
            for d in self.default_arguments_jump_table:
                print(f"    {d}")
        else:
            print(f"    NONE")
        
        print(f"  Constants:")
        if any(self.constants()):
            for const in sorted(self.constants(), key=lambda v: v.index):
                print(f"    {str(const.index).ljust(3)}: {const.declaration}")
        else:
            print(f"    NONE")

        print(f"  Global names:")
        if any(self.global_names):
            for name in self.global_names:
                print(f"    {str(name).ljust(3)}: {name}")
        else:
            print(f"    NONE")

        if print_bytecode:
            print(f"  Ops:")
            for ip, op in self.ops():
                print(f"{str(ip).rjust(8)}: {str(op)}")  

        print(f"")      

class GDScriptClass:
    def __init__(self, resource_path: str, name: str, type_id: int):
        self._built_in_type: Optional[str] = None

        self._resource_path = re.sub(r'\.gd\.json', '', resource_path, flags=re.IGNORECASE)
        self._base_resource_path: Optional[str] = None
        self._base: Optional[GDScriptClass] = None
        self._type_id = type_id
        self._name = name
        self._constants: Dict[str, GDScriptClassConstant] = {}
        self._members: Dict[str, GDScriptMember] = {}
        self._signals: Set[str] = set()
        self._functions: Dict[str, GDScriptFunction] = {}
        self._globals: Dict[int, GDScriptGlobal] = {}
        self._ctor: Optional[GDScriptFunction] = None
        self._dtor: Optional[GDScriptFunction] = None

    @property
    def resource_path(self) -> str:
        return self._resource_path

    @property
    def type_id(self) -> int:
        return self._type_id

    @property
    def name(self) -> str:
        return self._name

    @property
    def built_in_type(self):
        return self._built_in_type
    @built_in_type.setter
    def built_in_type(self, value: str):
        self._built_in_type = value

    @property
    def base_resource_path(self) -> Optional[str]:
        return self._base_resource_path
    @base_resource_path.setter
    def base_resource_path(self, value: str):
        self._base_resource_path = value

    @property
    def base(self) -> Optional[GDScriptClass]:
        return self._base
    @base.setter
    def base(self, value: Union[GDScriptClass, None]):
        self._base = value
        if value:
            self._base_resource_path = value.resource_path
        else:
            self._base_resource_path = None

    def add_global(self, glob: GDScriptGlobal):
        self._globals[glob.index] = glob
    
    @property
    def len_globals(self) -> int:
        return len(self._globals)

    def globals(self) -> Iterable[GDScriptGlobal]:
        for glob in self._globals.values():
            yield glob

    def add_function(self, func: GDScriptFunction):
        self._functions[func.name] = func

    def function(self, name: str) -> Optional[GDScriptFunction]:
        return self._functions.get(name, None)

    def functions(self) -> Iterable[GDScriptFunction]:
        for func in self._functions.values():
            yield func

    @property
    def len_functions(self) -> int:
        return len(self._functions)

    def add_constant(self, const: GDScriptClassConstant):
        self._constants[const.name] = const

    def constant(self, name: str) -> GDScriptClassConstant:
        return self._constants[name]

    def constants(self) -> Iterable[GDScriptClassConstant]:
        for const in self._constants.values():
            yield const

    @property
    def len_constants(self) -> int:
        return len(self._constants)

    def add_member(self, member: GDScriptMember):
        self._members[member.name] = member

    def member(self, name: str) -> GDScriptMember:
        return self._members[name]

    def members(self) -> Iterable[GDScriptMember]:
        for member in self._members.values():
            yield member

    def has_member(self, what: str) -> bool:
        if isinstance(what, str):
            return what in self._members

        raise Exception("what must be str")

    @property
    def len_members(self) -> int:
        return len(self._members)
    
    def add_signal(self, signal: str):
        self._signals.add(signal)

    @property
    def len_signal(self) -> int:
        return len(self._signals)

    def signals(self) -> Iterable[str]:
        for signal in self._signals:
            yield signal

    def own_members(self) -> Iterable[GDScriptMember]:
        result: List[GDScriptMember] = []
        for member in self.members():
            base = self.base
            inherited = False
            while base and not inherited:
                for base_member in base.members():
                    if base_member.name == member.name:
                        inherited = True
                        break
                base = base.base
            if not inherited:
                result.append(member)

        return sorted(result, key=lambda it: it.index)

    
