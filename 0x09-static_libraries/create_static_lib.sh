#!/bin/bash

# Compile tous les fichiers .c en fichiers objets
gcc -c *.c

# Crée la bibliothèque statique avec ar
ar rcs libmy.a *.o

# Crée l'index
ranlib libmy.a

echo "Bibliothèque statique liball.a créée avec succès."
