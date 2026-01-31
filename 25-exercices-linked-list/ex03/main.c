#include "header.h"

int main(void)
{
    printf("Lab: 25-exercices-linked-list | Exercise: list_size et list_at\n");
    int value = 4;
    int value_2 = 6;
    char *value_3 = "Brian ANDRIAMANESY";
    char *value_4 = "element";
    printf("\nAjout add front \n");
    t_node *list = create_node(&value, 'i');
    add_front(&list, create_node(&value_2, 'i'));
    add_front(&list, create_node(value_3, 's'));
    print_list(list);
    add_back(&list, create_node(value_4, 's'));
    printf("\nApres le add_back\n");
    print_list(list);
    t_node *last = get_last(list);
    printf("\n------get_last----------\n");
    printf("Le dernier element est : %s", (char *)last->content);
    printf("\n La taille de la liste est: %d\n", list_size(list));
    t_node *noeud_index = list_at(list, 0);
    noeud_index->content = "Brian A.";
    printf("\nnoeud recuperer par index et changer le contenue du noeud\n");
    print_list(list);
    free_list(list);
    return 0;
}
