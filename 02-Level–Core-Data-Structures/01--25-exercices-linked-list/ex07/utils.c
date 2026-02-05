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
    if (!new_node)
        return;
    if (!list || !(*list))
        *list = new_node;
    else
    {
        tmp = *list;
        while (tmp->next)
            tmp = tmp->next;
        tmp->next = new_node;
    }
}
void pull_front(t_node **list)
{
    t_node *head;
    if (!list || !(*list))
        return;
    head = (*list)->next;
    free(*list);
    *list = head;
}
void pull_back(t_node **list)
{
    t_node *current;
    if (!list || !(*list))
        return;
    if ((*list)->next == NULL)
    {
        free(*list);
        *list = NULL;
    }
    else
    {
        current = *list;
        while (current->next->next)
            current = current->next;
        free(current->next);
        current->next = NULL;
    }
}
void free_list(t_node **list)
{
    if (!list || !(*list))
        return;
    t_node *current;
    t_node *tmp;

    current = *list;
    while (current)
    {
        tmp = current->next;
        free(current);
        current = tmp;
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
void list_remove_if(t_node **list, void *content)
{
    t_node *current;
    t_node *prev;
    if (!list || !(*list))
        return;
    prev = NULL;
    current = *list;
    while (current)
    {
        if (content && current->content && *(int *)current->content == *(int *)content)
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
        else if (content && current->content && (strcmp((char *)current->content, (char *)content) == 0))
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
}
void reverse_list(t_node **list)
{
    if (!list || !(*list) || !(*list)->next)
        return;
    t_node *current;
    t_node *prev;
    t_node *next;

    current = *list;
    prev = NULL;
    while (current)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *list = prev;
}
void print_list(t_node *list)
{
    int i;

    i = 0;
    if (!list)
    {
        printf("La liste est vide.\n");
        return;
    }
    while (list)
    {
        if (list->content && list->type == 'i')
        {
            printf("Noeud (%d):[%d]--->", i, *(int *)list->content);
            if (!list->next)
                printf("[NULL]\n");
        }
        else if (list->content && list->type == 's')
        {
            printf("Noeud (%d):[%s]--->", i, (char *)list->content);
            if (!list->next)
                printf("[NULL]\n");
        }
        else if (list->content == NULL)
        {
            printf("Noeud (%d):[NULL]--->", i);
            if (!list->next)
                printf("[NULL]\n");
        }
        list = list->next;
        i++;
    }
}
void list_rotate_right(t_node **list, int k)
{
    t_node *current;
    t_node *new_head;
    t_node *current_2;
    int rotate;
    int i;

    if (!list || !(*list) || !(*list)->next)
        return;
    current = *list;
    i = 0;
    new_head = NULL;
    rotate = k % size_list(*list);
    if (k == 0 || rotate == 0 || rotate == size_list(*list))
        return;
    while(current)
    {
        if (i == (size_list(*list) - rotate))
            break;
        i++;
        current = current->next;
    }
    new_head = current->next;
    current->next = NULL;
    current_2 = new_head;
    while (current_2->next)
        current_2 = current_2->next;
    current_2->next = *list;
    *list = new_head;
}