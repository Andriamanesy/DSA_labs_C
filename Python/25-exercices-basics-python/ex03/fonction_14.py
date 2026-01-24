"""
Exercice 2 — Somme variadique

Objectif : Utilisation pratique de *args.
Consigne :
Crée une fonction somme(*args) qui retourne la somme de tous les nombres passés.
"""

def somme(*args):
    total = 0
    for x in args :
        total = total + x
    print(total)

somme(15, 6, 5)