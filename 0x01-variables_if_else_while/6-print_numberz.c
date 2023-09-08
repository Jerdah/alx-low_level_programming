#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints single digit base 10 numbers starting from 0 then \n
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		++i;

	}
	putchar('\n');

	return (0);
}
