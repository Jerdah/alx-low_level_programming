#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line.
*/

void print_alphabet(void)
{
	char lowercase = 'a';


	while (lowercase <= 'z')
	{
		_putchar(lowercase);
		lowercase++;
	}
	_putchar('\n');
}
