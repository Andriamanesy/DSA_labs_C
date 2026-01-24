"""
Exercice 4 — Variable locale

Objectif : Comprendre la portée locale.

Consigne :
Crée une fonction test_local().
À l’intérieur, crée une variable x = 10.
Affiche x dans la fonction.
Essaie d’afficher x en dehors de la fonction.
Observe l’erreur et explique pourquoi.
"""
def test_local():
    x = 10
    print(x)
print(x)

