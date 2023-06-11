#include "main.h"
/**
 * int is_prime_number - print prime number;
 * @n: parameter
 *
 * Return:  1 or 0 depending on input type prime number or not
 */
int is_prime_number(int n) 
{
	if (n < 2) 
	{
		return (0);
	}
	else if (n == 1) 
	{
		return (1);
	}
	return (is_prime_number(n, n - 1));
}

