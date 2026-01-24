/*
 Exercice 1 – Stack vs Heap
* Déclare une variable locale
* Alloue une variable dynamiquement
* Affiche leurs adresses
* Explique la différence
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int   locale;

    locale = 5;

    int *dynamique = malloc(sizeof(int));
    if (!dynamique)
        return 1;
    printf(" locale (stack) ----> %p \n", (void *) &locale);
    printf(" L'adresse de variable dynamique (stack) ----> %p \n", (void *)&dynamique);
     printf(" L'adresse de la memoire alloue (Heap) ----> %p \n", (void *) dynamique);

    return 0;
}

