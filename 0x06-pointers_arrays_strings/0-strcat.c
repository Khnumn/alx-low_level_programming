#include "main.h"

/**
 *
 *
 *
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, dest_len =0;

       	for (a = 0 ; a < n && src[a] != '\0' ; a++)
		dest[dest_len + a] = src[a];
	 dest[dest_len + a] = '\0';

	 return (dest);
}
