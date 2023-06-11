#include <stdio.h>
#include <stdlib.h>
/**
 * main - print number;
 * @argc: parametre that is the number of argv parameter
 * @argv: parameter that give the parameter 
 *
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
