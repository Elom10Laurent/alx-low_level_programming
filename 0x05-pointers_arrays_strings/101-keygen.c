#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * generer_pw to genarate password
 *
 * @longueur: parameter
 * return: password
 */

void generer_pw(int longueur) 
{
const char caracteresValides[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
for (int i = 0; i < longueur; i++)
{
int indexAleatoire = rand() % (sizeof(caracteresValides) - 1);
char caractereAleatoire = caracteresValides[indexAleatoire];
putchar(caractereAleatoire);
}
putchar('\n');
}

int main(void) 
{
	int nombreMotsDePasse = 5;
	int longueurMotDePasse = 12;
	
	srand(time(NULL));
	
	for (int i = 0; i < nombreMotsDePasse; i++) 
	{
		genererMotDePasse(longueurMotDePasse);
	}
}
