#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Initialization
 * Desc: assign a random number to variable n
 * Return: 0 success no errors
 */
int main(void)
{
		int n, p;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		p = n % 10;
		if (p > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, p);
		}
		else if (p < 6  && p != 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, p);
		}
		else
		{
			printf("Last digit of %d is %d and is 0\n", n, p);
		}
		return (0);
}
