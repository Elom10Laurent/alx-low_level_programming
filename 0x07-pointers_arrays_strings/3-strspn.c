#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to the string to search
 * @accept: pointer to the string containing accepted characters
 *
 * Return: The number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0, i;

	while (*s)
	{
		found = 0;

		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}
