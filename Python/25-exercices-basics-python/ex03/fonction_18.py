"""
Exercice 6 — Mix arguments
Objectif : Ordre correct.

Consigne :
Crée une fonction logger(message, *args, **kwargs) qui affiche :
le message
les arguments positionnels
les options nommées
"""

def logger(message, *args, **kwargs):
    print(message)
    print(args)
    print(kwargs)

logger("Bonjour", 29, 22, A=4, B=5)