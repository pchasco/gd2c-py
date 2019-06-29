from __future__ import annotations
from typing import Set, List, Iterable, Callable, Dict, Optional, ClassVar, TYPE_CHECKING, cast
from gd2c.variant import VariantType

if TYPE_CHECKING:
    from gd2c.gdscriptclass import GDScriptFunction

OPCODE_OPERATOR = 0
OPCODE_EXTENDSTEST = 1
OPCODE_ISBUILTIN = 2
OPCODE_SET = 3
OPCODE_GET = 4
OPCODE_SETNAMED = 5
OPCODE_GETNAMED = 6
OPCODE_SETMEMBER = 7
OPCODE_GETMEMBER = 8
OPCODE_ASSIGN = 9
OPCODE_ASSIGNTRUE = 10
OPCODE_ASSIGNFALSE = 11
OPCODE_ASSIGNTYPEDBUILTIN = 12
OPCODE_ASSIGNTYPEDNATIVE = 13
OPCODE_ASSIGNTYPEDSCRIPT = 14
OPCODE_CASTTOBUILTIN = 15
OPCODE_CASTTONATIVE = 16
OPCODE_CASTTOSCRIPT = 17
OPCODE_CONSTRUCT = 18
OPCODE_CONSTRUCTARRAY = 19
OPCODE_CONSTRUCTDICTIONARY = 20
OPCODE_CALL = 21
OPCODE_CALLRETURN = 22
OPCODE_CALLBUILTIN = 23
OPCODE_CALLSELF = 24
OPCODE_CALLSELFBASE = 25
OPCODE_YIELD = 26
OPCODE_YIELDSIGNAL = 27
OPCODE_YIELDRESUME = 28
OPCODE_JUMP = 29
OPCODE_JUMPIF = 30
OPCODE_JUMPIFNOT = 31
OPCODE_JUMPTODEFAULTARGUMENT = 32
OPCODE_RETURN = 33
OPCODE_ITERATEBEGIN = 34
OPCODE_ITERATE = 35
OPCODE_ASSERT = 36
OPCODE_BREAKPOINT = 37
OPCODE_LINE = 38
OPCODE_END = 39
# The following are not defined by Godot but are special instructions
# for the transpiler
OPCODE_NOOP = 1000
OPCODE_BOX = 1001
OPCODE_DESTROY = 1002
OPCODE_UNBOX = 1003
OPCODE_DEFINE = 1004

# Comparison
OPERATOR_EQUAL = 0
OPERATOR_NOTEQUAL = 1
OPERATOR_LESS = 2
OPERATOR_LESSEQUAL = 3
OPERATOR_GREATER = 4
OPERATOR_GREATEREQUAL = 5
# Mathematic
OPERATOR_ADD = 6
OPERATOR_SUBTRACT = 7
OPERATOR_MULTIPLY = 8
OPERATOR_DIVIDE = 9
OPERATOR_NEGATE = 10
OPERATOR_POSITIVE = 11
OPERATOR_MODULE = 12
OPERATOR_STRINGCONCAT = 13
# Bitwise
OPERATOR_SHIFTLEFT = 14
OPERATOR_SHIFTRIGHT = 15
OPERATOR_BITAND = 16
OPERATOR_BITOR = 17
OPERATOR_BITXOR = 18
OPERATOR_BITNEGATE = 19
# Logic
OPERATOR_AND = 20
OPERATOR_OR = 21
OPERATOR_XOR = 22
OPERATOR_NOT = 23
# Containment
OPERATOR_IN = 24
OPERATOR_MAX = 25

OperatorToken = {
    OPERATOR_EQUAL: "==",
    OPERATOR_NOTEQUAL: "!=",
    OPERATOR_LESS: "<",
    OPERATOR_LESSEQUAL: "<=",
    OPERATOR_GREATER: ">",
    OPERATOR_GREATEREQUAL: ">=",
    OPERATOR_ADD: "+",
    OPERATOR_SUBTRACT: "-",
    OPERATOR_MULTIPLY: "*",
    OPERATOR_DIVIDE: "/",
    OPERATOR_NEGATE: "-",
    OPERATOR_POSITIVE: "+",
    OPERATOR_MODULE: "%",
    OPERATOR_STRINGCONCAT: "+",
    OPERATOR_SHIFTLEFT: "<<",
    OPERATOR_SHIFTRIGHT: ">>",
    OPERATOR_BITAND: "&",
    OPERATOR_BITOR: "|",
    OPERATOR_BITXOR: "^",
    OPERATOR_BITNEGATE: "~",
    OPERATOR_AND: "&&",
    OPERATOR_OR: "||",
    OPERATOR_XOR: "^",
    OPERATOR_NOT: "!",
    OPERATOR_IN: "in",
    OPERATOR_MAX: "max"
}

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
        super().__init__(OPCODE_NOOP)

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
        super().__init__(OPCODE_OPERATOR)
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
        super().__init__(OPCODE_SET)
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
        super().__init__(OPCODE_GET)
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
        super().__init__(OPCODE_SETNAMED)
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
        super().__init__(OPCODE_GETNAMED)
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
        super().__init__(OPCODE_SETMEMBER)
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
        super().__init__(OPCODE_GETMEMBER)
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
        super().__init__(OPCODE_ASSIGN)
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
        super().__init__(OPCODE_ASSIGNTRUE)
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
        super().__init__(OPCODE_ASSIGNFALSE)
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
        super().__init__(OPCODE_ASSIGNTYPEDBUILTIN)
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
        super().__init__(OPCODE_RETURN)
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
        super().__init__(OPCODE_CONSTRUCT)
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
        super().__init__(OPCODE_CONSTRUCTARRAY)
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
        super().__init__(OPCODE_CONSTRUCTDICTIONARY)
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
        super().__init__(OPCODE_CALLRETURN)
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
        super().__init__(OPCODE_CALL)
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
        super().__init__(OPCODE_CALLSELFBASE)
        self.dest = dest
        self.arg_count = arg_count
        self.name_index = name_index
        self.args = list(args)[:]
        self._reads = set(self.args)

    def __str__(self):
        return f"CALLBASE {self.dest} = self.{self.name_index}(...)"

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
        super().__init__(OPCODE_CALLBUILTIN)
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
        super().__init__(OPCODE_JUMP)
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
    def __init__(self, branch: int, condition: int, fallthrough: int):
        super().__init__(OPCODE_JUMPIF)
        self.branch = branch
        self.condition = condition
        self.fallthrough = fallthrough

    def __str__(self):
        return f"JUMPIF {self.condition} ? {self.branch} : {self.fallthrough}"

    @property
    def stride(self) -> int:
        return 3

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'JumpIfGDScriptOp':
        return JumpIfGDScriptOp(bytecode[index + 2], bytecode[index + 1], index + 3)

class JumpIfNotGDScriptOp(GDScriptOp):
    def __init__(self, branch: int, condition: int, fallthrough: int):
        super().__init__(OPCODE_JUMPIFNOT)
        self.branch = branch
        self.fallthrough = fallthrough
        self.condition = condition

    def __str__(self):
        return f"JUMPIFNT {self.condition} ? {self.branch}"

    @property
    def stride(self) -> int:
        return 3

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'JumpIfGDScriptOp':
        return JumpIfGDScriptOp(bytecode[index + 2], bytecode[index + 1], index + 3)

class JumpToDefaultArgumentGDScriptOp(GDScriptOp):
    def __init__(self, jump_table: Iterable[int]):
        super().__init__(OPCODE_JUMPTODEFAULTARGUMENT)
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
        super().__init__(OPCODE_LINE)
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
        super().__init__(OPCODE_END)

    def __str__(self):
        return f"END"

    @property
    def stride(self) -> int:
        return 1

    @staticmethod
    def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> 'EndGDScriptOp':
        return EndGDScriptOp()

class PseudoGDScriptOp(GDScriptOp):
    def __init__(self, opcode: int):
        super().__init__(opcode)

    @property
    def stride(self) -> int:
        raise Exception("Pseudo-ops have no stride as they do not have a bytecode representation")


class DefineGDScriptOp(PseudoGDScriptOp):
    def __init__(self, address: int):
        super().__init__(OPCODE_DEFINE)
        self.address = address
        self._writes = set([address])

    def __str__(self):
        return f"DEFINE {self.address}"

_extractors: Dict[int, Optional[Callable[[GDScriptFunction, List[int], int], GDScriptOp]]] = {
    OPCODE_OPERATOR: OperatorGDScriptOp.extract,
    OPCODE_EXTENDSTEST: None,
    OPCODE_ISBUILTIN: None,
    OPCODE_SET: SetGDScriptOp.extract,
    OPCODE_GET: GetGDScriptOp.extract,
    OPCODE_SETNAMED: SetNamedGDScriptOp.extract,
    OPCODE_GETNAMED: GetNamedGDScriptOp.extract,
    OPCODE_SETMEMBER: SetMemberGDScriptOp.extract,
    OPCODE_GETMEMBER: GetMemberGDScriptOp.extract,
    OPCODE_ASSIGN: AssignGDScriptOp.extract,
    OPCODE_ASSIGNTRUE: AssignTrueGDScriptOp.extract,
    OPCODE_ASSIGNFALSE: AssignFalseGDScriptOp.extract,
    OPCODE_ASSIGNTYPEDBUILTIN: AssignTypedBuiltinGDScriptOp.extract,
    OPCODE_ASSIGNTYPEDNATIVE: None,
    OPCODE_ASSIGNTYPEDSCRIPT: None,
    OPCODE_CASTTOBUILTIN: None,
    OPCODE_CASTTONATIVE: None,
    OPCODE_CASTTOSCRIPT: None,
    OPCODE_CONSTRUCT: ConstructGDScriptOp.extract,
    OPCODE_CONSTRUCTARRAY: ConstructArrayGDScriptOp.extract,
    OPCODE_CONSTRUCTDICTIONARY: ConstructDictionaryGDScriptOp.extract,
    OPCODE_CALL: CallGDScriptOp.extract,
    OPCODE_CALLRETURN: CallReturnGDScriptOp.extract,
    OPCODE_CALLBUILTIN: CallBuiltinGDScriptOp.extract,
    OPCODE_CALLSELFBASE: CallSelfBaseGDScriptOp.extract,
    OPCODE_YIELD: None,
    OPCODE_YIELDSIGNAL: None,
    OPCODE_YIELDRESUME: None,
    OPCODE_JUMP: JumpGDScriptOp.extract,
    OPCODE_JUMPIF: JumpIfGDScriptOp.extract,
    OPCODE_JUMPIFNOT: JumpIfNotGDScriptOp.extract,
    OPCODE_JUMPTODEFAULTARGUMENT: JumpToDefaultArgumentGDScriptOp.extract,
    OPCODE_RETURN: ReturnGDScriptOp.extract,
    OPCODE_ITERATEBEGIN: None,
    OPCODE_ITERATE: None,
    OPCODE_ASSERT: None,
    OPCODE_BREAKPOINT: None,
    OPCODE_LINE: LineGDScriptOp.extract,
    OPCODE_END: EndGDScriptOp.extract,

    # The following are not defined by Godot but are special instructions
    # for the transpiler
    OPCODE_NOOP: None,
    OPCODE_BOX: None,
    OPCODE_DESTROY: None,
    OPCODE_UNBOX: None  
}

def extract(func: GDScriptFunction, bytecode: List[int], index: int) -> GDScriptOp:
    fn = _extractors[bytecode[index]]
    if fn:
        return fn(func, bytecode, index)

    raise Exception(f"Bytecode {bytecode[index]} is not supported at bytecode[{index}]")


