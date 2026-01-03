"""
Exercice 3 — break dans une recherche

Objectif : Arrêter dès que la valeur est trouvée.
Consigne :
Crée une liste de nombres.
Parcours-la avec une boucle for.
Arrête la boucle dès que le nombre 42 est trouvé.
Affiche "Nombre trouvé".
"""
tab = {2,5,9,7,15,8,42,88}
for tb in tab:
    if tb == 42:
        print(f"{tb} trouvé")
        break