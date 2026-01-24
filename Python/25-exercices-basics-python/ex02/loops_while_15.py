"""
Exercice 5 — Menu interactif (niveau réel)
Objectif : Cas réel avec while et do while.

Consigne :
Affiche un menu :
1 - Dire bonjour
2 - Dire au revoir
0 - Quitter
Tant que l’utilisateur ne choisit pas 0, le menu se répète.
Chaque choix déclenche une action.
"""
while True :
    print("1 - Dire bonjour")
    print("2 - Dire au revoir")
    print("0 - Quitter")
    nbr = int(input("Choisissez un menu: "))
    if nbr == 0:
        break
