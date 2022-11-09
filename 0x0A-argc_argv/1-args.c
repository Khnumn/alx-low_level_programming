#include "main.h"
#include <stdio.h>

/**
 *main -  program that prints the number of arguments passed into it.
 *@argc: Number of command line arguments
 *@argv: Array of argc
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
	int x;
	for( x =0; x < argc; x++)
	{
		printf("argv[%d]: %s\n", x,argv[x]);
	}

	return (0);
}
