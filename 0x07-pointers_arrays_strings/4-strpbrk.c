#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: a set is matched
 * If no set is matched - NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while(*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}
	return ('\0');
}
