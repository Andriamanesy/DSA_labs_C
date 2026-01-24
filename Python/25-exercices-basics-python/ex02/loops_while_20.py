"""
Exercice 5 — break + continue (niveau réel)
Objectif : Utilisation combinée.

Consigne :
Demande des nombres à l’utilisateur en boucle.
Si l’utilisateur entre un nombre négatif → ignore-le (continue).
Si l’utilisateur entre 0 → arrête le programme (break).
Sinon, affiche le nombre.
"""

while True :
    nbr = int (input("Entrez un nombre: "))
    if nbr < 0 :
        continue
    elif nbr == 0:
        break
    else:
        print(nbr)