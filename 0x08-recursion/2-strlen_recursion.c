#include "main.h"
/**
 * _strlen_recursion - count character for string;
 * @s: input
 * Return: O "Success"
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
	 	1 + _strlen_recursion(s + 1);
	}
	return(0);
}
