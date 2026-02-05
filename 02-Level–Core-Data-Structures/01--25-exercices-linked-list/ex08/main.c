#include "header.h"

int main(void)
{
    int a = 1, b = 6, c = 70, d = 70, e = -2, f = 7;
    t_node *list = NULL;

    printf("1. print avant add: \n");
    print_list(list);
    printf("1. print apres add_front: \n");
    add_front(&list, create_node(&a, 'i'));
    add_front(&list, create_node(&b, 'i'));
    add_front(&list, create_node(&c, 'i'));
    print_list(list);
    printf("2. print apres add_back: \n");
    add_back(&list, create_node(&d, 'i'));
    add_back(&list, create_node(&e, 'i'));
    add_back(&list, create_node(&f, 'i'));
    print_list(list);
    printf("3. print apres pull_front et size_list: \n");
    pull_front(&list);
    print_list(list);
    printf("La taille de la list est: %d\n", size_list(list));
    printf("3. print apres pull_back et size_list: \n");
    pull_back(&list);
    print_list(list);
    printf("La taille de la list est: %d\n", size_list(list));
    printf("4. Test de la fonction get_last:\n");
    t_node *last = get_last(list);
    print_list(last);
    printf("5. print apres add_front et add_back: \n");
    add_front(&list, create_node(&a, 'i'));
    add_front(&list, create_node(&f, 'i'));
    add_front(&list, create_node(&e, 'i'));
    add_back(&list, create_node(&d, 'i'));
    print_list(list);
    printf("6. print apres list_remove_if [70]: \n");
    int z = 70;
    list_remove_if(&list, &z);
    print_list(list);
    printf("7. print apres reverse_list: \n");
    reverse_list(&list);
    print_list(list);
    printf("8. print apres list_rotate_right: k: 2 \n");
    list_rotate_right(&list, 2);
    print_list(list);
    printf("9. print apres sort_list: \n");
    list_sort(&list);
    print_list(list);
    printf("Resultat de valgrind:\n");
    free_list(&list);
    return 0;
}
