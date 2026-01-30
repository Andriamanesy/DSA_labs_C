#include "header.h"

int main(void) {
    printf("Lab: 25-exercices-linked-list | Exercise create node: \n");
    int value;
    t_node *my_node;
    
    value = 42;
    my_node = create_node(&value);

    printf("Le content dans le node est %d et le next est %p\n", *(int*)my_node->content, (void *)my_node->next);
    free(my_node);
    return 0;
}
