#include <stdio.h>
#include <unistd.h>
/**
 * main - Inintialization
 * Desc: prints lowercase letters
 * Return: 0 success
 */
int main(void)
{
	int ah;

	for (ah = 'a'; ah <= 'z'; ah++)
	{
		if (ah != 'e' && ah != 'q')
		{
			putchar(ah);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
