#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints resultat of mutiplication;
 * @main: input
 * @main: input
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
        if (argc != 3)
        {
                printf("Error\n");
                return (1);
        }
	else
        {
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int result = num1 * num2;
                printf("%d \n", result);
                return (0);
        }
}
