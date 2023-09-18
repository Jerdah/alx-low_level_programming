#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to an integer to be swapped
 * @b: pointer to an integer to be swapped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	if (a && b)
	{
		*a ^= *b;
		*b ^= *a;
		*a ^= *b;
	}
}
