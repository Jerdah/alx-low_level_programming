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
	char *v = s;

	while (*v)
	{
		switch (*v)
		{
			case 'a':
			case 'A':
				*v = '4';
				break;
			case 'e':
			case 'E':
				*v = '3';
				break;
			case 'o':
			case 'O':
				*v = '0';
				break;
			case 't':
			case 'T':
				*v = '7';
				break;
			case 'l':
			case 'L':
				*v = '1';
				break;
		}
		v++;
	}

	return (s);
}
