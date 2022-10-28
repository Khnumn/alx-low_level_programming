#include "main.h"

/**
 *
 *
 *
 *
 */

char *_strncat(char *dest, char *src, int n)
{	
		int a = 0,dest_len =0;                                                                                                                                                                                                
	        while (dest[a++])                                                                                              
	                dest_len++;   I                                                                                        			 for (a = 0 ; src[a] && a < n ; a++)      			
			dest[dest_len a] = src[a];    
		return (dest);
}
