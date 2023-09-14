#include "main.h"

/**
 * print_line - draws a straight line on the terminal.
 * @n: length of the line
 *
 * Return: void
 */

void print_line(int n)
{
	int a = '_';
	int b;

	for (b = 0; b < n; ++b)
	{
		if (n <= 0)
			_putchar ('\n');
		else
			_putchar(a);
	}
	_putchar('\n');
}
