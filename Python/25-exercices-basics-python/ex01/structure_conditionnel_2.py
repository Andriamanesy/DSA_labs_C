"""
Exercice 2 — if / else
Objectif : Gérer deux cas possibles.

Consigne :
Demande un nombre à l’utilisateur.
Si le nombre est pair, affiche :
Nombre pair
Sinon, affiche :
Nombre impair
"""
nbr = int(input("Entrer un nombre à tester: "))
if not nbr % 2:
    print("Le nombre est pair")
else:
    print("Le nombre est impair")