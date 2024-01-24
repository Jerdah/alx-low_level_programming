#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function allocates dynamic memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: On success return a pointer to the newly allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p)
	{
		exit(98);
	}
	return (p);
}
