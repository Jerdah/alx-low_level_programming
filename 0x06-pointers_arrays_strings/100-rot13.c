#include "main.h"

/**
 * rot13 - encodes  a string using ROT13.
 *
 * @s: string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
	char *p = s;
	char *rot13Map = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13Replace = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*s)
	{
		int u = 0;
		int found = 0;

		while (rot13Map[u])
		{
			if (*s == rot13Map[u])
			{
				*s = rot13Replace[u];
				found = 1;
				break;
			}
			u++;
		}

		if (!found)
			s++;
	}

	return (p);
}

