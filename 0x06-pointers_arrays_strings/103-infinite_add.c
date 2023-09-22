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
	int carry = 0, len1, len2, u, v;

	for (len1 = 0; n1[len1]; len1++)
	{
		for (len2 = 0; n2[len2]; len2++)
		{
			if (len1 > size_r || len2 > size_r)
				return (0);
		}
	}

	len1--;
	len2--;
	size_r--;

	for (u = 0; u < size_r; u++, len1--, len2--)
	{
		if (len1 >= 0)
			carry += n1[len1] - '0';

		if (len2 >= 0)
			carry += n2[len2] - '0';

		r[u] = carry % 10 + '0';
		carry /= 10;
	}

	r[u] = '\0';

	if (len1 >= 0 || len2 >= 0 || carry)
		return (0);

	for (u--, v = 0; u > v; u--, v++)
	{
		carry = r[u];
		r[u] = r[v];
		r[v] = carry;
	}

	return (r);
}
