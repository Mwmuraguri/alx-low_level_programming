#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using jump search.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where value is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t min, max;

	if (array == NULL || size == 0)
		return (-1);

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += step;
	}

	min = prev - step;
	max = prev < size ? prev : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", min, max);

	while (min <= max)
	{
		printf("Value checked array[%lu] = [%d]\n", min, array[min]);
		if (array[min] == value)
			return (min);
		min++;
	}

	return (-1);
}
