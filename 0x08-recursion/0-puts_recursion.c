#include "main.h"

/**
 * _puts_recursion - Prints a string to stdout using recursion.
 * @s: Pointer to the string to print.
 *
 * Description: This function prints the characters of the string one by one
 * using recursion. When it reaches the null terminator ('\0'),
 * it prints a newline character and returns.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0') 
    {
        _putchar('\n'); 
        return;
    }
    _putchar(*s); 
    _puts_recursion(s + 1); 
}
