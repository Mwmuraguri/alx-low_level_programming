#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 *  and initializes it with a specific char
 *  @c: character
 *  @size: array size
 *  Return: pointer to array, otherwise NULL
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x = 0;
	char *string;

	string = malloc(sizeof(char) * size);

	if (size == 0 || string == NULL)
		return (NULL);

	while (x < size)
	{

		string[x] = c;
		x++;
	}

	return (string);
}
