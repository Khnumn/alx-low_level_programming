#include <stdio.h>
#include  <unistd.h>
/**
 * main - Initialize
 * Desc: Display combinations of two digits
 * Return: 0 successful
 */
int main(void)
{
	int j, a, m, s;

	for (j = 48; j <= 57; j++)
	{
		for (a = 48; a <= 57; a++)
		{
			for (m = 48; m <= 57; m++)
			{
				for (s = 48; s <= 57; s++)
				{
				if (((m + s) > (j + a) &&  m >= j) || j < m)
				{
					putchar(j);
					putchar(a);
					putchar(' ');
					putchar(m);
					putchar(s);

					if (j + a + m + s == 227 && j == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
