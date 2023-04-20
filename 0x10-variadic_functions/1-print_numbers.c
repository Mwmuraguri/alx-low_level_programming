#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * followed by a new line
 * @n: number of interger
 * @separator: sting to be printed
 * @...: a variable of numbers to be printed
 *
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
