set godot_path=C:\Development\repos\godot
set build_path=example\out
set gd2c_path=gd2c\targets\_gdnative\include
set output_path=example\test

rem python gd2c.py > .\build\project.c
cl /c /DEBUG /nologo /EHsc /DNDEBUG /MD /I%gd2c_path% /I%godot_path%\modules\gdnative\include /I%godot_path%\platform\windows %build_path%\godotproject.c /Fo%build_path%\godotproject.obj /Fa%build_path%\godotproject.asm 
link /nologo /dll /out:%build_path%\godotproject.dll /implib:%build_path%\godotproject.lib %build_path%\godotproject.obj
copy %build_path%\godotproject.dll %output_path%