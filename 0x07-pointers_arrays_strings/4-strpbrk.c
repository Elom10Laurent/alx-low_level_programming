#include "stdio.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to the string to search in
 * @accept: pointer to the string containing bytes to search for
 *
 * Return: A pointer
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *temp_accept = accept;

		while (*temp_accept)
		{
			if (*s == *temp_accept)
			{
				return (s);
			}
			temp_accept++;
		}
		s++;
	}
	return (NULL);
}
