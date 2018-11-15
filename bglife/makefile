#VERSION = 
CC = /usr/bin/gcc
CFLAGS = -Wall -g # -wall all warnings -g debug infornations

OBJ = stepper.o options.o debug_print.o

main: $(OBJ) main.c
	$(CC) $(CFLAGS) main.c -o main $(OBJ)

#%.o: %.c %.h
#	$(CC) $(CFLAGS) -c $<

stepper.o: stepper.h #no need for *.c - implicit rule,
options.o: options.h debug_print.h
debug_print.o: debug_print.h options.h

#.PHONY	#prevent stuff if a files name is clean 
#clean:
#-rm edit $(OBJ)