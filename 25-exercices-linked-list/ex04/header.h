#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>

typedef struct s_node{
    void *content;
    char type;
    struct s_node *next;
}t_node;

t_node  *create_node(void *content, int type);
t_node  *add_front(t_node **list, t_node *new_node);
t_node  *add_back(t_node **list, t_node *node);
t_node  *get_last(t_node *list);
t_node  *list_at(t_node *list, int index);
void    print_list(t_node *list);
int     list_size(t_node *list);
void    free_list(t_node *list);
t_node  *list_remove_int(t_node **list, int nbr);

#endif