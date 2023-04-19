#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array
 * @size: size of an array
 * @action: pointer
 * @array: array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	{
		size_t x = 0;

		while (x < size)
			action(array[x]);
		x++;
	}
}
