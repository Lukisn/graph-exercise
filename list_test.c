#include "list.h"


int main(void)
{
    // creating list:
    struct LinkedList list;
    list = create_list();
    print_list(&list);

    // adding elements:
    add_element(&list, 3);
    add_element(&list, 5);
    add_element(&list, 1);
    add_element(&list, 4);
    add_element(&list, 6);
    add_element(&list, 7);
    add_element(&list, 2);
    print_list(&list);

    // deleting elements:
    delete_element(&list, 5);  // inner
    delete_element(&list, 7);  // inner
    delete_element(&list, 3);  // head
    delete_element(&list, 2);  // tail
    delete_element(&list, 99);  // BOGO!
    delete_element(&list, -99);  // BOGO!
    print_list(&list);

    // clear list:
    clear_list(&list);
    print_list(&list);

    clear_list(&list);
    print_list(&list);

    return 0;
}
