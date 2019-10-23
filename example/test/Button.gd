extends Button

func _on_Button_pressed():
	var t = preload("res://test.gdns").new()
	t.test_isinstance()
