#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	int _putchar(char c);

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
