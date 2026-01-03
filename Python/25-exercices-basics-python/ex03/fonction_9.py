"""
Exercice 2 — Argument par défaut

Crée une fonction afficher_message(message, prefix="INFO")
Affiche :
[INFO] Bonjour
"""

def afficher_message(message, prefix="INFO"):
    print(f"[{prefix}] {message}")

afficher_message("Bonjour")