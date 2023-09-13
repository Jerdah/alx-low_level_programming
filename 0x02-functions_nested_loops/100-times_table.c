#include "main.h"

/**
 * print_times_table - function prints the n times table, starting with 0.
 * @n: amount of time tables to be printed
 */

void print_times_table(int n)
{
	int i, j, result;

	if (n <= 15 && n >= 0)
	{
		for (result = 0; result <= n; ++result)
		{
			_putchar(48);
			for (j = 1; j <= n; ++j)
			{
				_putchar(',');
				_putchar(' ');

				prod = result * j;

				if (i <= 9)
					_putchar(' ');
				if (i <= 99)
					_putchar(' ');

				if (i >= 100)
				{
					_putchar((i / 100) + 48);
					_putchar((i / 10) % 10 + 48);
				} else if (i <= 99 && i >= 10)
					_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
			_putchar('\n');
		}
	}
}

