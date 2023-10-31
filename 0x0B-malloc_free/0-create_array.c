#include <stdlib.h>

/**
 * create_array - creates array of chars & initializes it with a specific char
 * @size: size of array to be created
 * @c: character the array will be initialized with
 *
 * Return: NULL if size is 0,
 * otherwise return a pointer to the allocated array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
