#include "main.h"

/**
 * _isdigit - Program that checks for a digit (0 through 9)
 *
 * @c: Parameter
 * Return: 1 if is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48  && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
