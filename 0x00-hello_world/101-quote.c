#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints exact message to standard error.
 *
 * Return: Always 1 (Standard Error)
 */

int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
