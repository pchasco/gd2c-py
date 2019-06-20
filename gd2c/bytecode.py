from __future__ import annotations
from typing import Set, List, TYPE_CHECKING

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
    Zero = GDScriptAddress(0)
    AddressBits = 24
    AddressMask = ((1 << 24) - 1)
    AddressModeMask = ~((1 << 24) - 1)

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
    def __init__(self, op: int, dest: int, operand1: int, operand2: int):
        super().__init__(GDScriptOpcode.Operator)
        self.op = op
        self.dest = dest
        self.operand1 = operand1
        self.operand2 = operand2

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
        super().__init__(GDScriptOpcode.Set)
        self.dest = dest
        self.array_address = array_address
        self.index_address = index_address

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