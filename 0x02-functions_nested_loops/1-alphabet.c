#include "main.h"
/**
 * main - Initialize
 * Desc: print lowercase alphabets print_alphabet
 * Return: void success
 */
void print_alphabet(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}

