#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @b: needed value
 * @n: number of bytes to be changed
 * @s: starting adress
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
