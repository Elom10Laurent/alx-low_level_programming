#include "main.h"
/**
 * _print_rev_recursion - function that inverse character;
 * @s: input
 * return: 0 "Success"
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

