main: main.o libtrans.so
	gcc -L$(shell pwd) -Wl,-rpath=$(shell pwd) -o main main.c -ltrans -g

libtrans.so: trans.o
	gcc -shared -o libtrans.so trans.o

trans.o: trans.c
	gcc -fPIC -c -o trans.o trans.c

clean:
	rm -f main main.o trans.o libtrans.so