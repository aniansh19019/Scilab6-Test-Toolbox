main: main.o trans.o
	gcc -o main main.o trans.o

trans.o: trans.c
	gcc -c -o trans.o trans.c

main.o: main.c
	gcc -c -o main.o main.c

clean:
	rm -f main main.o trans.o