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
	for( x =0; x < argc; x++)
	{
		printf(" %s", argv[x]);
	}
	
	printf("\n");
}
