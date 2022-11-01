#include "main.h"

/**
 *_strspn - function that gets the length of a prefix substring.
 *@s: The string to be searched. 
 *@accept: The prefix to be measured.
 *Return: The number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	for (i =0; i < strlen(accept); i++)
	{
		if ( i == strlen
