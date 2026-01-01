"""
Exercice 4 : Conversion et initialisation
Objectif : Initialiser des variables avec conversion de type.

Consigne :
Demande à l’utilisateur son année de naissance et stocke-la dans une variable annee_naissance (utilise input()).
Convertis cette valeur en entier (int) et stocke-la dans annee_naissance_int.
Calcule ton âge et stocke-le dans une variable age.
Affiche :
Tu as ... ans
"""
print("Entrez votre année de naissance: ")
annee_naissance = input()
annee_naissance_int = int(annee_naissance)

age = 2026 - annee_naissance_int
print(f"Tu as {age} ans")