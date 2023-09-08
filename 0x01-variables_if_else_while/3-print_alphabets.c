#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printsalphabet in lowercase,then in uppercase then \n after
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z' || letter <= 'Z'; letter++)
	{
		putchar(letter);

		if (letter == 'z')
		{
			letter = 'A' - 1;
		}
	}

	putchar('\n');

	return (0);
}
