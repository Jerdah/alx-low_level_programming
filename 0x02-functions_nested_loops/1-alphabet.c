#include"main.h"

/**
 * main - check the code
 *
 * Description: print_alphabet - prints lowercase alphabet followed by \n
 *
 * Return Always 0 (Success)
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n);
}
