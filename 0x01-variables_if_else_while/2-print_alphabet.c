#include <stdio.h>
#include <unistd.h>
/**
 * main - Initialization
 * Desc:  display alphabetic characters in lower and uppercase
 * Return: 0 success with no errors
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	return (0);
}
