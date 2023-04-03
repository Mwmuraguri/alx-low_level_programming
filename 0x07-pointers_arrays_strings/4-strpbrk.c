#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: bytes
 * @accept: string
 * Return: Always 0(Success)
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int c;

	if (*s)
	{
		for (c = 0; accept[c]; c++)
		{
			while (*s == accept[c])

				return (s);
		}
		s++;
	}
	return ('\0');
}
