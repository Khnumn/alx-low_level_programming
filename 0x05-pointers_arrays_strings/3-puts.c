#include "main.h"

/**
 *_puts - prints a string and a new line
 *@str: pointer to a string to print
 *
 * Return: 0
 */

void _puts(char *str)
{
	
	int n = 0;

	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
