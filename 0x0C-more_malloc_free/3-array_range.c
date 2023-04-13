#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: minimum range
 * @max: maximum range
 * of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	if (min > max)
	return (NULL);

	int size = max - min + 1;
	int *ptr = malloc(size * sizeof(int));

	if (!ptr)
	return (NULL);
	int *p = ptr;

	for (int i = min; i <= max; i++, p++)
	*p = i;
	return (ptr);
}
