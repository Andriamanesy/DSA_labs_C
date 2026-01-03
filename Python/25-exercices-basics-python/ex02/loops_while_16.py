"""
Exercice 1 — continue (nombres pairs)
Objectif : Ignorer certaines itérations.

Consigne :
Utilise une boucle for de 1 à 20.
Ignore tous les nombres impairs.
Affiche uniquement les nombres pairs.
👉 Indice : if nombre % 2 != 0: continue
"""

for x in range(1, 21):
    if not x % 2 :
        print(x)