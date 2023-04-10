#include "main.h"
#include <stdio.h>

/**
 * _putchar - entry point
 * @c: character
 * Return: (1) success
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
