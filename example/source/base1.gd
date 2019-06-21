extends Node2D

signal signal1
signal signal2

var member1: int = 0
var member2 = "string"

const const1: int = 0
const const2 = "string"

func _init():
	var a = 1
	var b = 2

func method1(parameter1: int, parameter2: String) -> float:
	return 0.0

func if_not_nested(parameter1: int):
	if parameter1 > 0:
		parameter1 = 1
	return parameter1

func if_else(parameter1: int):
	if parameter1 > 0:
		parameter1 = 1
		if parameter1 == 2:
			parameter1 = 3
	else:
		parameter1 = -1
	return parameter1

func diamond_dom(a):
	a = a * 1
	if a == 2:
		a = a * 3
	else:
		a = a * 4
	a = a * 5
	return a

