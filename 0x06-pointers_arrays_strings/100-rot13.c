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
	char *current_char;
	char shift;

	for (current_char = s; *current_char; ++current_char)
	{
		shift = 'A' + (*current_char & 32);
		if (('a' <= *current_char && *current_char <= 'z') || ('A' <= *current_char
					&& *current_char <= 'Z'))
			*current_char = (*current_char - shift + 13) % 26 + shift;
	}

	return (s);
}
