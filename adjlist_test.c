#include <stdio.h>
#include "adjlist/adjlist.h"

int main()
{
    const unsigned int DIM = 10;
    const unsigned int BANDWIDTH = 7;

    // create blank adjacency matrix:
    AdjList blank = al_create(DIM);
    al_print(&blank);
    printf("\n");

    // add edges:
    al_add_edge(&blank, 0, 0);
    al_add_edge(&blank, 0, 1);
    al_add_edge(&blank, 2, 1);
    al_print(&blank);
    printf("\n");

    // test edges:
    bool success;
    success = al_test_edge(&blank, 0, 0); if (!success) return 1;  // existing edge
    success = al_test_edge(&blank, 0, 1); if (!success) return 1;  // existing edge
    success = al_test_edge(&blank, 2, 1); if (!success) return 1;  // existing edge
    success = al_test_edge(&blank, 9, 0); if (success) return 1;  // non-existing edge
    success = al_test_edge(&blank, 0, 9); if (success) return 1;  // non-existing edge

    // remove edges:
    al_remove_edge(&blank, 0, 0);
    al_remove_edge(&blank, 0, 1);
    al_remove_edge(&blank, 2, 1);
    al_print(&blank);
    printf("\n");

    // create adjacency matrix from bandwidth:
    AdjList band = al_build_from_band(DIM, BANDWIDTH);
    al_print(&band);
    printf("\n");

    printf("==============================\n");
    printf("All Tests done.\n");
    return 0;
}
