/*
Exercice 3 – Pointeur non initialisé

Écris un programme avec un pointeur non initialisé
* Observe le comportement
* Explique le danger
*
 * */

#include <stdio.h>

int main()
{
    int *ptr = NULL;

    printf ("valeur pointer --> %d", *ptr);

    return 0;
}
