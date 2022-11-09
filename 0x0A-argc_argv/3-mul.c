#include  <stdio.h>
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
	int x, y;

	if (argc == 1 || argc == 2 )
	{
		printf("Error\n");
		return (1);

	}
	else
	{
		y = 1;

		for( x = 1; x < 3; x++)
		y *= atoi(argv[x]);

		printf("%d\n", x);
	}

	return (0);
}
