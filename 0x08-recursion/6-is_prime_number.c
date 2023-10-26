#include "main.h"

/**
 * is_prime_number - function determines whether number is a prime number
 * @n: the number to be determined as either prime or not
 *
 * Return: 1 if n is a prime number,
 * otherwise return 0.
 *
 */
int is_prime_number(int n)
{
	int j;

	if (n <= 1)
	{
		return (0);
	}

	for (j = 2; j <= n / 2; j++)
	{
		if (n % j == 0)
		{
			return (0);
		}
	}
	return (1);
}
