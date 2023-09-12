#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 */

void times_table(void)
{
	int row, column, result;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			result = row * column;
			if (column == 0)
			{
				_putchar('0' + result);
			}
			else if (result < 10)
			{
				_putchar(' ');
				_putchar('0' + result);
			}
			else
			{
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}

			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
