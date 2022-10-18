#include <stdio.h>
#include <unistd.h>
/**
 * main - Initialize
 * Desc: display numbers
 * Return: 0 successful
 */
int main(void)
{
	int l;

	for (l = '0', l <= '9', l++)
	{
		putchar(l);

		if (l != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
