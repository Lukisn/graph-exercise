#include <stdlib.h>
#include "adjlist.h"

AdjList al_create(unsigned int dim)
{
    AdjList adjlist;
    adjlist.dim = dim;
    LinkedList* neighbors = calloc(dim, sizeof(LinkedList));
    // initialize:
    for (int node = 0; node < dim; ++node) {
        LinkedList list = ll_create();
        neighbors[node] = list;
    }
    adjlist.neighbors = neighbors;
    return adjlist;
}

AdjList al_build_from_band(unsigned int dim, unsigned int bandwidth)
{
    AdjList adjlist = al_create(dim);

    // fill adjacency list with edges according to bandwidth:
    if (bandwidth % 2 == 0) {  // check if bandwidth is even
        return adjlist;
    }
    else {  // bandwidth is odd
        unsigned int row, col, index;
        unsigned int dist = (bandwidth - 1) / 2;  // distance from diagonal
        for (row = 0; row < adjlist.dim; ++row) {
            for (col = 0; col < adjlist.dim; ++col) {
                if (col - row <= dist || row - col <= dist) {
                    al_add_edge(&adjlist, row, col);
                }
            }
        }
        return adjlist;
    }
}

void al_add_edge(AdjList* adjlist, unsigned int from, unsigned int to)
{
    ll_add(&(adjlist->neighbors[from]), to);
}

void al_remove_edge(AdjList* adjlist, unsigned int from, unsigned int to)
{
    ll_remove(&(adjlist->neighbors[from]), to);
}

bool al_test_edge(AdjList* adjlist, unsigned int from, unsigned int to)
{
    return ll_test(&(adjlist->neighbors[from]), to);
}

void al_print(AdjList* adjlist)
{
    unsigned int row;
    for (row = 0; row < adjlist->dim; ++row) {
        ll_print(&(adjlist->neighbors[row]));
    }
}
