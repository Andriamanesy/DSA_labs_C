#include "header.h"

t_node *create_node(void *content, char type)
{
    t_node *new_node;

    new_node = malloc(sizeof(t_node));
    if (!new_node)
        return NULL;
    new_node->content = content;
    new_node->next = NULL;
    new_node->type = type;
    return (new_node);
}
t_node *add_front(t_node **list, t_node *new_node)
{
    if (!new_node)
        return (*list);
    if (!(*list))
    {
        *list = new_node;
        return (*list);
    }
    new_node->next = *list;
    *list = new_node;
    return (new_node);
}

void print_list(t_node *list)
{
    int i;
    t_node *tmp;

    i = 1;
    tmp = list;
    if(!list)
        printf("La liste est vide\n");
    else
    {
        while(tmp)
        {
            if (tmp->type == 'i')
                printf("Le noeud numero %d contient %d\n", i, *(int *)tmp->content);
            if (tmp->type == 's')
                printf("Le noeud numero %d contient %s\n", i, (char *)tmp->content);
            i++;
            tmp = tmp->next;
        }
    }
}
void free_list(t_node *list)
{
    t_node *tmp;

    if(!list)
        return ;
    tmp = list;
    while (tmp)
    {
        tmp = list->next;
        free(list);
        list = tmp;
    }
}

t_node *add_back(t_node **list, t_node *new_node)
{
    t_node *tmp;

    if (!(*list))
    {
        *list = new_node;
        return (*list);
    }
    if (!new_node)
        return (*list);
    tmp = *list;
    while(tmp->next)
        tmp = tmp->next;
    tmp->next = new_node;
    return (*list);
}

t_node *get_last(t_node *list)
{
    if (!list)
        return NULL;
    t_node *tmp;

    tmp = list;
    while (tmp->next)
        tmp = tmp->next;
    return (tmp);
}