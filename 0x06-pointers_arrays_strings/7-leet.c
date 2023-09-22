#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * Letters a and A are replaced by 4.
 * Letters e and E are replaced by 3.
 * Letters o and O are replaced by 0.
 * Letters t and T are replaced by 7.
 * Letters l and L are replaced by 1.
 *
 * @s: input string to be encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *s)
{
	int v;
	char *p = s;
	char leetMap[10] = "aAeEoOtTlL";
	char leetReplace[10] = "4433007711";

	while (*s)
	{
		for (v = 0; v < 10; v++)
		{
			if (*s == leetMap[v])
			{
				*s = leetReplace[v];
				break;
			}
		}
		s++;
	}

	return (p);
}
