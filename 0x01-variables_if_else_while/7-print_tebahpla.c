#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: program prints reversed lowercase alphabet
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char lowercase = 'z';

	while (lowercase >= 'a')
	{
		putchar(lowercase);
		--lowercase;
	}
	putchar('\n');

	return (0);
}
