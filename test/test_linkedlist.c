#include <stdio.h>
#include "linkedlist.h"


int main(void)
{
    // creating list:
    LinkedList list = ll_create();
    ll_print(&list);
    printf("is_empty? -> %d; has_elements? -> %d\n", ll_is_empty(&list), ll_has_elements(&list));

    // adding elements:
    ll_add(&list, 3);
    ll_add(&list, 5);
    ll_add(&list, 1);
    ll_add(&list, 4);
    ll_add(&list, 6);
    ll_add(&list, 7);
    ll_add(&list, 2);
    ll_print(&list);
    printf("is_empty? -> %d; has_elements? -> %d\n", ll_is_empty(&list), ll_has_elements(&list));

    // testing for elements:
    bool success;
    success = ll_test(&list, 5); if (!success) return 1;  // inner
    success = ll_test(&list, 7); if (!success) return 1; // inner
    success = ll_test(&list, 3); if (!success) return 1; // head
    success = ll_test(&list, 2); if (!success) return 1; // tail
    success = ll_test(&list, 99); if (success) return 1; // unknown element
    success = ll_test(&list, -99); if (success) return 1; // unknown element

    // deleting elements:
    ll_remove(&list, 5);  // inner
    ll_remove(&list, 7);  // inner
    ll_remove(&list, 3);  // head
    ll_remove(&list, 2);  // tail
    ll_remove(&list, 99);  // unknown element
    ll_remove(&list, -99);  // unknown element
    ll_print(&list);

    // clear list:
    ll_clear(&list);  // clear list containing elements
    ll_clear(&list);  // clear already empty list
    ll_print(&list);

    // test one and zero element deletion:
    ll_add(&list, 42);
    ll_print(&list);
    ll_remove(&list, 42);
    ll_remove(&list, 42);
    ll_print(&list);

    printf("\n");
    printf("==============================\n");
    printf("All Tests done.\n");
    return 0;
}