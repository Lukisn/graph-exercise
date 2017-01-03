#include <stdbool.h>
#include "../list/list.h"

typedef struct AdjList AdjList;
struct AdjList
{
    unsigned int dim;  // maximum number of nodes
    LinkedList* neighbors;  // array of lists of neighbors
};

AdjList al_create(unsigned int dim);
AdjList al_build_from_band(unsigned int dim, unsigned int bandwidth);

void al_add_edge(AdjList* adjlist, unsigned int from, unsigned int to);
void al_remove_edge(AdjList* adjlist, unsigned int from, unsigned int to);
bool al_test_edge(AdjList* adjlist, unsigned int from, unsigned int to);

void al_print(AdjList* adjlist);
