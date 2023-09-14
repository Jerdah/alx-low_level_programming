#include "main.h"

/**
 * print_square - Print a square followed by a new line.
 * @size: Size of the square.
 *
 * Return: void
 */

void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; ++row)
	{
		for (col = 0; col < size; ++col)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

