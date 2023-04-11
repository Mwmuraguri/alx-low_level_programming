#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @height: input
 * @width: input
 * Return: pointer to a 2 dim array of intergers
 *
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **z;

	if (width <= 0 || height <= 0)
		return (NULL);

	z = malloc(sizeof(int *) * height);

	if (z == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		z[i] = malloc(sizeof(int) * width);

		if (z[i] == NULL)
		{
			for (; i >= 0; i--)
				free(z[i]);
			free(z);
			return (NULL);
		}

	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			z[i][j] = 0;
	}
	return (z);
}
