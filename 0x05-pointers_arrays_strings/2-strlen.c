#include "main.h"

/**
 * int _strlen-  function that returns the length of a string
 *@s: string variable
 * Return : 0 succcess
 */

int _strlen(char *s)
{
	int lenz = 0;

	while (s != '\0')
	{
		lenz++;
		s++;
	}

	return (lenz);
}
