"""
Exercice 3 — Appel avec mots-clés
Crée une fonction afficher_profil(nom, age, ville)
Appelle-la en utilisant uniquement des arguments nommés.
"""

def afficher_profil(nom, age, ville):
    print(f"Votre nom : {nom}, age:{age}, adresse: {ville}")

afficher_profil(age=30, ville="Antananarivo", nom="Brian")