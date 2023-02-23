#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c :the character to print
 * Return: On sucess 1.
 * On error, -1 in returned, and error in set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
