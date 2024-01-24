#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array to search
 * @size: number of elements in the array
 * @cmp: function to use to compare values
 * Return: -1 if size is < 1, or if array or cmp is NULL,
 * or if no match is found.
 * Else, return the index of the first match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
