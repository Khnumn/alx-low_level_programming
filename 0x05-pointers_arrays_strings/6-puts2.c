#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 *@str- string reference
 * Return: 0 Success
 */

void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
		x++;
	}
	_putchar('\n');
}
