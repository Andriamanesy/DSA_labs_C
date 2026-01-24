"""
Exercice 6 : Conversion et expression mixte
Objectif : Combiner entrées utilisateur, conversion et opérations.

Consigne :
Demande à l’utilisateur son âge et son année de naissance.
Convertis les valeurs en int.
Vérifie :
Si l’âge est correct par rapport à l’année de naissance (2026 - année_naissance == âge)
Si la personne est majeure (>=18)
Affiche un message clair pour chaque vérification.
"""

age, annee_naissance = int(input("Entrez votre age: ")), int(input("Entrez votre année de naissance: "))

if age == (2026 - annee_naissance):
    print("Vous avez saisisser vrai annee et age")
    if age >= 18:
        print("Vous etes majeur")
    else:
        print("vous etes mineur")
else:
    print("Verifier ton age et ta date de naissance")