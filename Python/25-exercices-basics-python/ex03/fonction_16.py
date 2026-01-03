"""
Exercice 4 — Afficher des options

Objectif : Comprendre **kwargs.
Consigne :
Crée une fonction afficher_options(**kwargs) qui affiche chaque clé et valeur.
"""

def afficher_options(**kwargs):
    print(kwargs)

afficher_options(a=3, b=6, c=8)