#include <stdbool.h>

/******************************************************************************
 * Linked List                                                                *
 ******************************************************************************/
typedef struct Node Node;
struct Node
{
    int element;
    Node* next;
};

typedef struct LinkedList LinkedList;
struct LinkedList
{
    Node* head;
    Node* tail;
};

LinkedList ll_create();
void ll_clear(LinkedList* list);
bool ll_is_empty(LinkedList* list);
bool ll_has_elements(LinkedList* list);

void ll_add(LinkedList* list, int elem);
bool ll_remove(LinkedList* list, int elem);
bool ll_test(LinkedList* list, int elem);

void ll_print(LinkedList* list);


/******************************************************************************
 * Linked List Double                                                         *
 ******************************************************************************/
typedef struct NodeDouble NodeDouble;
struct NodeDouble
{
    double element;
    NodeDouble* next;
};

typedef struct LinkedListDouble LinkedListDouble;
struct LinkedListDouble
{
    NodeDouble* head;
    NodeDouble* tail;
};

LinkedListDouble lld_create();
void lld_clear(LinkedListDouble* list);
bool lld_is_empty(LinkedListDouble* list);
bool lld_has_elements(LinkedListDouble* list);

void lld_add(LinkedListDouble* list, double elem);
bool lld_remove(LinkedListDouble* list, double elem);
bool lld_test(LinkedListDouble* list, double elem);

void lld_print(LinkedListDouble* list);
