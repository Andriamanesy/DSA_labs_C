"""
Exercice 5 : Initialisation à partir d’une expression
Objectif : Déclarer des variables avec des expressions ou calculs.

Consigne :
Crée une variable longueur et une variable largeur avec des valeurs numériques.
Initialise une variable surface avec le produit de longueur et largeur.
Initialise une variable perimetre avec la somme de tous les côtés.
Affiche surface et perimetre.
"""

longueur, largeur = 20, 10
surface = longueur * largeur
perimetre = (longueur * 2) + (largeur * 2)

print(f"Le surface est {surface} et le perimetre est {perimetre}")