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
    return new_node;
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
    t_node *current;
    current = *list;
    if (!new_node)
        return;
    if (!(*list))
        *list = new_node;
    else
    {
        while (current->next)
            current = current->next;
        current->next = new_node;
    }
}
void pull_front(t_node **list)
{
    t_node *tmp;

    if (!list || !(*list))
        return;
    tmp = (*list)->next;
    free(*list);
    *list = tmp;
}
void pull_back(t_node **list)
{
    if (!list || !(*list))
        return;
    if ((*list)->next == NULL)
    {
        free(*list);
        *list = NULL;
        return;
    }
    t_node *current;
    current = *list;
    while (current->next->next)
        current = current->next;
    free(current->next);
    current->next = NULL;
}
void print_list(t_node *list)
{
    int i;

    i = 0;
    if (!list)
        printf("La liste est vide.\n");
    while (list)
    {
        if (list->type == 'i')
            printf("Le noeud numero %d contient %d\n", i, *(int *)list->content);
        else if (list->type == 's')
            printf("Le noeud numero %d contient %s\n", i, (char *)list->content);
        i++;
        list = list->next;
    }
}
void free_list(t_node **list)
{
    t_node *current;

    while (*list)
    {
        current = (*list)->next;
        free(*list);
        *list = current;
    }
}
int size_list(t_node *list)
{
    int i;

    i = 0;
    while (list)
    {
        list = list->next;
        i++;
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
t_node *list_remove_if(t_node **list, void *content)
{
    if (!list || !(*list))
        return NULL;

    t_node *current;
    t_node *prev;

    prev = NULL;
    current = *list;
    while (current)
    {
        if (content && *(int *)current->content == *(int *)content)
        {
            if (prev == NULL)
            {
                *list = current->next;
                free(current);
                current = *list;
            }
            else
            {
                prev->next = current->next;
                free(current);
                current = prev->next;
            }
        }
        else if (content && !(current->content) && strcmp((char *)current->content, (char *)content) == 0)
        {
            if (prev == NULL)
            {
                *list = current->next;
                free(current);
                current = *list;
            }
            else
            {
                prev->next = current->next;
                free(current);
                current = prev->next;
            }
        }
        else if (!content && !(current->content))
        {
            if (prev == NULL)
            {
                *list = current->next;
                free(current);
                current = *list;
            }
            else
            {
                prev->next = current->next;
                free(current);
                current = prev->next;
            }
        }
        else
        {
            prev = current;
            current = current->next;
        }
    }
    return (*list);
}
void list_reverse(t_node **list)
{
    t_node *current;
    t_node *next;
    t_node *prev;

    if (!list || !(*list))
        return ;
    if (! (*list)->next)
        return;
    current = *list;
    prev = NULL;
    while(current)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *list = prev;
}