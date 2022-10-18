#include "main.h"
/**
 * main - Initialize
 * Desc: prints '_putchar\n' 
 * Return: 0 success
 */
int main(void)
{
char str[] = "_putchar\n";
int x = 0;

while (str[x] != '\0')
	{
	char y = str[x];

	_putchar(y);
	x++;
	}
return (0);
}
