CC = gcc
all : selection

selection : selection.c
	$(CC) -o selection selection.c	
