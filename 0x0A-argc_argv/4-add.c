#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that adds positive numbers.
 *@argc: Number of command line arguments
 *@argv: Array of argv
 *Return: f one of the numbers contains symbols that are non-digits - 1.
 * 			otherwise 0
 */
int main(int argc; char *argv[])
{
	int q, dg, sum = 0;

	for (q = 1, q < argc; q++)
	{
		for (dg = 0; argv[q][dg]; dg++)
		{
			if (argv[q][dg] < '0' || argv[q][dg] > '9')
			{
				printf("Error\n");
				return (1);
			}

		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
