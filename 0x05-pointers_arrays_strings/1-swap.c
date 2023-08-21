#include "main.h"

/**
 * swap_int -  swaps the value of two integers
 *
 * @a: first parameter
 * @b: second parameter
 * Return: Always 0 success
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
