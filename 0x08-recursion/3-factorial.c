#include "main.h"
/**
 * factorial - print a factoal of number;
 * @n: input
 * Return: 0 "success"
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
