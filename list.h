struct Node{
    int element;
    struct Node* next;
};

struct LinkedList{
    struct Node* head;
    struct Node* tail;
};

struct LinkedList create_list(void);
void delete_list(struct LinkedList* list);

void print_list(struct LinkedList* list);

void add_element(struct LinkedList* list, int elem);
