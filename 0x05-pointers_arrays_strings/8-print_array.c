#include "main.h"

/**
 * print_array - Prints n element of an array of integers
 *
 * @a: Parameter
 * @n: Parameter
 * Return: Success
 */

void print_array(int *a, int n)
{
	int i;

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
