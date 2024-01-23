#include "main.h"

/**
 * malloc checked - allocates memory
 * @b: the number of bytes to allocate
 *
 * Return: address of the first byte of memory allocated
 * Otherwise,return a status value of 98.
 */

void *malloc_checked(unsigned int b)
{
	void *t;

       	t = malloc(b);

	if (t == NULL)
	{
		exit(98);
	}

	return (t);
}