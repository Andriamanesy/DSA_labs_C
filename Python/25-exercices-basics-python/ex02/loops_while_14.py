"""
Exercice 4 — Simulation de do while
Objectif : Reproduire le comportement do while.

Consigne :

Demande un mot de passe à l’utilisateur au moins une fois.
Tant que le mot de passe n’est pas "python42", redemande-le.
Affiche "Accès autorisé" quand il est correct.
💡 Indice :
while True:
    # code
    if condition:
        break
"""

while True:
    mot_de_passe = input("Entrez votre mot de passe: ")
    if mot_de_passe == "python42":
        break
