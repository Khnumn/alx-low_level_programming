#include <stdio.h>
#include <unistd.h>
/**
 * main - Initialize
 * Desc: prints numbers in base16 in lowercase
 * Return: 0 success
 */
int main(void)
{
	char x;
	char y = '0';

	while (y <= '9')
	{
		putchar(y);
	}
	for (x = 'a', x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
