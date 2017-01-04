#include <stdio.h>
#include "adjmatrix.h"

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

    // test edges:
    bool success;
    success = am_test_edge(&blank, 0, 0); if (!success) return 1;
    success = am_test_edge(&blank, 0, 1); if (!success) return 1;
    success = am_test_edge(&blank, 2, 1); if (!success) return 1;
    success = am_test_edge(&blank, 9, 0); if (success) return 1;
    success = am_test_edge(&blank, 0, 9); if (success) return 1;

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

    printf("==============================\n");
    printf("All Tests done.\n");
    return 0;
}
