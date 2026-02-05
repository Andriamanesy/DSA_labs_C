/*
Écris une fonction void crash_me(int i) qui s'appelle elle-même en boucle, et
regarde à quel niveau de récursion ton programme s'arrête.
C'est ce qui arrive quand un algorithme (comme un tri récursif mal codé) devient fou.
*/
#include <stdio.h>

void    crash_me(int i)
{
    if(i % 1000 == 0)
        printf("Profondeur : %d\n", i);
    crash_me(i + 1);
}
int main(void)
{
    crash_me(1);
    return 0;
}

/*
2. Le dépassement progressif (Récursif)
C'est ce que tu as vu avec ta fonction crash_me. Chaque appel ne prend que quelques octets, mais ils s'accumulent.
C'est le danger des algorithmes de tri (QuickSort) ou
de recherche sur des très grands jeux de données : si la récursion est trop profonde, tu satures la pile.

3. Les erreurs générées
Le problème, c'est que ces erreurs sont parfois silencieuses ou trompeuses :
    Segmentation Fault : C'est le cas le plus "propre", l'OS tue le programme.
    Corruption de données : Parfois, la pile déborde sur une autre zone mémoire sans crash immédiat,
    et ton programme commence à avoir un comportement erratique (des variables qui changent de valeur toutes seules).

La solution de l'ingénieur

Pour éviter cela, dès que tu manipules des données dont tu ne connais pas la taille à l'avance,
ou des données dépassant quelques Ko, utilise la Heap :

Situation,Choix,Raison
"Petite variable, compteur, petit buffer",Stack,"Très rapide, pas besoin de free."
"Grand tableau, structure complexe, fichier chargé en RAM",Heap (malloc),Limité uniquement par ta RAM totale (ex: 16 Go).

*/