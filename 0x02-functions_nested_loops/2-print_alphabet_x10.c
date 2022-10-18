#include "main.h"
/**
 * main - Initialize
 * print_alphabet_x10- function
 * Desc:  function that prints 10 times the alphabet
 * Return: 0 success
 */
void print_alphabet_x10(void)
{
int c_nt = 0
int let_r;

while (c_nt++ <= '9')
{
for (let_r = 'a', let_r <= 'z', let_r++)
_putchar(let_r);

_putchar(10);
}
}
