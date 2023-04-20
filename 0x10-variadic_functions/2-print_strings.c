#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * followed by a new line
 * @...: variable number
 * @n: number of strings
 * @separator: string to be printed
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;

	char *string;

	unsigned int ind;

	va_start(strings, n);
	for (ind = 0; ind < n; ind++)
	{
		string = va_arg(strings, char *);
	if (string == NULL)
		printf("(nil)");
	else
		printf("%s", string);
	if (ind != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
