"""
Exercice 7 — Prix dynamique
Objectif : Calcul flexible.

Consigne :
Crée une fonction calcul_prix(prix_base, *remises, **taxes) qui :
soustrait les remises
ajoute les taxes (%)
"""

def calcul_prix(prix_base, *remises, **taxes):
    for x in remises :
        prix_base = prix_base - x
    for y, k in taxes.items() :
        prix_base = prix_base + (prix_base * k) /100
    print(prix_base)

calcul_prix(12000, 5000, A= 20)