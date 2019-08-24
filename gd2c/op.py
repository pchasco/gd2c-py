from __future__ import annotations

TYPE_INT = 1
TYPE_FLOAT = 2
TYPE_VARIANT = 3

class Value:
    pass

class OpDescription:
    opcode: int
    result_type: int
    arg_count: int

    def __init__(self):
        pass