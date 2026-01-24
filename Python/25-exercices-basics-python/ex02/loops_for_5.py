"""
Exercice 5 — Table de multiplication

Objectif : Application pratique de for.
Consigne :
Demande un nombre à l’utilisateur.
Affiche sa table de multiplication de 1 à 10.
"""

nbr = int (input("Entrez un nombre pour la table de multiplication: "))
for x in range(0, 11):
    print(f"{nbr} X {x} = {nbr*x}")