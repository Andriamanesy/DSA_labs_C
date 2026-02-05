/*
Le concept de l'ex02 :

    Crée une boucle qui alloue de la mémoire à chaque tour.

    Écrase le pointeur précédent avec la nouvelle allocation sans faire de free.

    Utilise Valgrind pour voir l'OS pleurer.
 * */
#include <stdlib.h>

int main(void)
{
    int i;
    i = 1;
    char *str= malloc(sizeof(char));
    free(str);
    while(i < 10)
    {
        str = malloc(sizeof(char) * i);
        free(str); // sans cette free il a encore leaks
        i++;
    }
    //free(str); // qui créer Invalid read of size double free
    return (0);
}
/*
Le resultat de valgrind:
==309113== Memcheck, a memory error detector
==309113== Copyright (C) 2002-2024, and GNU GPL'd, by Julian Seward et al.
==309113== Using Valgrind-3.24.0 and LibVEX; rerun with -h for copyright info
==309113== Command: ./solution
==309113== 
==309113== 
==309113== HEAP SUMMARY:
==309113==     in use at exit: 46 bytes in 10 blocks
==309113==   total heap usage: 10 allocs, 0 frees, 46 bytes allocated
==309113== 
==309113== LEAK SUMMARY:
==309113==    definitely lost: 46 bytes in 10 blocks
==309113==    indirectly lost: 0 bytes in 0 blocks
==309113==      possibly lost: 0 bytes in 0 blocks
==309113==    still reachable: 0 bytes in 0 blocks
==309113==         suppressed: 0 bytes in 0 blocks
==309113== Rerun with --leak-check=full to see details of leaked memory
==309113== 
==309113== For lists of detected and suppressed errors, rerun with: -s
==309113== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
*/