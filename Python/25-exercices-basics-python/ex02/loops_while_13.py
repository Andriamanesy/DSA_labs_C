"""
Exercice 3 — Compteur avec somme
Objectif : Utiliser while pour calculer.

Consigne :
Initialise somme = 0 et i = 1.
Tant que i <= 100, ajoute i à somme.
Affiche la somme finale.
"""
somme = 0
i= 1
while i <= 100 :
    somme = somme + i;
    i = i + 1
print(f"La somme finale est : {somme}")