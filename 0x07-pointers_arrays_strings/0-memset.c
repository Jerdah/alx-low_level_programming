#include "main.h"

/**
 * memset - fills memory with a constant byte
 * @n : number of bytes
 * @s: pointer to the memory area
 * @b: constant byte that fills the memory area
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
