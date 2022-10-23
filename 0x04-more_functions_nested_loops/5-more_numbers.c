#include "main.h"

/**
 * func: more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	char  x, y, z, n;

	for (n = '0'; n < 10; n++)
	{
		for ( z = 0, z <= 14, z++)
		{
			if ( z < 10)
			
				z = y;
			else
			{
				x = z / 10; y = z % 10;
				_putchar('0' + x);

			}
			_putchar('0' + y);
		}
		_putchar('\n');
	}
}
