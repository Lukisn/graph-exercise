#include "list.h"


int main(void)
{
    struct LinkedList list;
    list = create_list();

    print_list(&list);

    add_element(&list, 3);
    add_element(&list, 5);
    add_element(&list, 1);
    add_element(&list, 6);
    add_element(&list, 7);
    add_element(&list, 2);


    print_list(&list);


    return 0;
}
