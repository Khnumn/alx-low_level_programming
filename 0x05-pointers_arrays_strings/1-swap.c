#include "main.h"

/**
 * void swap_int - swaps the values of two integers.
 * @*a:
 * @*b:
 * Return : void
 */
void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a=*b;
	*b=tmp;
}
