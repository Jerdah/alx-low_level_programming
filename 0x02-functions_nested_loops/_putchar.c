#include "main.h"
#include <unistd.h> 

/**
 * _putchar - writes a character to stdout.
 * @c: character to print.
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _putchar(char c)
{
    return write(1, &c, 1);
}

