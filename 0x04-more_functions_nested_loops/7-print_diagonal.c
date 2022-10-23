#include "main.h"

/**
 *
 *
 *
 */

void print_diagonal(int n)
{
	int d, e;

	if (n <= 0)
		_putchar('\n');
	for ( d = 0; d < n; d++)
	{
		for (e = 0; e < d; e++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
