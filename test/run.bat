gcc -fPIC -c -DBUILDING_EXAMPLE_DLL trans.c
gcc -shared -o libtrans.dll trans.o -Wl,--out-implib=libtrans.a
copy libtrans.dll ..\thirdparty\windows\include\libtrans.dll
copy libtrans.a ..\thirdparty\windows\include\libtrans.a
copy trans.h ..\thirdparty\windows\lib\trans.h
pause