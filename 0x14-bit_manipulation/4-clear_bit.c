#include "main.h"

/**
 * clear_bit - function sets the value of a bit to 0 at a given index
 * @n: pointer to the number whose bit needs to be cleared
 * @index: Index of the bit to be cleared
 *
 * Return: 1 if it worked
 * Else -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1 << index;
	*n = *n & ~mask;

	return (1);
}
