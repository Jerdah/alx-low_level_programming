#include "main.h"

/**
 * _sqrt - function to compute the square root recursively
 * @n: number to compute the square root of
 * @j: divisor
 *
 * Return: natural square root of n,
 * otherwise -1 if n has no natural square root
 */
int _sqrt (int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return _sqrt(n, j + 1);
}

/**
 *  _sqrt_recursion - function computes the natural square root of a number
 * @n: number to compute the square root of
 *
 * Return: natural square root of n,
 * otherwise -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
