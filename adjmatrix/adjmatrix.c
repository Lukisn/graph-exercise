#include <stdlib.h>
#include "adjmatrix.h"

AdjMatrix create_adjmatrix(int dim)
{
    AdjMatrix adjmat;
    adjmat.dim = dim;
    int* edges = malloc(sizeof(int) * dim * dim);
    adjmat.edges = edges;

    return adjmat;
}

void add_edge(AdjMatrix* adjmatrix, int from, int to)
{

}

void remove_edge(AdjMatrix* adjmatrix, int from, int to)
{

}

void test_edge(AdjMatrix* adjmatrix, int from, int to)
{

}

AdjMatrix build_adjmatrix_from_band(int dim, int bandwidth)
{
    AdjMatrix adjmat = create_adjmatrix(dim);
    // TODO: add edges according to bandwidth
    return adjmat;
}
