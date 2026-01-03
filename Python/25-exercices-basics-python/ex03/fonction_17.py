"""
Exercice 5 — Configuration dynamique

Objectif : Cas réel.
Consigne :
Crée une fonction configurer(**kwargs) qui affiche :
clé = valeur
"""

def configurer(**kwargs):
    for key, value in kwargs.items() :
        print(f"{key} = {value}")

configurer(a=2,b=4)