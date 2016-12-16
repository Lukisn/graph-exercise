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

    struct Node* garbage = NULL;
    struct Node* current = list->head;

    // delete all nodes but the last:
    for (; list->head != list->tail; current = current->next) {
        list->head = current->next;  // advance head pointer to next Node
        garbage = current;
        free(garbage);
    }

    // delete last node:
    list->head = NULL;
    list->tail = NULL;
    free(current);
}

bool is_empty(struct LinkedList* list)
{
    //printf("checking emptyness of list <%p>.\n", list);

    if (list->head == NULL) {
        return true;
    }
    else {
        return false;
    }
}

void print_list(struct LinkedList* list)
{
    //printf("printing list <%p>.\n", list);

    struct Node* current_node = list->head;

    printf("[");
    /*// alternative implementation using while:
    while (current_node != NULL) {
        printf("%d", current_node->element);
        if (current_node->next != NULL) {
            printf(", ");
        }
        current_node = current_node->next;  // important!
    }
    */
    for (;current_node != NULL; current_node = current_node->next) {
        printf("%d", current_node->element);
        if (current_node->next != NULL) {
            printf(", ");
        }
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
    if (is_empty(list)) {  // empty list
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

    struct Node* previous = NULL;
    struct Node* current = list->head;

    if (is_empty(list)) {  // empty list, nothing to delete
        return false;
    }
    else {  // list contains elements
        for (; current != NULL; previous = current, current = current->next) {
            //printf("current: <%p>, previous: <%p>\n", current, previous);
            if (current->element == elem) {
                // TODO: delete element:
                if (current == list->head) {
                    list->head = current->next;
                    current->next = NULL;  // ??? needed
                    free(current);
                }
                // FIXME: case head == tail, one element list?!?!
                else if (current == list->tail) {
                    list->tail = previous;
                    previous->next = NULL;
                    free(current);
                }
                else {  // current is inner node
                    previous->next = current->next;
                    current->next = NULL;
                    free(current);
                }
            }
            // else: do nothing and continue
        }
    }
    return true;
}
