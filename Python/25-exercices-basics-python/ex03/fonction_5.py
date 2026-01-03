"""
Exercice 5 — Variable globale

Objectif : Comprendre la portée globale.

Consigne :
Crée une variable globale compteur = 0.
Crée une fonction incrementer().
À chaque appel, la fonction doit augmenter compteur de 1.
Appelle la fonction plusieurs fois et affiche compteur.
💡 Indice : global compteur
"""
compteur = 0
def incrementer():
    global compteur
    compteur = compteur + 1
incrementer()
incrementer()
print(compteur)

