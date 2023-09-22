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
	int u, v, carry = 0;
	int len1 = 0, len2 = 0;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	u = len1 - 1;
	v = len2 - 1;
	int w = size_r - 1;

	r[w] = '\0';


    while (u >= 0 || v >= 0)
    {
	    int sum = carry;

	    if (u >= 0)
		    sum += n1[u] - '0';
	    if (v >= 0)
		    sum += n2[v] - '0';

	    carry = sum / 10;

	    if (w <= 0)
		    return (0);

	    r[w] = (sum % 10) + '0';

	    u--;
	    v--;
	    w--;
    }

    if (carry)
    {
	    if (w <= 0)
		    return (0);

	    r[w] = carry + '0';
    }

    while (w > 0)
    {
	    r[w] = r[w - 1];
	    k--;
    }

    return (r);
}

