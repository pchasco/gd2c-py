from __future__ import annotations
from typing import Set, List, Iterable, Callable, Dict, Optional, ClassVar, TYPE_CHECKING, cast
from gd2c.variant import VariantType

if TYPE_CHECKING:
    from gd2c.gdscriptclass import GDScriptFunction

class GDScriptOpcode:
    Operator = 0
    ExtendsTest = 1
    IsBuiltin = 2
    Set = 3
    Get = 4
    SetNamed = 5
    GetNamed = 6
    SetMember = 7
    GetMember = 8
    Assign = 9
    AssignTrue = 10
    AssignFalse = 11
    AssignTypedBuiltin = 12
    AssignTypedNative = 13
    AssignTypedScript = 14
    CastToBuiltin = 15
    CastToNative = 16
    CastToScript = 17
    Construct = 18
    ConstructArray = 19
    ConstructDictionary = 20
    Call = 21
    CallReturn = 22
    CallBuiltin = 23
    CallSelf = 24
    CallSelfBase = 25
    Yield = 26
    YieldSignal = 27
    YieldResume = 28
    Jump = 29
    JumpIf = 30
    JumpIfNot = 31
    JumpToDefaultArgument = 32
    Return = 33
    IterateBegin = 34
    Iterate = 35
    Assert = 36
    Breakpoint = 37
    Line = 38
    End = 39

    # The following are not defined by Godot but are special instructions
    # for the transpiler
    Noop = 1000
    Box = 1001
    Destroy = 1002
    Unbox = 1003

class GDScriptOperator:
    # comparison
    Equal = 0
    NotEqual = 1
    Less = 2
    LessEqual = 3
    Greater = 4
    GreaterEqual = 5
    # mathematic
    Add = 6
    Subtract = 7
    Multiply = 8
    Divide = 9
    Negate = 10
    Positive = 11
    Module = 12
    StringConcat = 13
    # bitwise
    ShiftLeft = 14
    ShiftRight = 15
    BitAnd = 16
    BitOr = 17
    BitXor = 18
    BitNegate = 19
    # logic
    And = 20
    Or = 21
    Xor = 22
    Not = 23
    # containment
    In = 24
    Max = 25

OperatorToken = {
    GDScriptOperator.Equal: "==",
    GDScriptOperator.NotEqual: "!=",
    GDScriptOperator.Less: "<",
    GDScriptOperator.LessEqual: "<=",
    GDScriptOperator.Greater: ">",
    GDScriptOperator.GreaterEqual: ">=",
    GDScriptOperator.Add: "+",
    GDScriptOperator.Subtract: "-",
    GDScriptOperator.Multiply: "*",
    GDScriptOperator.Divide: "/",
    GDScriptOperator.Negate: "-",
    GDScriptOperator.Positive: "+",
    GDScriptOperator.Module: "%",
    GDScriptOperator.StringConcat: "+",
    GDScriptOperator.ShiftLeft: "<<",
    GDScriptOperator.ShiftRight: ">>",
    GDScriptOperator.BitAnd: "&",
    GDScriptOperator.BitOr: "|",
    GDScriptOperator.BitXor: "!",
    GDScriptOperator.BitNegate: "~",
    GDScriptOperator.And: "&&",
    GDScriptOperator.Or: "||",
    GDScriptOperator.Xor: "^",
    GDScriptOperator.Not: "!",
    GDScriptOperator.In: "in",
    GDScriptOperator.Max: "max"
}

class GDScriptAddressMode:
    Self = 0
    Class = 1
    Member = 2
    ClassConstant = 3
    LocalConstant = 4
    Stack = 5
    StackVariable = 6
    Global = 7
    NamedGlobal = 8
    Nil = 9

    # Function parameter not defined by GDSCRIPT
    Parameter = 14
    Temporary = 15
    SetterValueParameter = 16

AddressModePrefix = {
    GDScriptAddressMode.Self: "self",
    GDScriptAddressMode.Class: "class",
    GDScriptAddressMode.Member: "memb",
    GDScriptAddressMode.ClassConstant: "clco",
    GDScriptAddressMode.LocalConstant: "loco",
    GDScriptAddressMode.Stack: "stac",
    GDScriptAddressMode.StackVariable: "stva",
    GDScriptAddressMode.Global: "glob",
    GDScriptAddressMode.NamedGlobal: "namg",
    GDScriptAddressMode.Nil: " nil",
    GDScriptAddressMode.Parameter: "para",
    GDScriptAddressMode.Temporary: "temp",
    GDScriptAddressMode.SetterValueParameter: "setv"
}

class GDScriptAddress:
    Zero: ClassVar['GDScriptAddress'] = cast('GDScriptAddress', None)
    AddressBits: ClassVar[int] = 24
    AddressMask: ClassVar[int] = ((1 << 24) - 1)
    AddressModeMask: ClassVar[int] = ~((1 << 24) - 1)

    def __init__(self, address: int):
        self._address = address

    @property
    def address(self):
        return self._address

    @property
    def mode(self):
        return (self._address & GDScriptAddress.AddressModeMask) >> GDScriptAddress.AddressBits

    @property
    def offset(self):
        return self._address & GDScriptAddress.AddressMask

    def __eq__(self, other):
        return other and self._address == other._address

    def __ne__(self, other):
        return not self.__eq__(other)

    def __hash__(self):
        return hash(self._address)

GDScriptAddress.Zero = GDScriptAddress(0)

class GDScriptOp:
    def __init__(self, opcode: int):
        self._opcode = opcode
        self._reads: Set[int] = set()
        self._writes: Set[int] = set()

    @property
    def opcode(self):
        return self._opcode

    @property
    def reads(self):
        return self._reads
    @reads.setter
    def reads(self, value: Set[int]):
        if value is None:
            raise "value may not be None"
        self._reads = value

    @property
    def writes(self):
        return self._writes
    @writes.setter
    def writes(self, value: Set[int]):
        if value is None:
            raise "value may not be None"
        self._writes = value

    @property
    def stride(self) -> int:
        raise Exception("not implemented")

class NoopGDScriptOp(GDScriptOp):
    def __init__(self):
        super().__init__(GDScriptOpcode.Noop)

    def __str__(self):
        return "NOOP"

    @property
    def stride(self) -> int:
        return 1

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'NoopGDScriptOp':
        return NoopGDScriptOp()

class OperatorGDScriptOp(GDScriptOp):
    def __init__(self, op: int, operand1: int, operand2: int, dest: int):
        super().__init__(GDScriptOpcode.Operator)
        self.op = op
        self.dest = dest
        self.operand1 = operand1
        self.operand2 = operand2
        self._writes = set([dest])
        self._reads = set([operand1, operand2])

    def __str__(self):
        return f"OPER {self.dest} = {self.operand1} {OperatorToken[self.op]} {self.operand2}"

    @property
    def stride(self) -> int:
        return 5

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'OperatorGDScriptOp':
        return OperatorGDScriptOp(
            bytecode[index + 1],
            bytecode[index + 2],
            bytecode[index + 3],
            bytecode[index + 4])

class SetGDScriptOp(GDScriptOp):
    def __init__(self, array_address: int, index_address: int, source_address: int):
        super().__init__(GDScriptOpcode.Set)
        self.array_address = array_address
        self.index_address = index_address
        self.source_address = source_address
        self._reads = set([source_address, array_address, index_address])
        self._writes = set([array_address])

    def __str__(self):
        return f"SET {self.array_address}[{self.index_address}] = {self.source_address}"

    @property
    def stride(self) -> int:
        return 4

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'SetGDScriptOp':
        return SetGDScriptOp(
            bytecode[index + 1],
            bytecode[index + 2],
            bytecode[index + 3])

class GetGDScriptOp(GDScriptOp):
    def __init__(self, dest: int, array_address: int, index_address: int):
        super().__init__(GDScriptOpcode.GetNamed)
        self.dest = dest
        self.array_address = array_address
        self.index_address = index_address
        self._writes = set([dest])
        self._reads = set([array_address, index_address])

    def __str__(self):
        return f"GET {self.dest} = {self.array_address}[{self.index_address}]"

    @property
    def stride(self) -> int:
        return 4

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'GetGDScriptOp':
        return GetGDScriptOp(
            bytecode[index + 3],
            bytecode[index + 1],
            bytecode[index + 2])

class SetNamedGDScriptOp(GDScriptOp):
    def __init__(self, receiver: int, name_index: int, source: int):
        super().__init__(GDScriptOpcode.SetNamed)
        self.receiver = receiver
        self.name_index = name_index
        self.source = source
        self._writes = set([receiver])
        self._reads = set([source])

    def __str__(self):
        return f"SETNAMED {self.dest} = {self.array_address}.['{self.index_address}']"

    @property
    def stride(self) -> int:
        return 4

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'SetNamedGDScriptOp':
        return SetNamedGDScriptOp(
            bytecode[index + 1],
            bytecode[index + 2],
            bytecode[index + 3])

class GetNamedGDScriptOp(GDScriptOp):
    def __init__(self, dest: int, receiver: int, name_index: int):
        super().__init__(GDScriptOpcode.Set)
        self.receiver = receiver
        self.name_index = name_index
        self.dest = dest
        self._writes = set([dest])
        self._reads = set([receiver])

    def __str__(self):
        return f"GETNAMED {self.dest} = {self.array_address}['{self.index_address}'"

    @property
    def stride(self) -> int:
        return 4

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'GetNamedGDScriptOp':
        return GetNamedGDScriptOp(
            bytecode[index + 3],
            bytecode[index + 1],
            bytecode[index + 2])

class SetMemberGDScriptOp(GDScriptOp):
    def __init__(self, name_index: int, source: int):
        super().__init__(GDScriptOpcode.SetMember)
        self.name_index = name_index
        self.source = source
        self._reads = set([source])

    def __str__(self):
        return f"SETMEMBER {self.receiver}.{self.name_index} = {self.source}"

    @property
    def stride(self) -> int:
        return 3

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'SetMemberGDScriptOp':
        return SetMemberGDScriptOp(
            bytecode[index + 1],
            bytecode[index + 2])

class GetMemberGDScriptOp(GDScriptOp):
    def __init__(self, dest: int, name_index: int):
        super().__init__(GDScriptOpcode.GetMember)
        self.dest = dest
        self.name_index = name_index
        self._writes = set([dest])

    def __str__(self):
        return f"GETMEMBER {self.dest} = self.{self.name_index}"

    @property
    def stride(self) -> int:
        return 3

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'GetMemberGDScriptOp':
        return GetMemberGDScriptOp(
            bytecode[index + 2],
            bytecode[index + 1])

class AssignGDScriptOp(GDScriptOp):
    def __init__(self, dest: int, source: int):
        super().__init__(GDScriptOpcode.Assign)
        self.dest = dest
        self.source = source
        self._writes = set([dest])
        self._reads = set([source])

    def __str__(self):
        return f"ASSIGN {self.dest} = {self.source}"

    @property
    def stride(self) -> int:
        return 3

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'AssignGDScriptOp':
        return AssignGDScriptOp(
            bytecode[index + 1],
            bytecode[index + 2])

class AssignTrueGDScriptOp(GDScriptOp):
    def __init__(self, dest: int):
        super().__init__(GDScriptOpcode.AssignTrue)
        self.dest = dest
        self._writes = set([dest])

    def __str__(self):
        return f"ASGNTRUE {self.dest}"

    @property
    def stride(self) -> int:
        return 2

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'AssignTrueGDScriptOp':
        return AssignTrueGDScriptOp(bytecode[index + 1])

class AssignFalseGDScriptOp(GDScriptOp):
    def __init__(self, dest: int):
        super().__init__(GDScriptOpcode.AssignFalse)
        self.dest = dest
        self._writes = set([dest])

    def __str__(self):
        return f"ASGNFALSE {self.dest}"

    @property
    def stride(self) -> int:
        return 2

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'AssignFalseGDScriptOp':
        return AssignFalseGDScriptOp(bytecode[index + 1])

class AssignTypedBuiltinGDScriptOp(GDScriptOp):
    def __init__(self, vtype: int, dest: int, source: int):
        super().__init__(GDScriptOpcode.AssignTypedBuiltin)
        self.vtype = VariantType.get(vtype)
        self.dest = dest
        self.source = source
        self._writes = set([dest])
        self._reads = set([source])

    def __str__(self):
        return f"ASGNBI {self.dest}"

    @property
    def stride(self) -> int:
        return 4

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'AssignTypedBuiltinGDScriptOp':
        return AssignTypedBuiltinGDScriptOp(
            bytecode[index + 1],
            bytecode[index + 2],
            bytecode[index + 3])

class ReturnGDScriptOp(GDScriptOp):
    def __init__(self, source: int):
        super().__init__(GDScriptOpcode.Return)
        self.source = source
        self._reads = set([source])

    def __str__(self):
        return f"RETURN {self.source}"

    @property
    def stride(self) -> int:
        return 2

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'ReturnGDScriptOp':
        return ReturnGDScriptOp(bytecode[index + 1])

class ConstructGDScriptOp(GDScriptOp):
    def __init__(self, vtype: int, arg_count: int, args: Iterable[int], dest: int):
        super().__init__(GDScriptOpcode.Construct)
        self.vtype = VariantType.get(vtype)
        self.arg_count = arg_count
        self.args = list(args)[:]
        self.dest = dest
        self._writes = set([dest])
        self._reads = set(self.args)

    def __str__(self):
        return f"CONSTRU {self.dest} = ..."

    @property
    def stride(self) -> int:
        return 4 + self.arg_count

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'ConstructGDScriptOp':
        count = bytecode[index + 2]
        return ConstructGDScriptOp(
            bytecode[index + 1],
            count,
            bytecode[index + 3 : index + 3 + count],
            bytecode[index + 3 + count])

class ConstructArrayGDScriptOp(GDScriptOp):
    def __init__(self, dest: int, item_count: int, item_addresses: Iterable[int]):
        super().__init__(GDScriptOpcode.ConstructArray)
        self.item_count = item_count
        self.item_addresses = list(item_addresses)[:]
        self.dest = dest
        self._writes = set([dest])
        self._reads = set(self.item_addresses)

    def __str__(self):
        return f"NEWARRAY {self.dest} = ..."

    @property
    def stride(self) -> int:
        return 3 + self.item_count

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'ConstructArrayGDScriptOp':
        count = bytecode[index + 1]
        return ConstructArrayGDScriptOp(
            bytecode[index + 2 + count],
            count,
            bytecode[index + 2 : index + 2 + count])

class ConstructDictionaryGDScriptOp(GDScriptOp):
    def __init__(self, dest: int, item_count: int, key_addresses: Iterable[int], value_addresses: Iterable[int]):
        super().__init__(GDScriptOpcode.ConstructDictionary)
        self.item_count = item_count
        self.key_addresses = list(key_addresses)[:]
        self.value_addresses = list(value_addresses)[:]
        self.dest = dest
        self._writes = set([dest])
        self._reads = set(self.key_addresses) | set(self.value_addresses)

    def __str__(self):
        return f"NEWARRAY {self.dest} = ..."

    @property
    def stride(self) -> int:
        return 3 + self.item_count

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'ConstructDictionaryGDScriptOp':
        count = bytecode[index + 1]
        keys = []
        values = []

        for i in range(count):
            keys.append(bytecode[2 + i * 2 + 0])
            values.append(bytecode[2 + i * 2 + 1])

        return ConstructDictionaryGDScriptOp(
            bytecode[2 + count * 2],
            count,
            keys,
            values)

class CallReturnGDScriptOp(GDScriptOp):
    def __init__(self, dest: int, receiver: int, arg_count: int, name_index: int, args: Iterable[int]):
        super().__init__(GDScriptOpcode.CallReturn)
        self.dest = dest
        self.arg_count = arg_count
        self.name_index = name_index
        self.args = list(args)[:]
        self.receiver = receiver
        self._writes = set([dest])
        self._reads = set([receiver]) | set(self.args)

    def __str__(self):
        return f"CALLRET {self.receiver}.{self.name_index}(...)"

    @property
    def stride(self) -> int:
        return 5 + self.arg_count

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'CallReturnGDScriptOp':
        count = bytecode[index + 1]
        return CallReturnGDScriptOp(
            bytecode[index + 4 + count],
            bytecode[index + 2],
            count,
            bytecode[index + 3],
            bytecode[index + 4 : index + 4 + count])

class CallGDScriptOp(GDScriptOp):
    def __init__(self, receiver: int, arg_count: int, name_index: int, args: Iterable[int]):
        super().__init__(GDScriptOpcode.CallReturn)
        self.arg_count = arg_count
        self.name_index = name_index
        self.args = list(args)[:]
        self.receiver = receiver
        self._reads = set([receiver]) | set(self.args)

    def __str__(self):
        return f"CALL {self.receiver}.{self.name_index}(...)"

    @property
    def stride(self) -> int:
        return 5 + self.arg_count

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'CallReturnGDScriptOp':
        count = bytecode[index + 1]
        return CallReturnGDScriptOp(
            bytecode[index + 4 + count],
            bytecode[index + 2],
            count,
            bytecode[index + 3],
            bytecode[index + 4 : index + 4 + count])

class CallSelfBaseGDScriptOp(GDScriptOp):
    def __init__(self, dest: int, arg_count: int, name_index: int, args: Iterable[int]):
        super().__init__(GDScriptOpcode.CallSelfBase)
        self.dest = dest
        self.arg_count = arg_count
        self.name_index = name_index
        self.args = list(args)[:]
        self._reads = set(self.args)

    def __str__(self):
        return f"CALLBASE {self.dest} = {self.receiver}.{self.name_index}(...)"

    @property
    def stride(self) -> int:
        return 4 + self.arg_count

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'CallSelfBaseGDScriptOp':
        count = bytecode[index + 1]
        return CallSelfBaseGDScriptOp(
            bytecode[index + 3 + count],
            count,
            bytecode[index + 1],
            bytecode[index + 3 : index + 3 + count])

class CallBuiltinGDScriptOp(GDScriptOp):
    def __init__(self, dest: int, function_index: int, arg_count: int, args: Iterable[int]):
        super().__init__(GDScriptOpcode.CallBuiltin)
        self.dest = dest
        self.arg_count = arg_count
        self.function_index = function_index
        self.args = list(args)[:]
        self._dest = set([dest])
        self._reads = set(self.args)

    def __str__(self):
        return f"CALLBI {self.dest} = builtin[{self.function_index}](...)"

    @property
    def stride(self) -> int:
        return 4 + self.arg_count

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'CallBuiltinGDScriptOp':
        count = bytecode[index + 1]
        return CallBuiltinGDScriptOp(
            bytecode[index + 3 + count],
            count,
            bytecode[index + 1],
            bytecode[index + 3 : index + 3 + count])

class JumpGDScriptOp(GDScriptOp):
    def __init__(self, branch: int):
        super().__init__(GDScriptOpcode.Jump)
        self.branch = branch
        self.fallthrough = branch

    def __str__(self):
        return f"JUMP {self.branch}"

    @property
    def stride(self) -> int:
        return 2

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'JumpGDScriptOp':
        return JumpGDScriptOp(bytecode[index + 1])

class JumpIfGDScriptOp(GDScriptOp):
    def __init__(self, branch: int, source: int, fallthrough: int):
        super().__init__(GDScriptOpcode.JumpIf)
        self.branch = branch
        self.source = source
        self.fallthrough = fallthrough

    def __str__(self):
        return f"JUMPIF {self.source}? {self.branch} : {self.fallthrough}"

    @property
    def stride(self) -> int:
        return 3

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'JumpIfGDScriptOp':
        return JumpIfGDScriptOp(bytecode[index + 2], bytecode[index + 1], index + 3)

class JumpIfNotGDScriptOp(GDScriptOp):
    def __init__(self, branch: int, source: int, fallthrough: int):
        super().__init__(GDScriptOpcode.JumpIfNot)
        self.branch = branch
        self.fallthrough = fallthrough
        self.source = source

    def __str__(self):
        return f"JUMPIFNT {self.source}? {self.branch}"

    @property
    def stride(self) -> int:
        return 3

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'JumpIfGDScriptOp':
        return JumpIfGDScriptOp(bytecode[index + 2], bytecode[index + 1], index + 3)

class JumpToDefaultArgumentGDScriptOp(GDScriptOp):
    def __init__(self, jump_table: Iterable[int]):
        super().__init__(GDScriptOpcode.JumpToDefaultArgument)
        self.jump_table = list(jump_table)[:]

    def __str__(self):
        return f"DEFAULT"

    @property
    def stride(self) -> int:
        return 3

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'JumpToDefaultArgumentGDScriptOp':
        return JumpToDefaultArgumentGDScriptOp(func.default_arguments_jump_table)

class LineGDScriptOp(GDScriptOp):
    def __init__(self, line_number: int):
        super().__init__(GDScriptOpcode.Line)
        self.line_number = line_number

    def __str__(self):
        return f"LINE {self.line_number}"

    @property
    def stride(self) -> int:
        return 2

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'LineGDScriptOp':
        return LineGDScriptOp(bytecode[index + 1])

class EndGDScriptOp(GDScriptOp):
    def __init__(self):
        super().__init__(GDScriptOpcode.End)

    def __str__(self):
        return f"END"

    @property
    def stride(self) -> int:
        return 1

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'EndGDScriptOp':
        return EndGDScriptOp()

_extractors: Dict[int, Optional[Callable[[GDScriptFunction, List[int], int], GDScriptOp]]] = {
    GDScriptOpcode.Operator: OperatorGDScriptOp.extract,
    GDScriptOpcode.ExtendsTest: None,
    GDScriptOpcode.IsBuiltin: None,
    GDScriptOpcode.Set: SetGDScriptOp.extract,
    GDScriptOpcode.Get: GetGDScriptOp.extract,
    GDScriptOpcode.SetNamed: SetNamedGDScriptOp.extract,
    GDScriptOpcode.GetNamed: GetNamedGDScriptOp.extract,
    GDScriptOpcode.SetMember: SetMemberGDScriptOp.extract,
    GDScriptOpcode.GetMember: GetMemberGDScriptOp.extract,
    GDScriptOpcode.Assign: AssignGDScriptOp.extract,
    GDScriptOpcode.AssignTrue: AssignTrueGDScriptOp.extract,
    GDScriptOpcode.AssignFalse: AssignFalseGDScriptOp.extract,
    GDScriptOpcode.AssignTypedBuiltin: AssignTypedBuiltinGDScriptOp.extract,
    GDScriptOpcode.AssignTypedNative: None,
    GDScriptOpcode.AssignTypedScript: None,
    GDScriptOpcode.CastToBuiltin: None,
    GDScriptOpcode.CastToNative: None,
    GDScriptOpcode.CastToScript: None,
    GDScriptOpcode.Construct: ConstructGDScriptOp.extract,
    GDScriptOpcode.ConstructArray: ConstructArrayGDScriptOp.extract,
    GDScriptOpcode.ConstructDictionary: ConstructDictionaryGDScriptOp.extract,
    GDScriptOpcode.Call: CallGDScriptOp.extract,
    GDScriptOpcode.CallReturn: CallReturnGDScriptOp.extract,
    GDScriptOpcode.CallBuiltin: CallBuiltinGDScriptOp.extract,
    GDScriptOpcode.CallSelf: CallSelfBaseGDScriptOp.extract,
    GDScriptOpcode.CallSelfBase: CallSelfBaseGDScriptOp.extract,
    GDScriptOpcode.Yield: None,
    GDScriptOpcode.YieldSignal: None,
    GDScriptOpcode.YieldResume: None,
    GDScriptOpcode.Jump: JumpGDScriptOp.extract,
    GDScriptOpcode.JumpIf: JumpIfGDScriptOp.extract,
    GDScriptOpcode.JumpIfNot: JumpIfNotGDScriptOp.extract,
    GDScriptOpcode.JumpToDefaultArgument: JumpToDefaultArgumentGDScriptOp.extract,
    GDScriptOpcode.Return: ReturnGDScriptOp.extract,
    GDScriptOpcode.IterateBegin: None,
    GDScriptOpcode.Iterate: None,
    GDScriptOpcode.Assert: None,
    GDScriptOpcode.Breakpoint: None,
    GDScriptOpcode.Line: LineGDScriptOp.extract,
    GDScriptOpcode.End: EndGDScriptOp.extract,

    # The following are not defined by Godot but are special instructions
    # for the transpiler
    GDScriptOpcode.Noop: None,
    GDScriptOpcode.Box: None,
    GDScriptOpcode.Destroy: None,
    GDScriptOpcode.Unbox: None  
}

def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> GDScriptOp:
    fn = _extractors[bytecode[index]]
    if fn:
        return fn(func, bytecode, index)

    raise Exception(f"Bytecode {bytecode[index]} is not supported at bytecode[{index}]")


