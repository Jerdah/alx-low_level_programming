#include "main.h"
#include <stdio.h>

/**
 * main - Test the largest_prime_factor function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long result;

	result = largest_prime_factor(612852475143);
	printf("Largest prime factor of 612852475143: %ld\n", result);

	result = largest_prime_factor(56);
	printf("Largest prime factor of 56: %ld\n", result);

	result = largest_prime_factor(17);
	printf("Largest prime factor of 17: %ld\n", result);

	return (0);
}
