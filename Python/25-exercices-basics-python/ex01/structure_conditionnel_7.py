"""
Exercice 7 — Mélange if / elif / else + ternaire
Objectif : Niveau quasi pro.

Consigne :
Demande l’âge et l’année de naissance.
Vérifie si l’âge est cohérent.
Si oui :
Affiche "Majeur" ou "Mineur" avec un ternaire
Sinon :
Affiche "Données incorrectes"
"""
age = int (input("Entrez votre age: "))
if age >= 1 :
    print("Majeur") if age >= 18 else print("Mineur")
else:
    print("Données incorrectes")