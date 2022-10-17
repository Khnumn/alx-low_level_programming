#include <stdio.h>
#include <unistd.h>
/**
 * main - Initialization
 * Desc:  display alphabetic characters in lower and uppercase
 * Return: 0 success with no errors
 */
int main(void)
{
	int m;

	for (m = 'a'; m <= 'z'; m++)
	{
		putchar(m);
	}
	putchar('\n');
return (0);
}
