"""
Exercice 2 — while avec condition utilisateur
Objectif : Utiliser while avec une entrée utilisateur.

Consigne :
Demande un nombre à l’utilisateur.
Tant que le nombre est négatif, redemande un nombre.
Affiche le nombre valide.
"""

nbr = int(input("Entrez un nombre: "))
while nbr < 0:
    nbr = int (input("Entrez le nombre positif : "))
print(f"Le nombre {nbr} est valide")