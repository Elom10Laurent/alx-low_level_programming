#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * void
 * Return: 1 Success
 */
int main(void)
{
	char *me = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, me, 59);
	return (1);
}
