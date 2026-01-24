"""
Exercice 2 : Types de variables
Objectif : Comprendre différents types de variables.

Consigne :
Crée une variable prix avec la valeur 19.99 (float).
Crée une variable est_etudiant avec la valeur True (booléen).
Crée une variable ville avec le nom de ta ville (string).
Affiche chaque variable et son type (utilise type()).
"""
prix = 19.99
est_etudiant = True
ville = "Antananarivo"

print(f"La valeur {prix} est un type {type(prix).__name__}")
print(f"La valeur {est_etudiant} est un type {type(est_etudiant).__name__}")
print(f"La valeur {ville} est un type {type(ville).__name__}")