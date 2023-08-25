#include "main.h"

/**
 * reverse_array - Reverses the content of an array
 *
 * @a: Parameter
 * @n: Parameter
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < n--; i++)
	{
		i = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
