#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>

typedef struct s_node
{
    void *content;
    char type;
    struct s_node *next;
} t_node;

t_node *create_node(void *content, char type);
t_node *add_front(t_node **list, t_node *new_node);
void print_list(t_node *list);
void free_list(t_node *list);
t_node *add_back(t_node **list, t_node *new_node);
t_node *get_last(t_node *list);

#endif