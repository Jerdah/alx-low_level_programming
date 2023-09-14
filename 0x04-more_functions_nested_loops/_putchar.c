#include "main.h"

/**
 * _putchar - function writes the character c to stdout
 * @c: character
 *
 * Return: on success 1, -1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
