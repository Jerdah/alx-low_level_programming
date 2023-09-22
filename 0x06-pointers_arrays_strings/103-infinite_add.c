#include "main.h"

/**
 * infinite_add - function adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: The buffer to store the result
 * @size_r: The buffer size
 *
 * Return: A pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum, i;

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;

	if (len1 + len2 + 1 > size_r)
		return (0);

	r[len1 + len2] = '\0';

	for (i = 1; len1 >= i || len2 >= i || carry; i++)
	{
		sum = carry;
		if (len1 >= i)
			sum += n1[len1 - i] - '0';
		if (len2 >= i)
			sum += n2[len2 - i] - '0';

		carry = sum / 10;
		r[len1 + len2 - i] = sum % 10 + '0';
	}

	return (r);
}
