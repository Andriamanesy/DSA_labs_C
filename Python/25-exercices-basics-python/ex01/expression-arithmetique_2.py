"""
Exercice 2 : Priorité des opérateurs
Objectif : Comprendre la priorité des opérations et les parenthèses.

Consigne :
Crée deux variables x = 5 et y = 3.
Calcule et affiche ces deux expressions :
x + y * 2
(x + y) * 2
Observe la différence et explique pourquoi.
"""
x, y = 5, 3
print(f"{x} + {y} * 2 = ", x + y * 2)
print(f"({x} + {y}) * 2 = ", (x + y) * 2)