extends Node

func test_isinstance():
    var base_t = load("res://base.gd")
    var derived_t = load("res://derived.gd")

    var base = base_t.new()
    print("base is res://base.gd       ? (T) ", base is base_t)
    print("base is res://derived.gd    ? (F) ", base is derived_t)

    var derived = derived_t.new()
    print("derived is res://base.gd    ? (T) ", derived is base_t)
    print("derived is res://derived.gd ? (F) ", derived is derived_t)
    print("derived is Vector3          ? (F) ", derived is Vector3)

    var vec = Vector3()
    print("vec is res://base.gd        ? (F) ", vec is base_t)
    print("vec is res://derived.gd     ? (F) ", vec is derived_t)
    print("vec is Vector3              ? (T) ", vec is Vector3)

