#VERSION = 
CC = /usr/bin/gcc
CFLAGS = -Wall -g # -wall all warnings -g debug infornations

OBJ = linked_list.o

main: $(OBJ)
	$(CC) $(CFLAGS) main.c -o main $(OBJ)

#%.o: %.c %.h
#	$(CC) $(CFLAGS) -c $<

linked_list.o: linked_list.h #no need for *.c - implicit rule

.PHONY	#prevent stuff if a files name is clean 
clean:
	-rm edit $(OBJ)