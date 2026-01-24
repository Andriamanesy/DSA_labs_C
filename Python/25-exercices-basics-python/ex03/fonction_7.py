"""
Exercice 7 — Cas réel (propre)
Objectif : Bonne pratique (éviter global).

Consigne :
Crée une fonction calculer_age(annee_naissance).
Elle retourne l’âge (2026 − année).
Utilise le résultat sans variable globale.
Affiche :
Vous avez ... ans
"""
def calculer_age(annee_naissance):
    return 2026 - annee_naissance

print(f"Vous avez {calculer_age(1996)} ans")


