#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: pointer
 *
 * Return: ptr
 */

char *rot13(char *str)
{
	char *ptr = str;

	while (*str)
	{
		char c = *str;

		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';

			if (c >= base + 13)
			{
				*str -= 13;
			}
			else
			{
				*str += 13;
			}
		}
		str++;
	}

	return (ptr);
}
