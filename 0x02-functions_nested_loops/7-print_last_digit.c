#include "main.h"

/**
 * print_last_digit - function prints the last digit of a number.
 *
 * @n: this is the integer
 *
 * Return: The value of the last digit.
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = -1 * (n % 10);
	else
		last_digit = n % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}
