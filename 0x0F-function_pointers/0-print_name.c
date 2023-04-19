#include <stdio.h>
#include "function_pointers.h"

typedef void (*name_printer)(char *);

/**
 * print_name - prints a name
 * @name: name
 * @f: pointer
 * Return: nothing
 */
void print_name(char *name, name_printer f)
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
