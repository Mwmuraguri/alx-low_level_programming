#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: substring
 * @needle: string
 * Return: always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *z = needle;

		while (*a == *z && *z != '\0')
		{
			z++;
			a++;
		}
		while (*z == '\0')
			return (haystack);
	}
	return (0);
}
