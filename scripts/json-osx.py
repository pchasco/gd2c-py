#!/usr/bin/env python3

import os

godot_path = "/Users/patrick/Development/godot"
gd2c_script_path = "/Users/patrick/Development/gd2c/scripts"
input_path = "/Users/patrick/Development/gd2c/example/source"
output_path = "/Users/patrick/Development/gd2c/example/source"

os.system(f'{godot_path}/bin/godot.osx.tools.64 --no-window -s {gd2c_script_path}/gd2c.gd -Din"{input_path}" -Dout"{output_path}"')
