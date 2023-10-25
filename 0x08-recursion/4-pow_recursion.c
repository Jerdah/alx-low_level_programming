include "main.h"

/**
 * _pow_recursion -  function returns the value of x raised to the power of y
 * @y : power that a number will be raised to
 * @x : number to be raised to a power
 *
 * Return: value of x raise to the power of y,
 * otherwise return -1 if y is negative
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
