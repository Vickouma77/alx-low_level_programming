#include "main.h"
#include <stdio.h>

/**
 * swap_int- swaps the values of 2 integers
 * @a: pointer 1
 * @b: pointer 2
 *
 * Returns 0
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
