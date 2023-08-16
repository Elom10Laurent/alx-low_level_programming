#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @c: Parameter
 * Return: value
 */
int print_last_digit(int c)
{
	int lastNum;

	lastNum = c % 10;

	if (lastNum < 0)
	{
		lastNum = lastNum * -1;
	}
	_putchar(lastNum + '0');
	return (lastNum);
}
