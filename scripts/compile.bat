set godot_path=C:\Development\repos\compiler-changes
set build_path=example\out
set gd2c_path=gd2c\targets\_gdnative\include
set output_path=example\out-bin

rem python gd2c.py > .\build\project.c
rem cl /P /c builtin.cpp project.c /Ox /FA /nologo /EHsc /DNDEBUG /MD /I. /Ic:\development\godot\gd2cpp\godot_headers /Ic:\development\godot\source
rem cl /P /c builtin.cpp /Fo.\build\builtin.obj /Ox /FA /nologo /EHsc /DNDEBUG /MD /I. /Ic:\development\godot\gd2cpp\godot_headers /Ic:\development\godot\source
rem cl /c /DEBUG /nologo /EHsc /DNDEBUG /MD /I%gd2c_path% /I%godot_path%\modules\gdnative\include /I%godot_path%\platform\windows %gd2c_path%\builtin.cpp /Fo%build_path%\builtin.obj /Fa%build_path%\builtin.asm
rem cl /c /DEBUG /nologo /EHsc /DNDEBUG /MD /I%gd2c_path% /I%godot_path%\modules\gdnative\include /I%godot_path%\platform\windows %gd2c_path%\helpers.c /Fo%build_path%\helpers.obj /Fa%build_path%\helpers.asm 
cl /c /DEBUG /nologo /EHsc /DNDEBUG /MD /I%gd2c_path% /I%godot_path%\modules\gdnative\include /I%godot_path%\platform\windows %build_path%\godotproject.c /Fo%build_path%\project.obj /Fa%build_path%\project.asm 
link /nologo /dll /out:%build_path%\project.dll /implib:%build_path%\project.lib %build_path%\builtin.obj %build_path%\helpers.obj %build_path%\godotproject.obj
copy %build_path%\project.dll %output_path%