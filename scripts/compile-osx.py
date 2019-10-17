#!/usr/bin/env python3

import os

godot_path = "/Users/patrick/Development/godot"
build_path = "example/out"
gd2c_path = "gd2c/targets/_gdnative/include"
output_path = "example/test"

os.system(f"clang -std=c11 -fPIC -fms-extensions -Wno-microsoft-anon-tag -c -Ofast -I{gd2c_path} -I{godot_path}/modules/gdnative/include -I{godot_path}/platform/osx {build_path}/godotproject.c -o {build_path}/godotproject.os -arch x86_64")
os.system(f"clang -dynamiclib {build_path}/godotproject.os -o {output_path}/libgodotproject.dylib -arch x86_64")