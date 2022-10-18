#include <stdio.h>
#include <stdio.h>
/**
 * main -Initialz
 * Desc: print single digits base 10
 * Return: 0 successful
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}
	putchar('\n');
	return (0);
}
