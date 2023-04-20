#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers,
 * followed by a new line.
 * @separator: String
 * @n: The number of int
 * @...: A variable number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int ind;

	va_start(num, n);

	for (ind = 0; ind < n; ind++)
	{
		printf("%d", va_arg(num, int));
		if (ind != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
