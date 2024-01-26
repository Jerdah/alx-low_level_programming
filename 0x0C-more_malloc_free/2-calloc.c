#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: a pointer to a memory area
 * @b: the byte to write to memory
 * @n: no of bytes to write
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
		s[i] = b;
	return (s);
}

/**
 * _calloc - function allocates memory for an array, using malloc
 * @nmemb: Number of elements in the array
 * @size: Size of each element in the array
 *
 * Return: Pointer to the allocated memory, or NULL if the allocation fails or
 * if nmemb or size is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (!(nmemb && size))
		return (NULL);

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
