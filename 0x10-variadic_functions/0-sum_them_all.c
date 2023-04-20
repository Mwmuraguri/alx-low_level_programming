#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @...: variable number of parameters
 * @n: number of parameters
 *
 * Return: if n == 0 - 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int c, sum = 0;

	va_start(ap, n);

	for (c = 0; c < n; c++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
