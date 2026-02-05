#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>

typedef struct s_node
{
    void *content;
    struct s_node *next;
}t_node;

t_node *create_node(void *content);

#endif