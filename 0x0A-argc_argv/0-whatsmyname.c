#include <stdio.h>
#include "main.h"
/**
 * main - prints its name followed by a new line
 * print a new name without compiling it again
 * does not remove the path before the name of the program
 * @argc: no. of arguments
 * @argv: array of arguments
 *
 * Return: always (0)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
