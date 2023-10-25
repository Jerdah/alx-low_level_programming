#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n : number to calculate the factorial of
 *
 * Return: factorial of n,
 * Otherwise return -1 if n is negative
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
