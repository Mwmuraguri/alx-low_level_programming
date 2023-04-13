#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory
 * @old_size: size of the allocated memory
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}
	if (new_size == old_size)
	return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	return (NULL);
	if (ptr != NULL)
	{
	char *old_ptr = ptr;

	for (i = 0; i < old_size && i < new_size; i++)

	new_ptr[i] = old_ptr[i];
	free(ptr);
	}
	return (new_ptr);
}
