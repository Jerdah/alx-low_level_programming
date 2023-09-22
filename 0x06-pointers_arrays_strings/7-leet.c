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
	int u;
	char *p = s;

	while (*s)
	{
		for (u = 0; "AEOTLaeotl"[u]; u++)
		{
			if (*s == "AEOTLaeotl"[u])
			{
				*s = "4307104310"[u];
				break;
			}
		}
		s++;
	}

	return (p);
}
