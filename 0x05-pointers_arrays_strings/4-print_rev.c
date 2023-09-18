#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	char *t = s;

	if (s)
	{
		while (*t)
			++t;
		while (s < t--)
			_putchar(*t);
		_putchar('\n');
	}
}
