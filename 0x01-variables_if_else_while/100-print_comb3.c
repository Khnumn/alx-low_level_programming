#include <stdio.h>
#include <unistd.h>
/**
 * main - Initialize
 * Desc: print combo 0f two digits
 * Return: 0 success
 */
int main(void)
{
	int t, u;

	for (t ='0'; t <= '9'; t++)
	{
		for (u = '0'; u <= '9'; u++)
		{
			if (t < u)
			{
				putchar(t);
				putchar(u);

				if ( t != '8' || (t == '8' && u != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n\);
	return (0);
}

