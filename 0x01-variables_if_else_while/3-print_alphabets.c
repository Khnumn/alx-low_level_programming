#include <stdio.h>                                                                                                              
#include <unistd.h>                                                                                                            
/**
 * main - Initialization
 * Desc: prints upper and lowercase
 * Return: 0 when success
 */
int main(void)
{
	int ah;

	for (ah = 'a'; ah <= 'z'; ah++)
	{
		putchar(ah);
	}
	for (ah = 'A'; ah <= 'Z'; ah++)
	{
		putchar(ah);
	}
	putchar('\n');
	return (0);
}
