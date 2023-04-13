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
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);

	char *rst = malloc(len1 + n + 1);

	if (rst == NULL)
	{
		return (NULL);
	}
	strcpy(rst, s1);
	strncat(rst, s2, n);
	rst[len1 + n] = '\0';
	return (rst);
}
