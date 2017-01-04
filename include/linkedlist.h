#include <stdbool.h>


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
