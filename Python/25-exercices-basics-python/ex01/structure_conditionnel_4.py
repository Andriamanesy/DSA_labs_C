"""
Exercice 4 — Comparaison multiple
Objectif : Combiner conditions.

Consigne :
Demande l’âge et le statut étudiant (True / False).
Affiche :
"Tarif étudiant" si étudiant
"Tarif jeune" si âge < 18
"Tarif normal" sinon
"""
age = int (input("Entrez votre age : "))
est_etudiant = int (input("Tapez 1 si vous etes etudiant, sinon tapez 0: "))

tarif = 15000;
if est_etudiant :
    print(f"Votre tarif est {tarif/3}")
elif age < 18 :
    print(f"Votre tarif est {tarif/2}")
else:
    print(f"Votre tarif est {tarif}")