#include <stdlib.h>
#include <stdio.h>
#include "adjmatrix.h"

AdjMatrix am_create(unsigned int dim)
{
    AdjMatrix adjmat;
    adjmat.dim = dim;
    int* edges = malloc(sizeof(int) * dim * dim);
    adjmat.edges = edges;
    return adjmat;
}

AdjMatrix am_build_from_band(unsigned int dim, unsigned int bandwidth)
{
    // create blank adjacency matrix:
    AdjMatrix adjmat = am_create(dim);

    // fill adjacency matrix with edges according to bandwidth:
    if (bandwidth % 2 == 0) {  // check if bandwidth is even
        return adjmat;
    }
    else {  // bandwidth is odd
        unsigned int row, col, index;
        unsigned int dist = (bandwidth - 1) / 2;  // distance from diagonal
        for (row = 0; row < adjmat.dim; ++row) {
            for (col = 0; col < adjmat.dim; ++col) {
                if (col - row <= dist || row - col <= dist) {
                    am_add_edge(&adjmat, row, col);
                }
            }
        }
        return adjmat;
    }
}

unsigned int am_index(AdjMatrix* adjmat, unsigned int from, unsigned int to)
{
    return from * adjmat->dim + to;
}

void am_add_edge(AdjMatrix* adjmat, unsigned int from, unsigned int to)
{
    unsigned int index = am_index(adjmat, from, to);
    adjmat->edges[index] = 1;
}

void am_remove_edge(AdjMatrix* adjmat, unsigned int from, unsigned int to)
{
    unsigned int index = am_index(adjmat, from, to);
    adjmat->edges[index] = 0;
}

bool am_test_edge(AdjMatrix* adjmat, unsigned int from, unsigned int to)
{
    unsigned int index = am_index(adjmat, from, to);
    int edge = adjmat->edges[index];
    if (edge == 0) {
        return false;
    }
    else {  // edge != 0
        return true;
    }
}

void am_print(AdjMatrix* adjmat)
{
    unsigned int row, col, index;
    for (row = 0; row < adjmat->dim; ++row) {
        for (col = 0; col < adjmat->dim; ++col) {
            index = am_index(adjmat, row, col);
            printf("%d ", adjmat->edges[index]);
        }
        printf("\n");
    }
}
