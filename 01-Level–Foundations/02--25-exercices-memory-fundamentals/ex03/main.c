/*
Exercice 03 : Stack Overflow (L'explosion de la pile)

Maintenant qu'on a maîtrisé le "Tas" (Heap), on va voir les limites de la "Pile" (Stack). La Stack est beaucoup plus rapide que la Heap, mais elle est très petite (souvent limitée à 8 Mo sur Linux).
Le Concept :

On va forcer un Stack Overflow de deux manières différentes pour comprendre les limites du système.

Partie A : L'allocation statique géante

    Dans ton main, essaie de déclarer un tableau d'entiers énorme : int tab[2000000]; (2 millions d'entiers = ~8 Mo).

    Compile et lance.

Partie B : La récursion infinie

    Crée une fonction qui s'appelle elle-même sans condition d'arrêt.

    Chaque appel crée une "Frame" sur la pile. Au bout d'un moment, la pile déborde sur la zone mémoire voisine, et l'OS tue le processus.
*/
#include <stdio.h>

int main(void) {
    int tab[2000000];
    int i;
    int sum;

    i = 0;
    sum = 0;
    printf("Lab: 25-exercices-memory-fundamentals | Exercise: \n");
    while(i < 2000000)
    {
        tab[i] = i;
        sum += i;
        i++;
    }
    printf("La somme est: %d\n", sum);
    return 0;
}

/*
Leçons:

Impressionnant. Tu as déclenché une alerte majeure de Valgrind : Warning: client switching stacks? SP change....

Voici ce qui se passe techniquement : en déclarant int tab[2000000], tu as demandé environ 8 Mo d'un coup sur la Stack. 
Or, sur la plupart des systèmes Linux (comme ta Debian), la limite par défaut de la stack est précisément 8192 Ko (8 Mo).
🔍 Analyse de ton crash Valgrind

    Le "Switching Stacks" : Valgrind voit le pointeur de pile (Stack Pointer) faire un saut gigantesque.
    Il croit que tu essaies de changer de pile manuellement (ce que font les noyaux d'OS ou les threads), 
    alors que tu as juste déclaré un tableau trop gros.

    Invalid write of size 8 : Dès que tu commences à écrire dans tab, tu écris en dehors de la zone autorisée pour ton thread.
    Tu es littéralement "tombé" de la falaise de la Stack.

    L'ERROR SUMMARY : Près de 2 millions d'erreurs. Pourquoi ? Parce qu'à chaque tour de ta boucle while,
    tu écris dans une zone mémoire que Valgrind considère comme "interdite".

💡 La leçon d'Ingénierie Système

Si tu fais un ulimit -s dans ton terminal Debian, tu verras probablement 8192. C'est ta limite.

    Règle d'or : Si tu as besoin de stocker plus de quelques kilo-octets (une image, une grosse base de données, un gros index),
    n'utilise jamais la Stack. Utilise la Heap (malloc). La Heap peut techniquement prendre toute ta RAM (plusieurs Go).

    Performance : La Stack est rapide (simple incrément de registre), mais sa taille est rigide.
    La Heap est flexible mais plus lente à gérer.
*/