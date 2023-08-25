#include "main.h"

/**
 * print_number - Prints an integer
 * @n: parameter
 * Return: void
 */

void print_number(int n)
{
	unsigned int l;
	l = n;

	if (n < 0)
	{
		putchar('-');
		l = -n;
	}

	if ((l / 10) > 0)
	{
		print_number(l / 10);
	}
	putchar((l % 10) + '0');
}
