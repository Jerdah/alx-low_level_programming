#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program prints lowercase alphabet except q and e followed by \n
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase == 'e' || lowercase == 'q')
			++lowercase;
		putchar(lowercase);
		++lowercase;
	}
	putchar('\n');

	return (0);
}
