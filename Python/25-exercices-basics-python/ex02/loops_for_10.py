"""
Exercice 10 — Table de multiplication complète
Objectif : Niveau avancé (boucles imbriquées).

Consigne :
Utilise deux boucles for.
Affiche toutes les tables de multiplication de 1 à 10.
Exemple :
1 x 1 = 1
1 x 2 = 2
...
10 x 10 = 100
"""
for i in range(1, 11):
    for j in range(1, 11):
        print(f"{i} X {j} = {i*j}")
    print("")
    j = 0