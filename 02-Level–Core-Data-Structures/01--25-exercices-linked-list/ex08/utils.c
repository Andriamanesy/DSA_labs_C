#include "header.h"

t_node *create_node(void *content, char type)
{
    t_node *new_node;

    new_node = malloc(sizeof(t_node));
    if (!new_node)
        return (NULL);
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
    (*list) = new_node;
}
void add_back(t_node **list, t_node *new_node)
{
    if (!new_node)
        return;
    if (!list || !(*list))
    {
        *list = new_node;
        return;
    }
    t_node *current;
    current = *list;
    while (current->next)
        current = current->next;
    current->next = new_node;
}
void pull_front(t_node **list)
{
    if (!list || !(*list))
        return;
    if ((*list)->next == NULL)
    {
        free(*list);
        *list = NULL;
    }
    t_node *tmp;
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
    }
    t_node *current;
    current = *list;
    while (current->next->next)
        current = current->next;
    current->next = NULL;
    free(current->next);
}
void free_list(t_node **list)
{
    if (!(list) || !(*list))
        return;
    t_node *current;

    current = (*list);
    while (current)
    {
        *list = (*list)->next;
        free(current);
        current = *list;
    }
}

t_node *get_last(t_node *list)
{
    if (!list)
        return NULL;
    while (list->next)
        list = list->next;
    return list;
}

int size_list(t_node *list)
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

void print_list(t_node *list)
{
    if (!list)
        printf("La list est vide\n");
    int i = 0;
    while (list)
    {
        if (list->type == 'i' && list->content)
        {
            printf("[Noeud: %d]-[%d]-->", i, *(int *)list->content);
            if (list->next == NULL)
                printf("[NULL]\n");
        }
        else if (list->type == 's' && list->content)
        {
            printf("[Noeud: %d]-[%d]-->", i, (char *)list->content);
            if (list->next == NULL)
                printf("[NULL]\n");
        }
        else if (list->content == NULL)
        {
            printf("[Noeud: %d]-[NULL]-->\n", i);
            if (list->next == NULL)
                printf("[NULL]\n");
        }
        list = list->next;
        i++;
    }
}
void list_remove_if(t_node **list, void *content)
{
    if (!list || !(*list))
        return;
    t_node *prev;
    t_node *current;
    prev = NULL;
    current = *list;
    while (current)
    {
        if (content && (current)->content && (*(int *)(current)->content == *(int *)content))
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
            current = prev->next;
        }
    }
}

void reverse_list(t_node **list)
{
    if (!list || !(*list) || (*list)->next == NULL)
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
void list_rotate_right(t_node **list, int k)
{
    t_node *current;
    t_node *new_head;
    t_node *tmp;
    int i;

    if (!list || !(*list) || k == 0)
        return;
    int rotate;
    rotate = k % size_list(*list);
    if (k == 0 || rotate == 0 || rotate == size_list(*list))
        return;
    current = *list;
    i = 0;
    while (current)
    {
        if (i == rotate)
            break;
        i++;
        current = current->next;
    }
    new_head = current->next;
    current->next = NULL;
    tmp = new_head;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = *list;
    *list = new_head;
}

void list_sort(t_node **list)
{
    t_node *current;
    t_node *tmp;
    t_node *prev_tmp;
    t_node *prev_current;
    t_node *tmp_2;

    if (!list || !(*list))
        return;
    current = *list;
    prev_current = NULL;
    while (current)
    {
        prev_tmp = current;
        tmp = current->next;
        while (tmp)
        {
            if (current->type == 'i' && tmp->type == 'i' && current->content && tmp->content && *(int *)current->content > *(int *)tmp->content)
            {
                tmp_2 = tmp->next;
                prev_tmp->next = current;
                tmp->next = current->next;
                prev_current = prev_tmp;
                current->next = tmp_2;
                tmp = tmp->next;
                *list = tmp;;
            }
            else
            {
                prev_tmp = tmp;
                tmp = tmp->next;
            }
        }
        prev_current = current;
        current = prev_current->next;
    }
}