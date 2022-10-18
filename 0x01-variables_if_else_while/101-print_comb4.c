#include <stdio.h>
#include <unistd.h>
/**
 * main - Initialize
 * Desc:  Display 3 combs of numbers
 * Return: 0 successful
 */
int main(void)
{
	int k, e, m;

	for (k = '0'; k <= '9'; k++)
	{
		for (e = '0'; e <= '9'; e++)
		{
			for (m = '0'; e <= '9'; m++)
			{
				if (k < e && e < m)
				{
					putchar(k);
					putchar(e);
					putchar(m);

					if (k != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
