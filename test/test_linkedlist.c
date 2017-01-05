#include <stdio.h>
#include "linkedlist.h"


int main(void)
{
    bool success;

    /**************************************************************************
     * Linked List                                                            *
     **************************************************************************/
    printf("Testing LinkedList:\n");

    // creating list:
    LinkedList list = ll_create();
    ll_print(&list);
    printf(
        "is_empty? -> %d; has_elements? -> %d\n",
        ll_is_empty(&list), ll_has_elements(&list)
    );

    // adding elements:
    ll_add(&list, 3);
    ll_add(&list, 5);
    ll_add(&list, 1);
    ll_add(&list, 4);
    ll_add(&list, 6);
    ll_add(&list, 7);
    ll_add(&list, 2);
    ll_print(&list);
    printf(
        "is_empty? -> %d; has_elements? -> %d\n",
        ll_is_empty(&list), ll_has_elements(&list)
    );

    // testing for elements:
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


    /**************************************************************************
     * Linked List Double                                                     *
     **************************************************************************/
    printf("Testing LinkedListDouble:\n");

    // creating list:
    LinkedListDouble listd = lld_create();
    lld_print(&listd);
    printf(
        "is_empty? -> %d; has_elements? -> %d\n",
        lld_is_empty(&listd), lld_has_elements(&listd)
    );

    // adding elements:
    lld_add(&listd, 3.1);
    lld_add(&listd, 5.2);
    lld_add(&listd, 1.3);
    lld_add(&listd, 4.4);
    lld_add(&listd, 6.5);
    lld_add(&listd, 7.6);
    lld_add(&listd, 2.7);
    lld_print(&listd);
    printf(
        "is_empty? -> %d; has_elements? -> %d\n",
        lld_is_empty(&listd), lld_has_elements(&listd)
    );

    // testing for elements:
    success = lld_test(&listd, 5.2); if (!success) return 1;  // inner
    success = lld_test(&listd, 7.6); if (!success) return 1; // inner
    success = lld_test(&listd, 3.1); if (!success) return 1; // head
    success = lld_test(&listd, 2.7); if (!success) return 1; // tail
    success = lld_test(&listd, 99.9); if (success) return 1; // unknown element
    success = lld_test(&listd, -99.9); if (success) return 1; // unknown element

    // deleting elements:
    lld_remove(&listd, 5.2);  // inner
    lld_remove(&listd, 7.6);  // inner
    lld_remove(&listd, 3.1);  // head
    lld_remove(&listd, 2.7);  // tail
    lld_remove(&listd, 99.9);  // unknown element
    lld_remove(&listd, -99.9);  // unknown element
    lld_print(&listd);

    // clear list:
    lld_clear(&listd);  // clear list containing elements
    lld_clear(&listd);  // clear already empty list
    lld_print(&listd);

    // test one and zero element deletion:
    lld_add(&listd, 42.01);
    lld_print(&listd);
    lld_remove(&listd, 42.01);
    lld_remove(&listd, 42.01);
    lld_print(&listd);

    printf("\n");
    printf("==============================\n");
    printf("All Tests done.\n");
    return 0;
}
