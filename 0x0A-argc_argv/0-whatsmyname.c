#include "main.h"
#include <stdio.h>

/**
 * main - prints its name,followed by a new line
 * print a new name, without having to compile it again
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
	printf("%s\n", argv[0]);
	}
	return (0);
}
