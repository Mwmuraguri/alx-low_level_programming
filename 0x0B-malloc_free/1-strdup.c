#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *
 *  which contains a copy of the string given as a parameter
 *  @str: character
 *  Return: pointer to the duplicated string, otherwise NULL
 *
 */
char *_strdup(char *str)
{
	char *s;
	int x, y;

	if (str == NULL)
		return (NULL);

	x = 0;

	while (str[x] != '\0')
		x++;
	s = malloc(sizeof(char) * (x + 1));

	if (s == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		s[y] = str[y];

	s[y] = '\0';

	return (s);
}
