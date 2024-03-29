#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: parameter
 * @src: parameter
 * @n:parameter
 * return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (result);
}
