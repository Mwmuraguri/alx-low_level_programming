#include <stdio.h>
#include <stddef.h>
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
	if (array == NULL || action == NULL)
		return;

		size_t p = 0;

		while (p < size)
		{
			action(array[p]);
			p++;
	}
}
