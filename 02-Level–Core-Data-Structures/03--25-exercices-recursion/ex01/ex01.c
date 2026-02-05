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
    int *mal = malloc(sizeof(int));
    if (!mal)
        return 1;
    *(mal) = 2;
    printf("Avant free --> %d \n", *(mal));
    free(mal);
    printf("Après free --> %d \n", *(mal));


}
