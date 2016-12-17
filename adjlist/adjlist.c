#include <stdlib.h>
#include "adjlist.h"

AdjList create_adjlist(int dim)
{
    AdjList adjlist;
    adjlist.dim = dim;
    int* neighbors = malloc(sizeof(int) * dim);
    adjlist.neighbors = neighbors;

    return adjlist;
}

void add_edge(AdjList* adjlist, int from, int to)
{

}

void remove_edge(AdjList* adjlist, int from, int to)
{

}

void test_edge(AdjList* adjlist, int from, int to)
{

}
