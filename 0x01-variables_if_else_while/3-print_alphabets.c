#include <stdio.h>                                                                                                              
#include <unistd.h>                                                                                                            
/**
 * main - Initialization
 * Desc: prints upper and lowercase
 * Return: 0 when success
 */
int main(void)
{
		int al;

		for (al = 'a'; al <= 'z'; al++)
		{
			putchar(al);
		}							
		for (al = 'A'; al <= 'Z'; al++)
		{
			putchar(al);
		}
		putchar('\n');
		return (0);
}
