#include "main.h"

/**
 * print_alphabet - Prints alphabet
 *
 * void parameter
 * Return:Always 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
