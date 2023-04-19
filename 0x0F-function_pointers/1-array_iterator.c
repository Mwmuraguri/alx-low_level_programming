#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array
 * @size: size of an array
 * @action: pointer
 * @array: array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int p;

	if (array == NULL || action == NULL)
			return;

		for (p = 0; p < size; p++)
		{
			action(array[p]);
		}
}
