#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: minimumn included value of the array
 * @max: maximum included value of the array
 *
 * Return: Pointer to the created array. If min > max,
 * or if the memory allocation fails, the function returns NULL.
 *
 */

int *array_range(int min, int max)
{
	int size;
	int i;

	int *array;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	array = malloc(sizeof(int) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
