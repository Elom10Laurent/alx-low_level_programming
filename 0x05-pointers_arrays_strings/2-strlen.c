#include "main.h"

/**
 * _strlen - Return the length of a string
 *
 * @s: Parameter
 * Return: length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
