#include "header.h"
#include <stdio.h>
#include <string.h>

void print_header(char *title) {
    printf("\n--- %s ---\n", title);
}

int main(void) {
    t_node *list = NULL;
    
    // Données de test
    int n1 = 10, n2 = 20, n3 = 30, to_del = 20;
    char *s1 = "Hello", *s2 = "World";

    print_header("1. AJOUTS (Front & Back)");
    add_back(&list, create_node(&n2, 'i'));   // [20]
    add_front(&list, create_node(&n1, 'i'));  // [10, 20]
    add_back(&list, create_node(&n3, 'i'));   // [10, 20, 30]
    add_back(&list, create_node(s1, 's'));    // [10, 20, 30, "Hello"]
    print_list(list);

    print_header("2. INFOS (Size & Last)");
    printf("Taille: %d\n", size_list(list));
    t_node *last = get_last(list);
    if (last) printf("Dernier noeud: %s\n", (char *)last->content);

    print_header("3. PULL (Front & Back)");
    pull_front(&list); // Supprime 10 -> [20, 30, "Hello"]
    pull_back(&list);  // Supprime "Hello" -> [20, 30]
    print_list(list);

    print_header("4. REMOVE_IF (Supprimer 20)");
    list_remove_if(&list, &to_del); // Reste [30]
    print_list(list);

    print_header("5. REVERSE (Inversion)");
    // On rajoute quelques éléments pour voir l'effet
    int n4 = 40, n5 = 50;
    add_back(&list, create_node(&n4, 'i')); // [30, 40]
    add_back(&list, create_node(&n5, 'i')); // [30, 40, 50]
    printf("Avant: "); print_list(list);
    list_reverse(&list);
    printf("Après (Attendu 50, 40, 30): "); 
    print_list(list);

    print_header("6. FREE & VALGRIND");
    free_list(&list);
    if (list == NULL)
        printf("Liste libérée avec succès.\n");

    return (0);
}