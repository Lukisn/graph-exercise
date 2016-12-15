#include <stdlib.h>
#include <stdio.h>
#include "list.h"


struct LinkedList create_list()
{
    printf("creating list.\n");

    struct LinkedList list;
    list.head = NULL;
    list.tail = NULL;
    return list;
}

void clear_list(struct LinkedList* list)
{
    printf("clearing list <%p>.\n", list);

    // TODO: ...
}

void print_list(struct LinkedList* list)
{
    printf("printing list <%p>.\n", list);

    struct Node* current_node = list->head;

    printf("[");
    while (current_node != NULL) {
        printf("%d", current_node->element);
        if (current_node->next != NULL) {
            printf(", ");
        }
        current_node = current_node->next;
    }
    printf("]\n");
}

void add_element(struct LinkedList* list, int elem)
{
    printf("adding element %d to list <%p>.\n", elem, list);

    // create new element in the heap:
    struct Node* new_node = malloc(sizeof(struct Node));
    new_node->element = elem;
    new_node->next = NULL;

    // add new element to the linked list by moving the pointers:
    if (list->head == NULL) {  // empty list
        list->head = new_node;
        list->tail = new_node;
        printf("list.head %p\n", list->head);
    }
    else {  // list already contains elements
        struct Node* last = list->tail;
        last->next = new_node;
        list->tail = new_node;
    }
}

bool delete_element(struct LinkedList* list, int elem)
{
    printf("deleting element %d from list <%p>.\n", elem, list);

    // TODO: 
}
