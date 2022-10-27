#include "main.h"

/**
 *
 *
 *
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	dest_len =0;

	while (dest[a++])
		dest_len++;
       	for (a = 0 ; src[a] != '\0' ; a++)
		dest[dest_len + a] = src[a];
	 dest[dest_len + a] = '\0';

	 return (dest);
}
