#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: program prints all base16 numbers in lowercase then \n
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 48;

	while (i <= 102)
	{
		putchar(i);

		if (i == 57)
			i += 39;
		++i;
	}
	putchar('\n');

	return (0);
}
