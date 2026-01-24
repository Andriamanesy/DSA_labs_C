"""
Exercice 4 — Mélange requis + par défaut

Crée une fonction calcul_prix(prix, tva=20)
Retourne le prix TTC.
"""

def calcul_prix(prix, tva=20):
    return prix*tva/100 + prix

print(f"Le pric TTC est: {calcul_prix(1000)}")

