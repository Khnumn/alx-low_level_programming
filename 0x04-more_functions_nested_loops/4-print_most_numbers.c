#include "main.h"

/**
 * func: print_most_numbers - prints 0 - 9 except 2,4
 * Return: void
 */

void print_most_numbers(void)
{
	int b = 0;

	while (b <= '9')
	{
		if ( b != 2 && b != 4)
		{
			_putchar(b + '0');
			b++;
		}
		_putchar('\n');
	}
}
	
