#!/bin/bash

# Tableau contenant les prototypes de fonction
prototypes=(
  "_putchar(char c);"
  "_islower(int c);"
  "_isalpha(int c);"
  "_abs(int n);"
  "_isupper(int c);"
  "_isdigit(int c);"
  "_strlen(char *s);"
  "_puts(char *s);"
  "_strcpy(char *dest, char *src);"
  "_atoi(char *s);"
  "_strcat(char *dest, char *src);"
  "_strncat(char *dest, char *src, int n);"
  "_strncpy(char *dest, char *src, int n);"
  "_strcmp(char *s1, char *s2);"
  "_memset(char *s, char b, unsigned int n);"
  "_memcpy(char *dest, char *src, unsigned int n);"
  "_strchr(char *s, char c);"
  "_strspn(char *s, char *accept);"
  "_strpbrk(char *s, char *accept);"
  "_strstr(char *haystack, char *needle);"
)

# Création des fichiers .c
for prototype in "${prototypes[@]}"; do
  # Récupération du nom de la fonction et des arguments
  function_name=$(echo "$prototype" | cut -d'(' -f1)
  arguments=$(echo "$prototype" | cut -d'(' -f2 | cut -d')' -f1)

  # Création du nom de fichier .c
  filename=$(echo "$function_name" | sed 's/^_//').c

  # Création du contenu du fichier .c
  content="#include \"main.h\"\n\n"
  content+="int $function_name {\n"
  content+="  // Implémentation de la fonction $function_name\n"
  content+="  // Ajoutez votre code ici\n\n"
  content+="  // Exemple de sortie correspondante\n"
  content+="  // printf(\"Sortie de la fonction $function_name\\n\");\n\n"
  content+="  // Retourne la sortie appropriée\n"
  content+="  // return <valeur>;\n"
  content+="}\n"

  # Écriture du contenu dans le fichier .c
  echo -e "$content" > "$filename"
done

echo "Les fichiers .c ont été créés avec succès."

