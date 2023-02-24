#include <stdio.h>
#include <math.h>

/**
 * main - Finds and prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long x, maxf;
	long pf = 612852475143;
	double square = sqrt(pf);

	for (x = 1; x <= square; x++)
	{
	if (pf % x == 0)
	{
	maxf = pf / x;
	}
	}
	printf("%ld\n", maxf);
	return (0);

}
