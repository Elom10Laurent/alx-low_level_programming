#include "main.h"

/**
 * _puts - Prints a string
 *
 * @str: Parameter
 * return: Always Success
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
