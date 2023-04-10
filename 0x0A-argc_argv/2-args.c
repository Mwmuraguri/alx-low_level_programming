#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * followed by a new line
 * @argc:argument to be passed
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
