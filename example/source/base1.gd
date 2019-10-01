extends Node2D

func test_default(s = "hi"):
	print(s)

func diamond_dom(a):
	a = a * 1
	if a == 2:
		a = a * 3
	else:
		a = a * 4
	a = a * 5
	return a

var arr = [1, 2]

func test_iterate():
	for a in arr:
		print(a)