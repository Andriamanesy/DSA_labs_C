#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>

typedef struct s_node{
    void *content;
    struct s_node *next;
    char type;
}t_node;

t_node *create_node(void *content, char type);
t_node *add_front(t_node **list, t_node *new_node);
void    print_list(t_node *list);
void    free_list(t_node *list);
#endif