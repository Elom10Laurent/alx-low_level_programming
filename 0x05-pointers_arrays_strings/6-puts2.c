#include "main.h"

/**
 * puts2 - Prints every other character of string...
 *
 * @str: Parameter
 *
 * Return: return line
 */

void puts2(char *str)
{
	int i  = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}

	putchar('\n');
}
