all: a

a: main.c
	gcc -o ./Debug/a main.c lib/libio.s
