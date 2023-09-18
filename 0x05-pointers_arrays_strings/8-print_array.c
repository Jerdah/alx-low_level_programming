#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of integers
 * @a: the beginning of an array of integers
 * @n: the number of elements of the array to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	if (a)
	{
		while (n > 0)
		{
			printf("%d", *a++);
			if (--n)
				printf(", ");
		}
		putchar('\n');
	}
}
