#include "header.h"

int main(void) {
    printf("Lab: 25-exercices-linked-list | Exercise: add_front\n");

    int value;
    int value_2;
    char *value_3;
    t_node *list;

    value = 32;
    value_2 = 5;
    value_3 = "Brian";
    list = create_node(&value, 'i');
    add_front(&list, create_node(&value_2, 'i'));
    add_front(&list, create_node(value_3, 's'));
    print_list(list);
    free_list(list);
    return 0;
}
