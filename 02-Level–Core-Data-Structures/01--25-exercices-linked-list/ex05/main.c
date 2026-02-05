#include "header.h"

#include "header.h"
#include <stdio.h>

void print_simple(t_node *list)
{
    if (!list)
    {
        printf("Liste vide.\n");
        return;
    }
    while (list)
    {
        printf("[%d]", *(int *)list->content);
        if (list->next)
            printf(" -> ");
        list = list->next;
    }
    printf(" -> NULL\n");
}

int main(void)
{
    t_node *list = NULL;
    int values[] = {1, 2, 3, 4, 5};

    printf("--- Test 1 : Liste Vide ---\n");
    reverse_list(&list);
    print_simple(list);

    printf("\n--- Test 2 : Un seul élément ---\n");
    add_back(&list, create_node(&values[0], 'i'));
    reverse_list(&list);
    print_simple(list); // Attendu : [1] -> NULL

    printf("\n--- Test 3 : Liste multiple (1, 2, 3, 4, 5) ---\n");
    // On ajoute le reste
    for (int i = 1; i < 5; i++)
        add_back(&list, create_node(&values[i], 'i'));
    
    printf("Avant inversion : ");
    print_simple(list);
    
    reverse_list(&list);
    
    printf("Après inversion : ");
    print_simple(list); // Attendu : [5] -> [4] -> [3] -> [2] -> [1] -> NULL

    printf("\n--- Nettoyage et Valgrind ---\n");
    free_list(list);
    return (0);
}