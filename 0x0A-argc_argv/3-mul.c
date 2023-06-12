#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints resultat of mutiplication
 * @argc: input
 * @argv: input
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int i, res = 1;

        if (argc != 3)
        {
                printf("Error\n");
                return (1);
        }
	else
        {
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}
		printf("%d\n", res);
        }
	return (0);
}

