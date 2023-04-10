#include "main.h"
#include <stdio.h>

/**
 * main - prints athe number of arguments passsed into it
 * followed by a new line
 * @argc: argument to be printed
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
