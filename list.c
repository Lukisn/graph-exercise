#include <stdlib.h>
#include <stdio.h>
#include "list.h"


struct LinkedList create_list()
{
    // setup empty list: (no nodes -> head and tail point to NULL)
    struct LinkedList list;
    list.head = NULL;
    list.tail = NULL;
    return list;
}

void clear_list(struct LinkedList* list)
{
    // setup pointers:
    struct Node* garbage = NULL;  // pointer to node ready for deletion
    struct Node* current = list->head;  // pointer to current node for stepping

    // delete all nodes but the last:
    for (; list->head != list->tail; current = current->next) {
        list->head = current->next;  // advance head pointer to next Node
        garbage = current;  // mark current node for deletion
        free(garbage);  // delete garbage node
    }

    // delete last node:
    list->head = NULL;
    list->tail = NULL;
    free(current);
}

bool is_empty(struct LinkedList* list)
{
    if (list->head == NULL) {  // no nodes -> head points to NULL:
        return true;
    }
    else {  // nodes exist -> head points somewhere:
        return false;
    }
}

bool has_elements(struct LinkedList* list)
{
    return !is_empty(list);
}

void print_list(struct LinkedList* list)
{
    // setup pointer for stepping through the linked list:
    struct Node* current = list->head;

    printf("[");  // opening brace
    // step through the the list to print every entry:
    for (; current != NULL; current = current->next) {
        printf("%d", current->element);  // print list entry
        if (current->next != NULL) {
            printf(", ");  // print comma if there are more elements
        }
    }
    printf("]\n");  // closing brace and new line
}

void add_element(struct LinkedList* list, int elem)
{
    // create new element in the heap:
    struct Node* new_node = malloc(sizeof(struct Node));
    new_node->element = elem;
    new_node->next = NULL;

    // add new element to the linked list by moving the pointers:
    if (is_empty(list)) {  // empty list:
        list->head = new_node;
        list->tail = new_node;
    }
    else {  // list already contains elements:
        struct Node* last = list->tail;  // get current last element of the list
        last->next = new_node;
        list->tail = new_node;
    }
}

bool delete_element(struct LinkedList* list, int elem)
{
    // setup pointers for stepping through the list:
    struct Node* previous = NULL;
    struct Node* current = list->head;

    if (is_empty(list)) {  // empty list, nothing to delete
        return false;
    }
    else {  // list contains elements
        // step through list to find node containing elem:
        for (; current != NULL; previous = current, current = current->next) {
            if (current->element == elem) {
                if (current == list->head) {
                    list->head = current->next;
                    free(current);
                }
                else if (current == list->tail) {
                    list->tail = previous;
                    free(current);
                }
                else {  // current is inner node
                    previous->next = current->next;
                    free(current);
                }
            }  // else: do nothing and continue
        }
    }
    return true;
}
