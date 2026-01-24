"""
Exercice 8 — Triangle d’étoiles
Objectif : Boucles imbriquées + logique.

Consigne :
Demande un nombre n.
Affiche un triangle croissant :
Exemple pour n = 4 :
*
**
***
****
"""
n = int(input("Entre la hauteur de votre triangle: "))
for i in range(1, n+1):
    for j in range(1, i+1):
        print("*", end=" ")
    print("")