#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: size of the diagonal line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int a;
	int b;

	for (a = 0; a < n; ++a)
	{
		for (b = 0; b < a; ++a)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
