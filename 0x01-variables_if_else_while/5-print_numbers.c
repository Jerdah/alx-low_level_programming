#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints all base 10 single digit numbers from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		++i;
	}
	printf("\n");

	return (0);
}
