#include "header.h"

t_node *create_node(void *content)
{
    t_node *new_node;
    new_node = malloc(sizeof(t_node));
    if (!new_node)
        return (NULL);
    new_node->content = content;
    new_node->next = NULL;
    return (new_node);
}