"""
Exercice 5 : Calcul avancé
Objectif : Combiner arithmétique et comparaison.

Consigne :
Demande à l’utilisateur de rentrer deux nombres entiers num1 et num2.
Calcule et affiche :
La somme et le produit
Si num1 est plus grand que num2
Si la somme est supérieure à 100
"""

num1 = int(input("Entrez premier nombre entier: "))
num2 = int(input("Entrez deuxieme nombre entier: "))

print("La somme est ", (num1 + num2), "Le produit est ", (num1 * num2))
if num1 > num2:
    print(f"{num1} est plus grand que {num2}")
else :
    print(f"{num1} est plus petit que  {num2}")

if (num1 + num2) > 100 :
    print(f"La somme de {num1} et {num2} est superieur à 100.")
else:
    print(f"La somme de {num1} et {num2} est inferieur à 100.")