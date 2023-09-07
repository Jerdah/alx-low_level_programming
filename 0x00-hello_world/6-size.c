#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the size of various computer types
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	printf("Char size: %zu byte(s)\n", sizeof(char));
	printf("Int size: %zu byte(s)\n", sizeof(int));
	printf("Long int size: %zu byte(s)\n", sizeof(long int));
	printf("Long long int size: %zu byte(s)\n", sizeof(long long int));
	printf("Float size: %zu byte(s)\n", sizeof(float));

	return (0);
}
