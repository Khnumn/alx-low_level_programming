#include "main.h"

int find_sqrt(int num, int r);
int _sqrt_recursion(int n);


/**                                                                                                                             
 * _sqrt_recursion - function that returns the natural square root of a number.                                                 
 *@n: number to return the square root of                                                                                      
 *                                                                                                                              
 *Return: n has a natural square root                                                                                          
 *n does not have a natural square root - -1                                                                           
 */
int find_sqrt(int num, int r)
{
	if ((r * r) == num)
		return (r);

	if (r == num / 2)
		return (-1);

	return (find_sqrt(num, r + 1));
}


/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number to return the square root of
 *
 * Return: n has a natural square root
 * 	   n does not have a natural square root - -1
 */
int _sqrt_recursion(int n)
{
	int r = 0;

	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);
	
	return (find_sqrt(n, r));
}
