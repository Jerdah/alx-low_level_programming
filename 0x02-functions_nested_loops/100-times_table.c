#include "main.h"

/**
 * print_times_table - function prints the n times table, starting with 0.
 * @n: amount of time tables to be printed
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, result;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;

				_putchar(result / 100 + '0');
				_putchar(result / 10 % 10 + '0');
				_putchar(result % 10 + '0');

				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					if (i * (j + 1) < 10)
						_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}

