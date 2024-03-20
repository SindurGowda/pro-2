pro1.exe: main.o big3.o fact.o
	gcc -o pro1.exe main.o big3.o fact.o
main.o: main.c
	gcc -c main.c
big3.0: big3.c
	gcc -c big3.c
fact.o: fact.c	

