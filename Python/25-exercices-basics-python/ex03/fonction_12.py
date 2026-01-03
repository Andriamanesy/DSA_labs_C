"""
Exercice 5 — Cas réel

Crée une fonction envoyer_email(destinataire, sujet="Sans sujet", urgent=False)
Affiche un message différent si urgent=True.
"""

def envoyer_email(destinataire, sujet="Sans sujet", urgent=False):
    if urgent == True:
        print(f"Ce message est très urgent, le sujet: {sujet} et destinataire : {destinataire}")
    else:
        print(f"Vous avez un nouveau message, le sujet: {sujet} et destinataire : {destinataire}")
envoyer_email("Brian", urgent=True)