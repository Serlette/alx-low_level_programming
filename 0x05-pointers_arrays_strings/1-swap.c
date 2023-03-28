#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: pointer to value1
 * @b: pointer to value2
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
