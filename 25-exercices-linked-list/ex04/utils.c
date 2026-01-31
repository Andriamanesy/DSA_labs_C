#include "header.h"

t_node  *create_node(void *content, int type)
{
    t_node  *new_node;

    new_node = malloc(sizeof(t_node));
    if (!new_node)
        return NULL;
    new_node->content = content;
    new_node->type = type;
    new_node->next = NULL;
    return (new_node);
}
t_node  *add_front(t_node **list, t_node *new_node)
{
    if (!(*list))
    {
        (*list) = new_node;
        return(*list);
    }
    new_node->next = *list;
    *list = new_node;
    return (new_node);
}
t_node  *add_back(t_node **list, t_node *new_node)
{
    if (!*list)
    {
        (*list) = new_node;
        return (*list);
    }
    if(!new_node)
        return *list;

    t_node *current;
    current = *list;
    while(current->next)
        current = current->next;
    current->next = new_node;
    return (*list);
}
t_node  *get_last(t_node *list)
{
    if (!list)
        return NULL;
    while (list->next)
        list = list->next;
    return (list);
}
t_node  *list_at(t_node *list, int index)
{
    int i;

    i = 0;
    while(list && i < index)
    {
        list = list->next;
        i++;
    }
    return (list);
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
int     list_size(t_node *list)
{
    int i;
    t_node *current;

    i = 0;
    current = list;
    while(current)
    {
        current = current->next;
        i++;
    }
    return (i);
}
void    free_list(t_node *list)
{
    t_node *current;

    current = list;
    while (list)
    {
        current = list->next;
        free(list);
        list = current;
    }
    
}
t_node  *list_remove_int(t_node **list, int nbr)
{
    if (!(*list) || !(list))
        return NULL;
    t_node *current;
    t_node *prev;

    current = *list;
    prev = NULL;
    while (current)
    {
        if (*(int *)current->content == nbr)
        {
            if (prev == NULL)
                *list = current->next;
            else
                prev->next = current->next;
            free(current);
            return (*list);
        }
        prev = current;
        current = current->next;
    }
    return (*list);
}