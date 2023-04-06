#include "main.h"
/**
 * _strlen_recursion - Entry point
 * @s: string
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int st = 0;

	if (*s)
	{
		st++;
		st += _strlen_recursion(s + 1);
	}

	return (st);
}
