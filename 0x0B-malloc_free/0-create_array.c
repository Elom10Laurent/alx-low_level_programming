#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array of char;
 * @size: input
 * @c: input
 * Return: 0 Sucess
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;
	if (size == 0)
	{
		return (NULL);
	}
	ar = (char *) malloc(size * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}

