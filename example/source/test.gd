extends Node2D

func test_parameter_copy_uses(a):
    return a

func test_parameter_copy_defs(a):
    a *= 2
    return a

func test_parameter_copy_uses_with_defarg(a=1):
    return a

func test_parameter_copy_defs_with_defarg(a=1, b=2, c=3):
    a *= 2
    return a