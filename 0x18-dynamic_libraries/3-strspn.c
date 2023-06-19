#include "main.h"
/**
 * _strspn - gets the length of a prefix statement
 *
 * @accept: bytes
 * @s: segment
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int p;
	unsigned int a = 0;

	if (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
			{
				break;
				a++;
			}
			else if (accept[p + 1] == '\0')
			return (a);
		}
		s++;
	}
	return (a);
}
