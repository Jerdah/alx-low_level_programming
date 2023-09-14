#include <stdio.h>

/**
 * is_prime - Check if an integer is prime.
 * @n: The integer to check.
 * Return: 1 if n is prime, otherwise 0.
 */

int is_prime(long n)
{
	if (n <= 1)
		return (0);

	long i;

	for (i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}

/**
 * largest_prime_factor - Find the largest prime factor of an integer.
 * @n: The integer to factor.
 * Return: The largest prime factor of n.
 */

long largest_prime_factor(long n)
{
	long i = 2;

	while (!is_prime(n))
	{
		while (n % i || !is_prime(i))
			++i;
		n /= i;
	}

	return (n);
}

/**
 * main - Find and print the largest prime factor of 612852475143.
 * Return: Always 0.
 */

int main(void)
{
	printf("The largest prime factor of 612852475143 is %ld\n",
			largest_prime_factor(612852475143));
	return (0);
}
