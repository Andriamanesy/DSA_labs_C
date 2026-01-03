"""
Exercice 6 — Locale vs globale

Objectif : Comprendre la différence.
Consigne :
Crée une variable globale x = 5.
Crée une fonction modifier().
À l’intérieur, crée une variable x = 10.
Affiche x dans la fonction puis à l’extérieur.
Explique la différence.
"""
x = 5
def modifier():
    global x
    x = 10
    print(x)
print(x)
modifier()


