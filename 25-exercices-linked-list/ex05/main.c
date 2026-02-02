#include "header.h"

int cmp_int(void *a, void *b) {
    return (*(int *)a == *(int *)b);
}

void print_test_step(char *msg) {
    printf("\n--- %s ---\n", msg);
}

int main(void) {
    t_node *list = NULL;
    int values[] = {10, 20, 30, 40, 50, 6, 6, 70};

    print_test_step("1. Test Ajouts (front/back)");
    add_back(&list, create_node(&values[2], 'i'));
    add_front(&list, create_node(&values[1], 'i'));
    add_back(&list, create_node(&values[3], 'i'));
    print_list(list);
    printf("Taille attendue 3, Taille réelle : %d\n", list_size(list));

    print_test_step("2. Test list_at et get_last");
    t_node *at2 = list_at(list, 1);
    printf("Index 1 (attendu 30) : %d\n", at2 ? *(int *)at2->content : -1);
    printf("Dernier (attendu 40) : %d\n", *(int *)get_last(list)->content);

    print_test_step("3. Test Pop (front/back)");
    pop_front(&list);
    pop_back(&list);
    print_list(list);

    print_test_step("4. Test list_remove_if (Le gros morceau)");
    // On remplit avec des doublons : [30, 6, 6, 70]
    add_back(&list, create_node(&values[5], 'i'));
    add_back(&list, create_node(&values[6], 'i'));
    add_back(&list, create_node(&values[7], 'i'));
    printf("Avant suppression des '6' :\n");
    print_list(list);
    
    int to_remove = 6;
    list_remove_if(&list, &to_remove);
    
    printf("Après suppression (attendu [30, 70]) :\n");
    print_list(list);

    print_test_step("5. Nettoyage final");
    free_list(list);
    printf("Check Valgrind maintenant ! Si '0 errors', tu es prêt pour la colonne de droite.\n");

    return (0);
}