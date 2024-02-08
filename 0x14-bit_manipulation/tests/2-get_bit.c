#include "main.h"

/**
 * get_bit - function eturns the value of a bit at a given index.
 * @n: number to get the bit from.
 * @index: index of the bit to retrieve
 *
 * Return:value of the bit at the specified index,
 * Else return -1 if theres an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
	    return (-1);

    return ((n >> index) & 1);
}
