"""
Exercice 7 — Carré d’étoiles

Objectif : Boucles imbriquées + affichage.
Consigne :
Demande un nombre n.
Affiche un carré de n x n étoiles *.
Exemple pour n = 4 :
****
****
****
****
"""
n = int(input("Entrez le nombre carree que vous voulez: "))
for i in range(1, n+1):
    for j in range(1, n+1):
        print("*", end= " ")
    print("")