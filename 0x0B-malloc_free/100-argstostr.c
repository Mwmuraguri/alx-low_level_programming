#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: input
 * @av: pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int x, y, z = 0, l = 0;
	char *string;

	if (ac == 0 || av == NULL)

		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			l++;
	}
	l += ac;
	string = malloc(sizeof(char) * l + 1);
	if (string == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
	for (y = 0; av[x][y]; y++)
	{
		string[z] = av[x][y];
		z++;
	}
	if (string[z] == '\0')
	{
		string[z++] = '\n';
	}
	}
	return (string);
}
