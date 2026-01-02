"""
Exercice 3 — if / elif / else
Objectif : Gérer plusieurs conditions.

Consigne :
Demande une note entre 0 et 20.
Affiche :
"Excellent" si note ≥ 16
"Bien" si note ≥ 12
"Passable" si note ≥ 10
"Insuffisant" sinon
"""
from selectors import SelectSelector

note = int (input("Entrez une note entre 0 à 20: "))
if note >= 16:
    print("Excellent!!")
elif note >= 12 :
    print("Bien!!")
elif note >= 10 :
    print("Passable")
else :
    print("Insuffisant")