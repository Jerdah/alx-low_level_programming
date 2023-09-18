#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: the string
 *
 * Return: void
 */
void _puts(char *str)
{
	if (str)
	{
		while (*str)
			_putchar(*str++);
		_putchar('\n');
	}
}
