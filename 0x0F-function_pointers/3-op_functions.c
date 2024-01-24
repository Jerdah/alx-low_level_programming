#include "3-calc.h"

/**
 * op_add - function returns the sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: result of the summation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function returns the difference between two integers
 * @a: first integer
 * @b: second integer
 * Return: result of the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function returns the product of two integers
 * @a: first integer
 * @b: second integer
 * Return: result of the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function returns the division of two integer
 * @a: first integer
 * @b: second integer
 * Return: result of the division
 */
int op_div(int a, int b)
{
	if (!b)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function returns the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: result of the operation
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
