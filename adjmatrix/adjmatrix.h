#include <stdbool.h>

typedef struct AdjMatrix AdjMatrix;
struct AdjMatrix
{
    unsigned int dim;     // maximum number of nodes
    int* edges;  // array containing the adjacency matrix
};

AdjMatrix am_create(unsigned int dim);
AdjMatrix am_build_from_band(unsigned int dim, unsigned int bandwidth);

unsigned int am_index(AdjMatrix* adjmat, unsigned int from, unsigned int to);

void am_add_edge(AdjMatrix* adjmat, unsigned int from, unsigned int to);
void am_remove_edge(AdjMatrix* adjmat, unsigned int from, unsigned int to);
bool am_test_edge(AdjMatrix* adjmat, unsigned int from, unsigned int to);

void am_print(AdjMatrix* adjmat);
