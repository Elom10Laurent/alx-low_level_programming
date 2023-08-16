#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Void parameter
 * Return: Always void
 */
void print_alphabet_x10(void)
{
	int x = 0;
	char y;

	while( x < 10)
	{		
		for (y = 'a'; y<='z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
		x++;
	}
}
