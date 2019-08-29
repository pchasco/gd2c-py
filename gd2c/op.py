from __future__ import annotations

# These represent the C target types that will be used
TYPE_VOID = 0
TYPE_INT = 1
TYPE_FLOAT = 2
TYPE_BOOL = 3
TYPE_VARIANT = 99

class Value:
    pass

class OpDescription:
    name: str
    result_type: int
    arg_count: int
    is_commutative: bool
    has_side_effects: bool

    def __init__(self, name: str, result_type: int, arg_count: int, is_commutative: bool = False, has_side_effects: bool = False):
        self.name = name
        self.result_type = result_type
        self.arg_count = arg_count
        self.is_commutative = is_commutative
        self.has_side_effects = has_side_effects

def OP(name: str, result_type: int, arg_count: int, is_commutative: bool = False, has_side_effects: bool = False):
    return OpDescription(name, result_type, arg_count, is_commutative, has_side_effects)

OPS = [
    # Equals (Compare)
    OP('EqInt', TYPE_INT, 2),
    OP('EqFloat', TYPE_FLOAT, 2),
    OP('EqBool', TYPE_BOOL, 2),
    OP('EqVariant', TYPE_VARIANT, 2),

    # Not equals (Compare)
    OP('NeqInt', TYPE_INT, 2),
    OP('NeqFloat', TYPE_FLOAT, 2),
    OP('NeqBool', TYPE_BOOL, 2),
    OP('NeqVariant', TYPE_VARIANT, 2),

    # Less than
    OP('LtInt', TYPE_INT, 2),
    OP('LtFloat', TYPE_FLOAT, 2),
    OP('LtBool', TYPE_BOOL, 2),
    OP('LtVariant', TYPE_VARIANT, 2),

    # Less than or equal
    OP('LeInt', TYPE_INT, 2),
    OP('LeFloat', TYPE_FLOAT, 2),
    OP('LeBool', TYPE_BOOL, 2),
    OP('LeVariant', TYPE_VARIANT, 2),

    # Greater than
    OP('GtInt', TYPE_INT, 2),
    OP('GtFloat', TYPE_FLOAT, 2),
    OP('GtBool', TYPE_BOOL, 2),
    OP('GtVariant', TYPE_VARIANT, 2),

    # Greater than or equal
    OP('GeInt', TYPE_INT, 2),
    OP('GeFloat', TYPE_FLOAT, 2),
    OP('GeBool', TYPE_BOOL, 2),
    OP('GeVariant', TYPE_VARIANT, 2),

    # Add
    OP('AddInt', TYPE_INT, 2, True),
    OP('AddFloat', TYPE_FLOAT, 2, True),
    OP('AddBool', TYPE_BOOL, 2, True),
    OP('AddVariant', TYPE_VARIANT, 2, True),

    # Subtract
    OP('SubInt', TYPE_INT, 2),
    OP('SubFloat', TYPE_FLOAT, 2),
    OP('SubBool', TYPE_BOOL, 2),
    OP('SubVariant', TYPE_VARIANT, 2),

    # Multiply
    OP('MulInt', TYPE_INT, 2, True),
    OP('MulFloat', TYPE_FLOAT, 2, True),
    OP('MulBool', TYPE_BOOL, 2, True),
    OP('MulVariant', TYPE_VARIANT, 2, True),

    # Divide
    OP('DivInt', TYPE_INT, 2),
    OP('DivFloat', TYPE_FLOAT, 2),
    OP('DivBool', TYPE_BOOL, 2),
    OP('DivVariant', TYPE_VARIANT, 2),

    # Negate
    OP('NegInt', TYPE_INT, 1, True),
    OP('NegFloat', TYPE_FLOAT, 1, True),
    OP('NegVariant', TYPE_VARIANT, 1, True),

    # Positive
    OP('PosInt', TYPE_INT, 1, True),
    OP('PosFloat', TYPE_FLOAT, 1, True),
    OP('PosVariant', TYPE_VARIANT, 1, True),

    # Modulus
    OP('ModInt', TYPE_INT, 2),
    OP('ModFloat', TYPE_FLOAT, 2),
    OP('ModVariant', TYPE_VARIANT, 2),

    # String concat
    OP('CatStr', TYPE_VARIANT, 2),

    # Shift left
    OP('ShlInt', TYPE_INT, 2),
    OP('ShlFloat', TYPE_FLOAT, 2),
    OP('ShlVariant', TYPE_VARIANT, 2),

    # Shift right
    OP('ShrInt', TYPE_INT, 2),
    OP('ShrFloat', TYPE_FLOAT, 2),
    OP('ShrVariant', TYPE_VARIANT, 2),

    # Bitwise and
    OP('BandInt', TYPE_INT, 2, True),
    OP('BandBool', TYPE_BOOL, 2, True),
    OP('BandFloat', TYPE_FLOAT, 2, True),
    OP('BandVariant', TYPE_VARIANT, 2, True),

    # Bitwise or
    OP('BorInt', TYPE_INT, 2, True),
    OP('BorBool', TYPE_BOOL, 2, True),
    OP('BorFloat', TYPE_FLOAT, 2, True),
    OP('BorVariant', TYPE_VARIANT, 2, True),

    # Bitwise xor
    OP('BxorInt', TYPE_INT, 2, True),
    OP('BxorBool', TYPE_BOOL, 2, True),
    OP('BxorFloat', TYPE_FLOAT, 2, True),
    OP('BxorVariant', TYPE_VARIANT, 2, True),

    # Bitwise negation
    OP('BnegInt', TYPE_INT, 2, True),
    OP('BnegBool', TYPE_BOOL, 2, True),
    OP('BnegFloat', TYPE_FLOAT, 2, True),
    OP('BnegVariant', TYPE_VARIANT, 2, True),

    # Boolean and
    OP('AndInt', TYPE_INT, 2, True),
    OP('AndBool', TYPE_BOOL, 2, True),
    OP('AndFloat', TYPE_FLOAT, 2, True),
    OP('AndVariant', TYPE_VARIANT, 2, True),

    # Boolean or
    OP('OrInt', TYPE_INT, 2, True),
    OP('OrBool', TYPE_BOOL, 2, True),
    OP('OrFloat', TYPE_FLOAT, 2, True),
    OP('OrVariant', TYPE_VARIANT, 2, True),
    
    # Boolean xor
    OP('XorInt', TYPE_INT, 2, True),
    OP('XorBool', TYPE_BOOL, 2, True),
    OP('XorFloat', TYPE_FLOAT, 2, True),
    OP('XorVariant', TYPE_VARIANT, 2, True),
    
    # Boolean not
    OP('NotInt', TYPE_INT, 1, True),
    OP('NotBool', TYPE_BOOL, 1, True),
    OP('NotFloat', TYPE_FLOAT, 1, True),
    OP('NotVariant', TYPE_VARIANT, 1, True),

    # In operator
    OP('InVariant', TYPE_VARIANT, 2),

    # Max operator
    OP('MaxVariant', TYPE_VARIANT, 2),

    # Assign
    OP('AsgnInt', TYPE_INT, 2),
    OP('AsgnFloat', TYPE_FLOAT, 2),
    OP('AsgnBool', TYPE_BOOL, 2),
    OP('AsgnVariant', TYPE_VARIANT, 2),

    # Branch
    OP('Branch', TYPE_VOID, 0),

    # BranchIf
    OP('BranchIf', TYPE_BOOL, 1),

    # CallSelf
    OP('CallSelf', TYPE_VARIANT, -1)

]