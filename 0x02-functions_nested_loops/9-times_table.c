#include "main.h"

/**
 * times_table - function prints the 9 times table starting with 0.
 */

void times_table(void)
{
	int i, j, outcome;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			outcome = i * j;

			if (j == 0)
				_putchar(outcome + '0');
			else
				_putchar(',');

			_putchar(' ');

			if (outcome < 10)
				_putchar(' ');

			if (outcome >= 10)
				_putchar(outcome / 10 + '0');

			_putchar(outcome % 10 + '0');

			if (j < 9)
				_putchar(' ');
			else
				_putchar('\n');
		}
	}
}
