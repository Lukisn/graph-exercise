#include <stdio.h>
#include "list/list.h"


int main(void)
{
    // creating list:
    struct LinkedList list;
    list = ll_create();
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

    // deleting elements:
    ll_delete(&list, 5);  // inner
    ll_delete(&list, 7);  // inner
    ll_delete(&list, 3);  // head
    ll_delete(&list, 2);  // tail
    ll_delete(&list, 99);  // unknown element
    ll_delete(&list, -99);  // unknown element
    ll_print(&list);

    // clear list:
    ll_clear(&list);  // clear list containing elements
    ll_clear(&list);  // clear already empty list
    ll_print(&list);

    // test one and zero element deletion:
    ll_add(&list, 42);
    ll_print(&list);
    ll_delete(&list, 42);
    ll_delete(&list, 42);
    ll_print(&list);

    return 0;
}
