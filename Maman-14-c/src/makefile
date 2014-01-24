assembler : assembler.o file.o
	gcc -g -Wall -ansi -pedantic assembler.o file.o -o assembler
	
assembler.o : assembler.c assembler.h
	gcc -c -Wall -ansi -pedantic assembler.c -o assembler.o

file.o : file.c file.h
	gcc -c -Wall -ansi -pedantic file.c -o file.o