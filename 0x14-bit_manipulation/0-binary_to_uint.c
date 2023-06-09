#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number or 0 if there is an error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_val = 0;
	int x;

	if (b == NULL)
		return (0);

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		decimal_val = (decimal_val * 2) + (b[x] - '0');
	}

	return (decimal_val);
}
