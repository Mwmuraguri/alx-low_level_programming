#include "main.h"
#include <stdlib.h>

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
	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	void *pointer = malloc(nmemb * size);

	if (pointer == NULL)
		return (NULL);
	{
		char *ptr = pointer;

		for (unsigned int x = 0; x < nmemb * size; x++)
			*ptr++ = 0;
	}
	return (pointer);
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
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
