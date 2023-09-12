#include "main.h"

/**
 *  _abs - prints the computation of the  absolute value of an integer.
 * @n: the integer
 *
 * Return: The absolute value of n.
 */

int _abs(int n)
{
	if (n < 0)
		return -n;
	else
		return n;
}
