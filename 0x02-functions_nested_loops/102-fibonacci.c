#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int a = 1, b = 2, c, i;

	printf("%ld, %ld", a, b);

	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}

	printf("\n");

	return (0);
}

