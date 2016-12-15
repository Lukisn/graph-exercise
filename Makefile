CC=gcc

list_test.x: list_test.o list.o
	$(CC) -o list_test.x list_test.o list.o

list_test.o: list_test.c
	$(CC) -c -o list_test.o list_test.c

list.o: list.c
	$(CC) -c -o list.o list.c

clean:
	rm -f *.o
	rm -f *.x
