#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: Pointer to the string to be printed in reverse.
 *
 * Description: This function recursively traverses the string until the
 * null terminator is reached. Then, as the function calls unwind,
 * it prints each character in reverse order.
 */
void _print_rev_recursion(char *s) {
    if (*s == '\0') {
        return;
    }
    _print_rev_recursion(s + 1);
    _putchar(*s);
}
