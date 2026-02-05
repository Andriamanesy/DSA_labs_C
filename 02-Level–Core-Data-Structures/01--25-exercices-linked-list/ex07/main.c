#include "header.h"

int main(void)
{
    t_node *list = NULL;
    int a = 9, b = 4, c = 100, d = 29;
    char *s1 = "Hello", *s2 = "Brian";

    printf("Print_list avant add_front\n");
    print_list(list);
    printf("1. add_front:\n");
    add_front(&list, create_node(&a, 'i'));
    add_front(&list, create_node(&b, 'i'));
    add_front(&list, create_node(&c, 'i'));
    print_list(list);
    printf("2. add_back:\n");
    add_back(&list, create_node(&d, 'i'));
    add_back(&list, create_node(s1, 's'));
    add_back(&list, create_node(s2, 's'));
    print_list(list);
    printf("3. size_list et pull_front\n");
    printf("La taille de la liste est %d\n", size_list(list));
    printf("pull_front:\n");
    pull_front(&list);
    print_list(list);
    printf("La taille de la liste est %d\n", size_list(list));
    printf("pull_back:\n");
    pull_back(&list);
    print_list(list);
    printf("La taille de la liste est %d\n", size_list(list));
    t_node *last = get_last(list);
    printf("get_last est: ");
    print_list(last);
    printf("4. list_remove_if remove 29 et \"Hello\"\n");
    int t1 = 29;
    char *t2 = "Hello";
    list_remove_if(&list, &t1);
    list_remove_if(&list, t2);
    print_list(list);
    printf("5. Renveresez la list: \n");
    reverse_list(&list);
    print_list(list);
    printf("6. Rotate right la list: \n");
    printf("Add_front:\n");
    add_front(&list, create_node(s1, 's'));
    add_front(&list, create_node(&d, 'i'));
    add_front(&list, create_node(s2, 's'));
    print_list(list);
    printf("Rotate right:\n");
    list_rotate_right(&list, 6);
    print_list(list);
    printf("Nettoyage avec free_list, testez avec valgring\n");
    free_list(&list);
    return 0;
}
