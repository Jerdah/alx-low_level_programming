#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int u;

	for (u = 0; u < n / 2; u++)
	{
		a[u] ^= a[n - u - 1];
		a[n - u - 1] ^= a[u];
		a[u] ^= a[n - u - 1];
	}
}
