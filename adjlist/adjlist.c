#include <stdlib.h>
#include "adjlist.h"

AdjList create_adjlist(int dim)
{
    AdjList adjlist;
    adjlist.dim = dim;
    int* neighbors = malloc(sizeof(int) * dim);  // FIXME: LinkedList* ?
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

AdjList build_adjlist_from_band(int dim, int bandwidth)
{
    AdjList adjlist = create_adjlist(dim);
    // TODO: add edges according to bandwidth
    return adjlist;
}
