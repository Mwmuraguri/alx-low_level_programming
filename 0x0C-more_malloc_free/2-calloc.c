#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * using malloc
 *
 * @size: size of elements
 * @nmemb: number of elements
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = malloc(nmemb * size);

	if (ptr != NULL)
	{
	memset(ptr, 0, nmemb * size);
	}
	return (ptr);
}
/**
 * *_memset - fills memory with a constant byte
 * @s: memory area
 * @b: char
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
	*ptr++ = b;
	}
	return (s);
}
