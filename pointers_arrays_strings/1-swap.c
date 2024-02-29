#include "main.h"

/**
 * swp_int -  function that swaps the values of two integers.
 * @a - pointer a
 * @b - pointers b
 *
 * return: void/
 */
void swap_int(int *a, int *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}
