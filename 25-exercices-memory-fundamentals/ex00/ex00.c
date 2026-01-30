/*
 Exercice 1 – Stack vs Heap
* Déclare une variable locale
* Alloue une variable dynamiquement
* Affiche leurs adresses
* Explique la différence
 */

#include <stdio.h>
#include <stdlib.h>

int my_global_init = 5;
int my_global_not_init;

size_t  ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
int main(void)
{
    int local = 10;
    char *my_name = "ANDRIAMANESY BRIAN";
    char *str = malloc(sizeof(char) * ft_strlen(my_name));
    printf("-------------------------------------------\n");
    printf("L'adresse de la variable globale initialiser est: %p\n", (void*) &my_global_init);
    printf("L'adresse de la variable globale non initialiser est: %p\n", (void*) &my_global_not_init);
    printf("L'adresse de variable locale int est: %p\n", (void *)&local);
    printf("L'adresse de variable locale char* est: %p\n", (void *)&my_name);
    printf("L'adresse de variable locale char* initialiser en malloc: %p\n", (void *)&str);
    printf("L'adresse de malloc initialiser en char* au dessus: %p\n", (void *)str);
    printf("-------------------------------------------\n");
    return (0);
}

