"""
Exercice 6 — Boucle imbriquée simple

Objectif : Comprendre les boucles imbriquées.
Consigne :
Utilise deux boucles for pour afficher :
1 2 3
1 2 3
1 2 3
"""
for i in range(1, 4):
    for j in range(1, 4):
        print(j, end=" ")
    print("")