#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @n: byte number
 * @src: copied memory area
 * @dest: stored memory area
 * Return: pointer to stored memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int w = 0;
	int m = n;

	for (; w < m; w++)
	{
		n--;
		dest[w] = src[w];
	}
	return (dest);
}

