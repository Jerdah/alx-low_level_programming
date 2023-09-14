#include "main.h"

/**
 *print_square - function prints a square, followed by a new line.
 *@size: define the size of function
 *Return: void
*/

void print_square(int size)
{
	int a;
	int b;

	for (a = 0; a < size; ++a)
	{
		for (b = 0; b < size; ++b)
			_putchar('#');
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
