#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	unsigned long int bit = 0;
	int size = sizeof(unsigned long int) * 8;

	mask = mask << (size - 1);
	while (size--)
	{
		bit = n & mask;
		if (bit)
			_putchar('1');
		else
			_putchar('0');
		mask = mask >> 1;
	}
}
