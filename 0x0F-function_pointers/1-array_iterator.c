#include "function_pointers.h"

/**
 * array_iterator - function performs actions on each element of an array
 * @array: array to iterate over
 * @size: size of an array
 * @action: to be performed on each array element
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		while (size--)
			action(*array++);
	}
}
