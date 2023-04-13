#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two stings
 * @s1: string
 * @s2: string
 * @n: number of bytes
 * Return: pointer
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int x = 0, y = 0, l0 = 0, l1 = 0;

	while (s1 && s1[l0])
		l0++;
	while (s2 && s2[l1])
		l1++;
	if (n < l1)
		str = malloc(sizeof(char) * (l0 + n + 1));
	else
		str = malloc(sizeof(char) * (l0 + l1 + 1));
	if (!str)
		return (NULL);
	while (x < l0)
	{
		str[x] = s1[x];
		x++;
	}
	while (n < l1 && x < (l0 + n))

		str[x++] = s2[y++];
	while (n >= l1 && x < (l0 + l1))
		str[x++] = s2[y++];
	str[x] = '\0';
	return (str);
}
