"""
Exercice 2 — break (arrêt conditionnel)

Objectif : Arrêter une boucle.
Consigne :
Utilise une boucle while.
Demande un nombre à l’utilisateur.
Arrête la boucle dès que l’utilisateur entre 0.
"""

while True :
    nbr = int (input("Entrez votre nombre: "))
    if nbr == 0 :
        break