"""
Exercice 3 — Compter les arguments

Objectif : Manipuler args.
Consigne :
Crée une fonction compter(*args) qui retourne le nombre d’arguments reçus.
"""

def compter(*args):
    total = 0
    for x in args:
        total = total + 1
    print(total)

compter(4,5,6, 90)