#include "main.h"
/**
 * _strncat - Concatenate two strings using inputted number of bytes from src
 * @dest: input value
 * @src: input value
 * @n: the number of byte
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int i;
	int j;

	while (dest[i] != '\0')
	{
		j++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[j++] = src[i];
	}
	return (dest);

}
