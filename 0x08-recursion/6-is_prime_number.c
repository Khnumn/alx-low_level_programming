#include "main.h"

int is_divisible(int nm, int dv);
int is_prime_number(int n);


int is_divisible(int nm, int dv)
{
		if (nm % dv == 0)
			return (0);

		if (dv == nm / 2)
			return (1);

		return (is_divisible(nm, dv + 1));
}

/**
 * is_prime_number - function that returns 1 if the input integer is a prime number, otherwise return 0
 * @n: prime number
 * Return: returns 1 if the input integer is a prime number
 * 	   otherwise return 0 
 */
int is_prime_number(int n)
{
	int dv = 2;

	if (n <= 1 )
		return (0);
	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, dv));
}
