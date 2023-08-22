#include "main.h"

/**
 * _atoi - Convert string to integer
 *
 * @s: The pointer to convert
 *
 * Return: Integer
 */

int _atoi(char *s)
{
	int a = 0;

	unsigned int l = 0;
	int min = 1;
	int li = 0;

	while (s[a])
	{

		if (s[a] == 45)
		{
			min *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			li = 1;
			l = (l * 10) + (s[a] - '0');
			a++;
		}
		if (li == 1)
		{
			break;
		}
		a++;
	}
	l *= min;
	return (l);
}
