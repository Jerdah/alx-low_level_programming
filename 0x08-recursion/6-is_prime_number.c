#include "main.h"

/**
 * is_divisible - a helper function to check if number is divisible by divisor
 * @n: number to checked
 * @j: divisor
 *
 * Return: 1 if @n is divisible by @j
 */
int is_divisible(int n, int j)
{
	if (j == 1)
	{
		return (0);
	}

	if (n % j == 0)
	{
		return (1);
	}

	return (is_divisible(n, j - 1));
}

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

	if (n <= 1)
	{
		return (0);
	}

	return (!is_divisible(n, n - 1));
}
