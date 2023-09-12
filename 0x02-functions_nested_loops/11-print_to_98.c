#include "main.h"

/**
 * print_to_98 - prints all numbers from n to 98.
 * @n: number at the beginning
 */

void print_to_98(int n)
{
	if (n != 98)
	{
		while (1)
		{
			printf("%d, ", n);
			n += (n < 98) ? 1 : -1;
			if (n == 98)
			{
				printf("%d\n", n);
				break;
			}
		}
	}
	else
	{
		printf("%d\n", n);
	}
}
