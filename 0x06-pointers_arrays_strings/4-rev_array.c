#include "main.h"

/**
 * reverse_array - prints array in reverse
 * @a: array to be reversed
 * @n: number of elements to be reversed
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j  = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}