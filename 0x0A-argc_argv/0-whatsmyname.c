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
int main(char *argv[], int  argc)
{
	printf("%d\n", *argv[0]);
	return (0);
}
