#include <stdio.h>
#include "list/list.h"


int main(void)
{
    // creating list:
    struct LinkedList list;
    list = create_list();
    print_list(&list);
    printf("is_empty? -> %d; has_elements? -> %d\n", is_empty(&list), has_elements(&list));

    // adding elements:
    add_element(&list, 3);
    add_element(&list, 5);
    add_element(&list, 1);
    add_element(&list, 4);
    add_element(&list, 6);
    add_element(&list, 7);
    add_element(&list, 2);
    print_list(&list);
    printf("is_empty? -> %d; has_elements? -> %d\n", is_empty(&list), has_elements(&list));

    // deleting elements:
    delete_element(&list, 5);  // inner
    delete_element(&list, 7);  // inner
    delete_element(&list, 3);  // head
    delete_element(&list, 2);  // tail
    delete_element(&list, 99);  // unknown element
    delete_element(&list, -99);  // unknown element
    print_list(&list);

    // clear list:
    clear_list(&list);  // clear list containing elements
    clear_list(&list);  // clear already empty list
    print_list(&list);

    // test one and zero element deletion:
    add_element(&list, 42);
    print_list(&list);
    delete_element(&list, 42);
    delete_element(&list, 42);
    print_list(&list);

    return 0;
}
