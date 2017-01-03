#include <stdio.h>
#include "adjmatrix/adjmatrix.h"

int main()
{
    const unsigned int DIM = 10;
    const unsigned int BANDWIDTH = 7;

    // create blank adjacency matrix:
    AdjMatrix blank = am_create(DIM);
    am_print(&blank);
    printf("\n");

    // add edges:
    am_add_edge(&blank, 0, 0);
    am_add_edge(&blank, 0, 1);
    am_add_edge(&blank, 2, 1);
    am_print(&blank);
    printf("\n");

    // remove edges:
    am_remove_edge(&blank, 0, 0);
    am_remove_edge(&blank, 0, 1);
    am_remove_edge(&blank, 2, 1);
    am_print(&blank);
    printf("\n");

    // create adjacency matrix from bandwidth:
    AdjMatrix band = am_build_from_band(DIM, BANDWIDTH);
    am_print(&band);
    printf("\n");

    return 0;
}
