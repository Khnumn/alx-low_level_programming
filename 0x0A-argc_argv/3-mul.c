#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program that multiplies two numbers.
 *@argc: Number of command line arguments
 *@argv: Array of argc
 *Return: 0 success
 */

int main(int argc, char *argv[])
{
	int x, y, product;

	if(argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	product = x * y;

	printf("%d\n", product);

	return (0);
}
