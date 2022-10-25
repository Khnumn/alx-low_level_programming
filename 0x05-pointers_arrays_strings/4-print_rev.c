#include "main.h"

/**
 * function - prints a string, in reverse, followed by a new line
 * @s: a string variable
 * Return: 0 success
 */

void print_rev(char *s)
{
	int a =0;

	while(s[a])
		a++;
	while(a--)
		_putchar(s[a]);
	_putchar('\n');
}
