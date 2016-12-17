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

LinkedList create_list(void);
void clear_list(LinkedList* list);
bool is_empty(LinkedList* list);
bool has_elements(LinkedList* list);

void print_list(LinkedList* list);

void add_element(LinkedList* list, int elem);
bool delete_element(LinkedList* list, int elem);
