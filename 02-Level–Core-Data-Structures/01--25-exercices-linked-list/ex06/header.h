#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_node
{
    void *content;
    char type;
    struct s_node *next;
} t_node;

t_node *create_node(void *content, char type);
void add_front(t_node **list, t_node *new_node);
void add_back(t_node **list, t_node *new_node);
void pull_front(t_node **list);
void pull_back(t_node **list);
void print_list(t_node *list);
void free_list(t_node **list);
t_node *get_last(t_node *list);
t_node *list_remove_if(t_node **list, void *content);
void list_reverse(t_node **list);
int size_list(t_node *list);

#endif