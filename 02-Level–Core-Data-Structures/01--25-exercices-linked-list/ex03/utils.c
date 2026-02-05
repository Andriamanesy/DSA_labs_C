#include "header.h"

t_node *create_node(void *content, char type)
{
    t_node *new_node;

    new_node = malloc(sizeof(t_node));
    if (!new_node)
        return NULL;
    new_node->content = content;
    new_node->type = type;
    new_node->next = NULL;
    return (new_node);
}

t_node *add_front(t_node **list, t_node *new_node)
{
    if (!new_node)
    {
        *list = new_node;
        return (*list);
    }
    new_node->next = (*list);
    *list = new_node;
    return (new_node);
}

t_node *add_back(t_node **list, t_node *new_node)
{
    if (!(*list))
    {
        *list = new_node;
        return (*list);
    }
    if (!new_node)
        return (*list);
    t_node *tmp;
    tmp = *list;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = new_node;
    return (new_node);
}

t_node *get_last(t_node *list)
{
    t_node *last;

    if (!list)
        return NULL;
    last = list;
    while (last->next)
        last = last->next;
    return (last);
}

void print_list(t_node *list) 
{
    int i = 1;

    if (!list)
        printf("La liste est vide\n");
    while (list)
    {
        if (list->type == 'i')
            printf("Valeur %d : %d\n", i, *(int *)list->content);
        else if (list->type == 's')
            printf("Valeur %d : %s\n", i, (char *)list->content);
        list = list->next;
        i++;
    }
}

void free_list(t_node *list)
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

int list_size(t_node *list)
{
    int i;
    t_node *tmp;

    i = 0;
    tmp = list;
    while (tmp)
    {
        i++;
        tmp = tmp->next;
    }
    return (i);
}

t_node *list_at(t_node *list, int index)
{
    int i;

    i = 0;
    while (list && (i < index))
    {
        list = list->next;
        i++;
    }
    return (list);
}