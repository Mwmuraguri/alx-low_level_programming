#include <stdio.n>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of int: %lu byte (s)\n", (unsigned long)sizeof(b));
printf("Size of long int: %lu byte (s)\n", (unsigned long)sizeof(c));
printf("Size of long long int: %lu byte (s)\n", (unsigned long)sizeof(d));
printf("Size of float: %lu byte (s)\n", (unsigned long)sizeof(e));
return (0);
}
