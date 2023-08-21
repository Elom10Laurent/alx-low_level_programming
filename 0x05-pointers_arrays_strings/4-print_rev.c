#include "main.h"

/**
 * print_rev - Print a string
 *
 * @s: Parameter
 * Return: Always 0  Success
 */

void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}

	while (end != s)
	{
		end--;
		putchar(*end);
	}
	putchar('\n');
}
