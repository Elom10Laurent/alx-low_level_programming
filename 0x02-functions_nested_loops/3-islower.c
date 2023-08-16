#include "main.h"

/**
 * _islower - verify lowercase character
 *
 * c: parameter
 * Return: 1 if c is lowwercase adn O if  otherwise
 */
int _islower(int c)
{
	if  (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
