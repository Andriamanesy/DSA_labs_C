"""
Exercice 3 : Affectation multiple
Objectif : Initialiser plusieurs variables en une seule ligne.

Consigne :
Déclare et initialise les variables a, b et c avec les valeurs 10, 20 et 30 sur une seule ligne.
Échange les valeurs de a et b en utilisant une seule ligne.
Affiche les trois variables.
"""
a, b, c = 10, 20, 30
a, b = b, a

print(f"Le a = {a} et le b = {b} et c = {c}")