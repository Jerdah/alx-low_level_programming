#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: A pointer to the string to be located.
 * @c: character to be located
 *
 * Return: a pointer to the first occurrence of @c (converted to a char) in @s
 * or NULL if the character @c doesn't return a string @s.
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
