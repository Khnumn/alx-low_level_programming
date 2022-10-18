#include <stdio.h>
#include <unistd.h>
/**
 * main - Intialize
 * Desc: prints reverse lowercase alphabets
 * Return: 0 success
 */
int main(void)
{
	int d;

	for (d = 'z'; d >= 'a'; d--)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
