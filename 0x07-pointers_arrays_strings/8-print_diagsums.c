#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum0, sum1, z;

	sum0 = 0;
	sum1 = 0;

	for (z = 0; z < size; z++)
	{
		sum0 = sum0 + a[z * size + z];
	}
	for (z = size - 1; z >= 0; z--)
	{
		sum1 += a[z * size + (size - z - 1)];
	}

	printf("%d, %d\n", sum0, sum1);
}
