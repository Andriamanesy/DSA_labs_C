"""
Exercice 6 — Opérateur ternaire
Objectif : Écrire une condition en une ligne.
Consigne :

Demande un nombre.
Stocke dans une variable resultat :
"Positif" si le nombre ≥ 0
"Négatif" sinon
Affiche resultat.
👉 Syntaxe rappel :
resultat = valeur_si_vrai if condition else valeur_si_faux
"""
nbr = int (input("Entrez un nombre: "))
resultat = print("Positif") if nbr >= 0 else  print("Negatif")