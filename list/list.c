#include <stdlib.h>
#include <stdio.h>
#include "list.h"

LinkedList ll_create()
{
    // setup empty list: (no nodes -> head and tail point to NULL)
    LinkedList list;
    list.head = NULL;
    list.tail = NULL;
    return list;
}

void ll_clear(LinkedList* list)
{
    // setup pointers:
    Node* garbage = NULL;  // pointer to node ready for deletion
    Node* current = list->head;  // pointer to current node for stepping

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

bool ll_is_empty(LinkedList* list)
{
    if (list->head == NULL) {  // no nodes -> head points to NULL:
        return true;
    }
    else {  // nodes exist -> head points somewhere:
        return false;
    }
}

bool ll_has_elements(LinkedList* list)
{
    return !ll_is_empty(list);
}

void ll_add(LinkedList* list, int elem)
{
    // create new element in the heap:
    Node* new_node = malloc(sizeof(Node));
    new_node->element = elem;
    new_node->next = NULL;

    // add new element to the linked list by moving the pointers:
    if (ll_is_empty(list)) {  // empty list:
        list->head = new_node;
        list->tail = new_node;
    }
    else {  // list already contains elements:
        Node* last = list->tail;  // get current last element of the list
        last->next = new_node;
        list->tail = new_node;
    }
}

bool ll_remove(LinkedList* list, int elem)
{
    // setup pointers for stepping through the list:
    Node* previous = NULL;
    Node* current = list->head;

    if (ll_is_empty(list)) {  // empty list, nothing to delete
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

bool ll_test(LinkedList* list, int elem)
{
    // setup pointers for stepping through the list:
    Node* previous = NULL;
    Node* current = list->head;

    if (ll_is_empty(list)) {  // empty list, nothing to delete
        return false;
    }
    else {  // list contains elements
        // step through list to find node containing elem:
        for (; current != NULL; previous = current, current = current->next) {
            if (current->element == elem) {
                return true;  // element found
            }
        }
        return false;  // element not found
    }
}

void ll_print(LinkedList* list)
{
    // setup pointer for stepping through the linked list:
    Node* current = list->head;

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
