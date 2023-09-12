#include "main.h"

/**
 * main - function checks the _islower function.
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

