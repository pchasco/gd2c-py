extends Node2D

# signal signal1
# signal signal2

#var member1: int = 0
#var member2 = "string"
var direction: float = 1

func _physics_process(delta: float):
	do_actual_stuff(delta)

func do_actual_stuff(delta: float):
	position.x += 100 * delta * direction
	position.y += 100 * delta * direction

	if position.x > 500:
		direction = -1
	elif position.x < 100:
		direction = 1

# func diamond_dom(a):
# 	a = a * 1
# 	if a == 2:
# 		a = a * 3
# 	else:
# 		a = a * 4
# 	a = a * 5
# 	return a

#func call_method(b):
#    called_method(1, b)

#func called_method(a, b):
# 	b = 1
# 	return a * b

#func natural_loop():
# 	var a = 0
# 	while a < 10:
# 		a += 1

#func nested_loop():
#	var b = 0
#	while b < 10:
#		var a = 0
#		while a < 10:
#			a += 1
#		b += 1

#func with_defargs(a, b = 1, c = 2):
#	return a + b + c

#func godot_array_set(arr):
#	arr[0] = 0

#func godot_array_get(arr):
#	return arr[0]

#func godot_set_named():
#	member1 = 0

#func godot_get_named():
#	return member1

#func godot_construct_array():
#	var arr = [0, 1, 2]
