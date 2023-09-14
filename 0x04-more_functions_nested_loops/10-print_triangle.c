#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: define the size of function

 * Return: void
 */

void print_triangle(int size)
{
	int a;
	int b;

	for (a = 1; a <= size; ++a)
	{
		for (b = size; b > a; --b)
			_putchar(' ');
		for ( ; b > 0; --b)
			_putchar('#');
	}
	if (size <= 0)
		_putchar('\n');
}
