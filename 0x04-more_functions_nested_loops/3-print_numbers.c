#include "main.h"

/**
 * print_numbers - Print the number, from 0 to 9
 *
 * void
 *
 * Retrun: Success
 */

void  print_numbers(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(c + '0');
		c++;
	}
	putchar('\n');
}
