#include "main.h"
#include <stdio.h>

/**
 * _diagsums - function that prints the sum of the two diagonals of a square matrix of integers.
 * @a: array to be printed
 * @size: size of a
 */
void print_diagsums(int *a, int size)
{
	int x, sumL = 0, sumP = 0;

	for (x = 0; x < size; x++)
	{
		sumL += a[x];
		a += size;
	}

	a -= size;

	for (y = 0; y < size; y++)
	{
		sumL += a[y];
		a -= size;
	}

	printf("%d, %d\n", sumL,sumP);
}
