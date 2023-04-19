#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function
 * @argv: array of arguments
 * @argc: number of arguments
 *
 * Return: Always 0 (Success)
 *
 */
int main(int argc, char *argv[])
{
	unsigned char *array;

	int x;
	int byt;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byt = atoi(argv[1]);

	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;

	for (x = 0; x < byt; x++)
	{
		if (x == byt - 1)
		{
			printf("%02hhx\n", array[x]);
			break;
		}
		printf("%02hhx ", array[x]);
	}
	return (0);
}
