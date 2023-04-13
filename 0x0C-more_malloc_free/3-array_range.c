#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: minimum range
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int size, i, *ptr, *p;

	if (min > max)
	return (NULL);

	size = max - min + 1;
	ptr = malloc(size * sizeof(int));
	if (!ptr)
	return (NULL);

	p = ptr;
	for (i = min; i <= max; i++, p++)
	{
	*p = i;
	}
	return (ptr);
}
