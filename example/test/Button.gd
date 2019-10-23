extends Button

var results: Dictionary = {}
var all_tests = [
	"test_new_will_create_new_instance"
]

func _on_runAllButton_pressed():
	run_tests(all_tests)
	
func run_tests(tests):
	results = {}
	for test in tests:
		var fun = funcref(self, test_name)
		results[test] = fun.call_func(test_name)

func begin_tests():
	results = {}

func test_preload_will_load_script():
	var scr = preload("res://test.gdns")
	
func test_new_will_create_new_instance():
	var t = preload("res://test.gdns").new()
	return t != null
	
	

