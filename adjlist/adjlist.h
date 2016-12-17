#include "../list/list.h"

typedef struct AdjList AdjList;
struct AdjList
{
    int dim;  // maximum number of nodes
    int* neighbors;  // array of lists of neighbors
};

AdjList create_adjlist(int dim);

void add_edge(AdjList* adjlist, int from, int to);
void remove_edge(AdjList* adjlist, int from, int to);
void test_edge(AdjList* adjlist, int from, int to);
