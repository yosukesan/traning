
CC := gcc
CFLAGS := -g -W -Wall -pedantic -O0 

all: lib_linked_list lib_hash test_list test_hash
	

lib_linked_list: linked_list.c
	$(CC) $(CFLAGS) -c $<

lib_hash: hash.c
	$(CC) $(CFLAGS) -c $<

test_list: test_list.c
	$(CC) $(CFLAGS) -o test_list.out $< linked_list.o

test_hash: test_hash.c
	$(CC) $(CFLAGS) -o test_hash.out $< hash.o linked_list.o

clean:
	rm *.o *.out
