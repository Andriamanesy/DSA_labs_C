#include "header.h"

int main(void)
{
    t_node  *list = NULL;
    int     v1 = 42, v2 = 6, v3 = 10, v4 = 99;
    char    *s1 = "Brian A.";

    printf("--- 1. Création de la liste ---\n");
    add_back(&list, create_node(&v1, 'i'));   // Index 0: 42
    add_back(&list, create_node(&v2, 'i'));   // Index 1: 6
    add_back(&list, create_node(s1, 's'));    // Index 2: Brian A.
    add_back(&list, create_node(&v3, 'i'));   // Index 3: 10
    print_list(list);
    printf("Taille: %d\n", list_size(list));

    printf("\n--- 2. Test Suppression au MILIEU (le 6) ---\n");
    list_remove_int(&list, 6);
    print_list(list);

    printf("\n--- 3. Test Suppression au DÉBUT (le 42) ---\n");
    list_remove_int(&list, 42);
    print_list(list);

    printf("\n--- 4. Test Suppression d'une valeur inexistante (99) ---\n");
    list_remove_int(&list, 99);
    print_list(list);

    printf("\n--- 5. Nettoyage final ---\n");
    free_list(list);
    printf("Check Valgrind maintenant !\n");

    return (0);
}
