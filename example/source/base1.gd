extends Node2D

# signal signal1
# signal signal2

# var member1: int = 0
# var member2 = "string"

# const const1: int = 0
# const const2 = "string"

# func _init():
# 	var a = 1
# 	var b = 2

# func diamond_dom(a):
# 	a = a * 1
# 	if a == 2:
# 		a = a * 3
# 	else:
# 		a = a * 4
# 	a = a * 5
# 	return a

# func call_method(b):
# 	called_method(1, b)

# func called_method(a, b):
# 	b = 1
# 	return a * b

# func natural_loop():
# 	var a = 0
# 	while a < 10:
# 		a += 1

func nested_loop():
	var b = 0
	while b < 10:
		var a = 0
		while a < 10:
			a += 1
		b += 1
