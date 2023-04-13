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
