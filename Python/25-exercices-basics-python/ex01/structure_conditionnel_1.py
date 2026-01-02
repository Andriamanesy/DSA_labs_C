"""
Exercice 1 — Condition simple (if)
Objectif : Comprendre une condition de base.

Consigne :
Crée une variable age.
Si l’âge est supérieur ou égal à 18, affiche :
Vous êtes majeur
"""

age = int (input("Entrez votre age : "))
if age < 18 :
    print("Vous êtes mineur")
else :
     print("Vous êtes majeur")