#include <stdio.h>
#include "main.h"

/**
 *main -  program that prints the number of arguments passed into it.
 *@argc: Number of command line arguments
 *@argv: Array of argc
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
	int x;

	if (argc == 1)
		printf("%d/n", argc -1)
	else
	{

		for(x =0; *argv; x++,argv++)

		printf("%d\n", x - 1);
	}
	
	return (0);
}
