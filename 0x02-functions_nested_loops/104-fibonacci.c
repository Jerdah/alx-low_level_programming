#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers; starts with 1 and 2.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	unsigned long first = 1, second = 2, next;
	int count;

	printf("%lu, %lu, ", first, second);

	for (count = 3; count <= 98; count++)
	{
		next = first + second;
		printf("%lu", next);

		if (count < 98)
			printf(", ");

		first = second;
		second = next;
	}

	printf("\n");

	return (0);
}

