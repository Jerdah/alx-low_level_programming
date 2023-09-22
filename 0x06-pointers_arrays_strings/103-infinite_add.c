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
	int carry = 0, len1, len2, sum;
	int i = 0;

	for (len1 = 0; n1[len1]; len1++)
	{}
	for (len2 = 0; n2[len2]; len2++)
	{}

	len1--;
	len2--;

	while (len1 >= 0 || len2 >= 0 || carry)
	{
		sum = carry;
		if (len1 >= 0)
		{
			sum += n1[len1] - '0';
			len1--;
		}

		if (len2 >= 0)
		{
			sum += n2[len2] - '0';
			len2--;
		}

		carry = sum / 10;
		r[i] = (sum % 10) + '0';
		i++;

		if (i >= size_r - 1)
			return (0);
	}
	r[i] = '\0';

	int start = 0, end = i - 1;
	while (start < end)
    {
	    char temp = r[start];
	    r[start] = r[end];
	    r[end] = temp;
	    start++;
	    end--;
    }

	return (r);
}
