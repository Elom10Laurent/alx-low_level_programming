#include "main.h"

/**
 * main - Prints alphabet
 *
 * void parameter
 * Return:Always 0
 */
void print_alphabet(void)
{
	char c;
	
	for(c = 'a'; c = 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
