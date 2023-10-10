#include "search_algos.h"

/**
 * linear_search - Function that searches for a value
 * in an array of integers using the Linear search algorithm
 * @array: array
 * @size: size of the array
 * @value: value to search
 * Return: -1 if element not in array else the position of the element in the
 * array
 */
int linear_search(int *array, size_t size, int value)
{
	int p;

	if (array == NULL)
		return (-1);

	for (p = 0; p < (int)size; p++)
	{
		printf("Value checked array[%u] = [%d]\n", p, array[p]);
		if (value == array[p])
			return (p);
	}
	return (-1);
}
