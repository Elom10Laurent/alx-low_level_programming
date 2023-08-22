#include "main.h"

/**
 * print_array - Prints n element of an array of integers
 *
 * @a: Parameter
 * @b: Parameter
 * Return: Success
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
