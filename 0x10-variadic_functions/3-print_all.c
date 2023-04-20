#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: lists types of arg
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *string, *sep = "";

	va_list list;


	va_start(list, format);


	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
				printf("%s%c", sep, va_arg(list, int));
					break;
					case 'i':
				printf("%s%d", sep, va_arg(list, int));
					break;
					case 'f':
				printf("%s%f", sep, va_arg(list, double));
					break;
					case 's':
				string = va_arg(list, char *);
				if (!string)
				string = "(nil)";
				printf("%s%s", sep, string);
				break;
			default:
	x++;
	continue;
	}
	sep = ", ";
	x++;
	}
	printf("\n");
	va_end(list);
	}
}
