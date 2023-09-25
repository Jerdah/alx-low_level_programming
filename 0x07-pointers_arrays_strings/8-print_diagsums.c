#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: pointer to the square matrix.
 * @size: size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, diagsum1 = 0, diagsum2 = 0;

	for (i = 0; i < size; i++)
	{
		diagsum1 += a[i * size + i];
		diagsum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", diagsum1, diagsum2);
}

