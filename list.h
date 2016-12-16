#include <stdbool.h>

struct Node{
    int element;
    struct Node* next;
};

struct LinkedList{
    struct Node* head;
    struct Node* tail;
};

struct LinkedList create_list(void);
void clear_list(struct LinkedList* list);
bool is_empty(struct LinkedList* list);
bool has_elements(struct LinkedList* list);

void print_list(struct LinkedList* list);

void add_element(struct LinkedList* list, int elem);
bool delete_element(struct LinkedList* list, int elem);
