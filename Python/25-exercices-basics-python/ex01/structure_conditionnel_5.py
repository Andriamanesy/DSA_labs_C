"""
Exercice 5 — Conditions imbriquées

Objectif : Comprendre les if dans des if.
Consigne :
Demande un mot de passe.
Si la longueur est ≥ 8 :
Si le mot de passe contient un chiffre → "Mot de passe fort"
Sinon → "Mot de passe faible"
Sinon → "Mot de passe trop court"
(Indice : len() et any(char.isdigit() for char in password))
"""

mdp = input("Entrez votre mot de passe: ")
if len(mdp) >= 8:
    if any(char.isdigit() for char in mdp) :
        print("Mot de passe fort")
    else:
        print("Mot de passe faible")
else:
    print("Mot de passe court")