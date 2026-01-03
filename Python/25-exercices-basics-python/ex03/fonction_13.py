"""
NIVEAU 1 — Bases
🟢 Exercice 1 — *args simple

Objectif : Comprendre *args.
Consigne :
Crée une fonction afficher_args(*args) qui affiche tous les arguments reçus.
"""

def afficher_args(*args):
    print(args)

afficher_args(1, 3, 4, 6)