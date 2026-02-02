#include "header.h"

t_node *create_node(void *content, char type)
{
    t_node *new_node;
    new_node = malloc(sizeof(t_node));
    if(!new_node)
        return NULL;
    new_node->content = content;
    new_node->type = type;
    new_node->next = NULL;
    return (new_node);
}

t_node *add_front(t_node **list, t_node *new_node)
{
    if(!new_node)
        return (*list);
    if (!(*list))
    {
        *list = new_node;
        return (*list);
    }
    new_node->next = (*list);
    *list = new_node;
    return (new_node);
}

void    print_list(t_node *list)
{
    t_node *tmp;
    int i;

    tmp = list;
    i = 1;
    if (!list)
        printf("La liste est vide\n");
    while(tmp)
    {
        if (tmp->type == 'i')
            printf("La valeur dans le noeud %d est: %d\n", i, *(int *)tmp->content);
        else if (tmp->type == 's')
            printf("La valeur dans le noeud %d est: %s\n", i, (char *)tmp->content);
        i++;
        tmp = tmp->next;
    }
}

void    free_list(t_node *list)
{
    t_node *tmp;

    tmp = list;
    while (tmp)
    {
        tmp = list->next;
        free(list);
        list = tmp;
    }
}