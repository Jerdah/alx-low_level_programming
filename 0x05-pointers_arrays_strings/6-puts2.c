#include "main.h"

/**
 * puts2 - prints every other character of a string folloed by a new line
 * @str: the string
 *
 * Return: void
 */
void puts2(char *str)
{
	if (str)
	{
		do {
			if (*str)
				_putchar(*str++);
		} while (*str++);
		_putchar('\n');
	}
}
