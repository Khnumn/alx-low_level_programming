#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: If c is found - a pointer to the first occurence.
 * c is not found - NULL.
 */
char *_strchr(char *s, char c);
{
	int i;

	for (i = 0; i < s(i); i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
