typedef struct AdjMatrix AdjMatrix;
struct AdjMatrix
{
    int dim;  // maximum number of nodes
    int* edges;  // array containing the adjacency matrix
};

AdjMatrix create_adjmatrix(int dim);

void add_edge(AdjMatrix* adjmatrix, int from, int to);
void remove_edge(AdjMatrix* adjmatrix, int from, int to);
void test_edge(AdjMatrix* adjmatrix, int from, int to);
