"""
Exercice 4 — continue avec validation

Objectif : Ignorer les entrées invalides.
Consigne :
Parcours les nombres de 1 à 10.
Ignore les multiples de 3.
Affiche uniquement les autres nombres.
"""

for x in range(1, 11):
    if x%3 :
        print(x)