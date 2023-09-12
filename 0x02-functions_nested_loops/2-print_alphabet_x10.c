#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase then a \n
 *
*/

void print_alphabet_x10(void)
{
	int line, lowercase;

	for (line = 0; line <= 9; ++line)
	{
		for (lowercase = 'a'; lowercase <= 'z'; ++lowercase)
			_putchar(lowercase);
		_putchar('\n');
	}
}
