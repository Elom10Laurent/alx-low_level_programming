#include "main.h"

/**
 * _abs - Computes the absolute value dof an integer
 *
 * @c: number to be computed
 * Return: Always 0 Success
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs;

		abs = c * -1;
		return (abs);
	}
	return (c);
}
