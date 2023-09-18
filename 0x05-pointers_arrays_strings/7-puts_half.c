#include "main.h"

/**
 * puts_half - prints a half of a string
 * @str: the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len;

	if (str)
	{
		for (len = 0; *(str + len); ++len)
			;
		for (str += (len + 1) / 2; *str; ++str)
			_putchar(*str);
		_putchar('\n');
	}
}
