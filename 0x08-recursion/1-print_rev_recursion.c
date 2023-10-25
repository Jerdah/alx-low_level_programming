#include "main.h"

/**
 * _print_rev_recursion - function prints a reversed string
 * @s: reversed string to be printed
 *
 * Return : void
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
