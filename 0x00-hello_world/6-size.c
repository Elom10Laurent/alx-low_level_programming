#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
*/
int main(void)
{

	char e;
	int l;
	long int o;
	long long int m;
	float la;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(o));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(m));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(la));
return (0);
}
