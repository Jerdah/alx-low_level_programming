#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the sum of even Fibonacci numbers < 4,000,000.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	long int first = 1, second = 2, next, sum = 0;

	while (first <= 4000000)
	{
		if (first % 2 == 0)
			sum += first;

		next = first + second;
		first = second;
		second = next;
	}

	printf("%ld\n", sum);

	return (0);
}
