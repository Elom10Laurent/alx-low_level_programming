#include "main.h"

/**
 * string_toupper - change all loercase to uppercase
 * @p: pointer
 * Return: n
 */
char *string_toupper(char *p)
{
	char *n = p;

	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
			*p -= ('a' - 'A');
		p++;
	}
	return (n);

}
