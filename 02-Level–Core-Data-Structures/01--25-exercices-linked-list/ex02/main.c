#include "header.h"

int main(void) {
    printf("Lab: 25-exercices-linked-list | Exercise: add_back\n");
    int value = 4;
    int value_2 = 6;
    char *value_3 = "Brian ANDRIAMANESY";
    char *value_4 = "add_back";
    t_node *list = create_node(&value, 'i');
    add_front(&list, create_node(&value_2, 'i'));
    add_front(&list, create_node(value_3, 's'));
    print_list(list);
    add_back(&list, create_node(value_4, 's'));
    printf("Apres le add_back\n");
    print_list(list);
    t_node *last = get_last(list);
    print_list(last);
    free_list(list);
    return 0;
}
