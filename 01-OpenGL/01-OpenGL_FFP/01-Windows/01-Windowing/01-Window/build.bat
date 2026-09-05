cl.exe /c /EHsc Window.c


link.exe Window.obj  User32.lib gdi32.lib /SUBSYSTEM:WINDOWS
