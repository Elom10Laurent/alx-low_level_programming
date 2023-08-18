#include "main.h"

/**
 * _isupper - Program that check for uppercase character
 *
 * @c: parameter
 *
 * Return: 1 to uppercase and 0 to otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
