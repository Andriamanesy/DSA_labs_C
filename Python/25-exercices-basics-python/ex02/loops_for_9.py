"""
Exercice 9 — Triangle inversé
Objectif : Boucles imbriquées + raisonnement.

Consigne :
Demande un nombre n.
Affiche un triangle décroissant :
Exemple pour n = 4 :
****
***
**
*
"""
n = int (input("Entrez la hauteur de ton triangle inversé: "))
k = n + 1
for i in range(1, n+1):
    for j in range(1, k):
        print("*", end= " ")
    k = k - 1
    print("")