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

func diamond_dom(a):
	a = a * 1
	if a == 2:
		a = a * 3
	else:
		a = a * 4
	a = a * 5
	return a

func call_method():
	called_method(1, 2)

func called_method(a, b):
	return a * b

