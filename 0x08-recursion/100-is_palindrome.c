#include "main.h"

int string_length(char *s);
int is_palindrome_check(char *s, int length, int index);
int is_palindrome(char *s);

/**
 * string_length - function checks the length of a string.
 * @s: string to measure length of
 *
 * Return: The length of the string.
 */
int string_length(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += string_length(s + len);
	}

	return (len);
}

/**
 * is_palindrome_check - function checks if a string is a palindrome or not.
 * @s: string to measure length of
 * @l: length of @s.
 * @i: index of the string to be checked.
 *
 * Return: 1 if the string is a palindrome,
 * otherwise return 0 if the string is not a palindrome
 */
int is_palindrome_check(char *s, int l, int i)
{
	if (s[i] == s[l / 2])

		return (1);

	if (s[i] == s[l - i - 1])

		return (is_palindrome_check(s, l, i + 1));

	return (0);
}

/**
 * is_palindrome - function checks if a string is a palindrome or not.
 * @s: string to measure length of
 *
 * Return: 1 if the string is a palindrome,
 * otherwise return 0 if the string is not a palindrome
 */
int is_palindrome(char *s)
{
	int i = 0;
	int l = string_length(s);

	if (!(*s))

		return (1);

	return (is_palindrome_check(s, l, i));
}
