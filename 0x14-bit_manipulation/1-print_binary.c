#include "main.h"

/**
 * _print_binary - helper function to print the binary representation
 * @n: number to print in binary
 */
void _print_binary(unsigned long int n)
{
	if (n > 1)
		_print_binary(n >> 1);
	_putchar('0' + (n & 1));

}

/**
 * print_binary - function prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	if (n)
		_print_binary(n);
	else
		_putchar('0');
}
