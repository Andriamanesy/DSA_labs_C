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
void add_front(t_node **list, t_node *new_node)
{
    if (!new_node)
        return;
    new_node->next = *list;
    *list = new_node;
}
void add_back(t_node **list, t_node *new_node)
{
    t_node *tmp;

    tmp = *list;
    if (!new_node)
        return;
    if (!(*list))
        *list = new_node;
    else
    {
        while (tmp->next)
            tmp = tmp->next;
        tmp->next = new_node;
    }
}
void print_list(t_node *list)
{
    int i;

    i = 1;
    while (list)
    {
        if (list->type == 'i' && list->content)
            printf("Le noeud numero %d contient: %d\n", i, *(int *)list->content);
        else if (list->type == 's' && list->content)
            printf("Le noeud numero %d contient: %s \n", i, (char *)list->content);
        list = list->next;
        i++;
    }
}
int list_size(t_node *list)
{
    int i;

    i = 0;
    while (list)
    {
        i++;
        list = list->next;
    }
    return (i);
}
t_node *get_last(t_node *list)
{
    if (!list)
        return NULL;
    while (list->next)
        list = list->next;
    return list;
}
t_node *list_at(t_node *list, int index)
{
    int i;

    i = 0;
    while (list)
    {
        if (i == index)
            return list;
        list = list->next;
        i++;
    }
    return NULL;
}
void free_list(t_node *list)
{
    t_node *tmp;

    while (list)
    {
        tmp = list->next;
        free(list);
        list = tmp;
    }
}
void pop_front(t_node **list)
{
    t_node *tmp;
    if ((!list) || !(*list))
        return;
    tmp = (*list)->next;
    free(*list);
    *list = tmp;
}
void pop_back(t_node **list)
{
    if ((!list) || !(*list))
        return;
    if ((*list)->next == NULL)
    {
        free(*list);
        *list = NULL;
        return;
    }
    t_node *tmp;
    tmp = *list;
    while (tmp->next->next)
        tmp = tmp->next;
    free(tmp->next);
    tmp->next = NULL;
}
t_node *list_remove_if(t_node **list, void *content)
{
    t_node *tmp;
    t_node *prev;

    tmp = *list;
    prev = NULL;
    if (!list || !(*list))
        return *list;
    while (tmp)
    {
        if (tmp->content && *(int *)(tmp)->content == *(int *)content && tmp->type == 'i')
        {
            if (prev == NULL)
            {
                *list = tmp->next;
                free(tmp);
                tmp = *list;
            }
            else
            {
                prev->next = tmp->next;
                free(tmp);
                tmp = prev->next;
            }
        }
        else if (tmp->content && strcmp((char *)(tmp)->content, (char *)content) == 0 && tmp->type == 's')
        {
            if (prev == NULL)
            {
                *list = tmp->next;
                free(tmp);
                tmp = *list;
            }
            else
            {
                prev->next = tmp->next;
                free(tmp);
                tmp = prev->next;
            }
        }
        else if (tmp->content == NULL && content == NULL)
        {
            if (prev == NULL)
            {
                *list = tmp->next;
                free(tmp);
                tmp = *list;
            }
            else
            {
                prev->next = tmp->next;
                free(tmp);
                tmp = prev->next;
            }
        }
        else
        {
            prev = tmp;
            tmp = tmp->next;
        }
    }
    return *list;
}