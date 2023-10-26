#include "main.h"

/**
 * is_prime_number - function determines whether number is a prime number
 * @n: the number to be determined as either prime or not
 * @j: divisor use by is_prime_number to determine wheteher n is prime or not
 *
 * Return: 1 if n is a prime number,
 * otherwise return 0.
 *
 */
int is_prime_number(int n, int j);
{
	if (n % j == 0)
		return (0);
	if (n < j * 2)
		return (1);

	return (is_prime_number(n, j + 1));
}
