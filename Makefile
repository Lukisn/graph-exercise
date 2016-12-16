CC=gcc
#CFLAGS=-g

.PHONY:
all: list_test.x

list_test.x: list_test.o list.o
	$(CC) -o $@ $^

list_test.o: list_test.c
	$(CC) -c -o $@ $^ $(CFLAGS)

list.o: list.c
	$(CC) -c -o $@ $^ $(CFLAGS)

.PHONY:
clean:
	rm -f *.o
	rm -f *.x