CC=gcc
#CFLAGS=-g

.PHONY:
all: list_test.x adjlist_test.x adjmatrix_test.x

# list:
list_test.x: list_test.o list/list.o
	$(CC) -o $@ $^

list_test.o: list_test.c
	$(CC) -c -o $@ $^ $(CFLAGS)

list/list.o: list/list.c
	$(CC) -c -o $@ $^ $(CFLAGS)

# adjacency list:
adjlist_test.x: adjlist_test.o adjlist/adjlist.o
	$(CC) -o $@ $^

adjlist_test.o: adjlist_test.c
	$(CC) -c -o $@ $^ $(CFLAGS)

adjlist/adjlist.o: adjlist/adjlist.c
	$(CC) -c -o $@ $^ $(CFLAGS)

# adjacency matrix:
adjmatrix_test.x: adjmatrix_test.o adjmatrix/adjmatrix.o
	$(CC) -o $@ $^

adjmatrix_test.o: adjmatrix_test.c
	$(CC) -c -o $@ $^ $(CFLAGS)

adjmatrix/adjmatrix.o: adjmatrix/adjmatrix.c
	$(CC) -c -o $@ $^ $(CFLAGS)

.PHONY:
clean:
	rm -f *.o
	rm -f *.x
