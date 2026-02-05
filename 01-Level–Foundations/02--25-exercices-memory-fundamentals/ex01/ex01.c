/*
 *### Exercice 2 – Cycle de vie

* Alloue un entier avec `malloc`
* Modifie sa valeur
* Libère-le
* Explique ce qui se passe après `free`

 * */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *entier = malloc(sizeof(int));
    entier[0] = 9;
    printf("L'adresse de l'entier est: %p et la valeur est: %d (Avant free)\n", (void*) entier, entier[0]);
    free(entier);
    printf("Après le free l'adresse du pointeur est toujours %p\n", (void*)entier);
    entier = NULL;
    printf("Après mise à NULL, l'adresse est: %p\n", (void*) entier);
    return(0);
}