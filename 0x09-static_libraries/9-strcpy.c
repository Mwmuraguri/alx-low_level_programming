#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int p = 0;

	int z = 0;

	while (*(src + p) != '\0')
	{
		p++;
	}
	for ( ; z < p; z++)
	{
		dest[z] = src[z];
	}
	dest[p] = '\0';
	return (dest);
}
