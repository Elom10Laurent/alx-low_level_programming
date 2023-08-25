#include "main.h"

/**
 * print_number - Prints an integer
 * @n: parameter
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		putchar('-');
		number = -n;
	}

	if ((number / 10) > 0)
	{
		print_number(number / 10);

	}
	putchar((number % 10) + '0');
}
