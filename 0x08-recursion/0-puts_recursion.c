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
    if (*s == '\0') /* Base case: end of string */
    {
        _putchar('\n'); /* Print newline character */
        return;
    }
    _putchar(*s);       /* Print the current character */
    _puts_recursion(s + 1); /* Recursive call with next character */
}
