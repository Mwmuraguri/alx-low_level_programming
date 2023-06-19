#include "main.h"
/**
 *_strchr - Function that locates a character in a string
 *@s: character
 *@c: string
 *Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int z = 0;

	for (; s[z] >= '\0'; z++)
	{
		while (s[z] == c)
			return (&s[z]);
	}
	return (0);
}
