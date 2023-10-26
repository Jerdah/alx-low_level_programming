#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * is_alphanumeric - function checks if a character is an alphanumeric
 * @c: character to be checked
 *
 * Return: 1 if the character is an alphanumeric,
 * otherwise return 0 if character is not an alphanumeric.
 */

int is_alphanumeric(char c)
{
	return (isalnum((unsigned char)c));
}

/**
 * is_palindrome_helper - function that checks if a string is a palindrome
 * @s: string to be checked
 * @k: starting index
 * @v: ending index
 *
 * Return: 1 if the string is a palindrome,
 * otherwise return 0 if the string is not a palindrome
 */

int is_palindrome_helper(char *s, int k, int v)
{
	if (k >= v)
	{
		return (1);
	}

	if (is_alphanumeric(s[k]))
	{
		return (is_palindrome_helper(s, k + 1, v - 1));
	}
	else
	{
		return (is_palindrome_helper(s, k, v - 1));
	}
}

/**
 * is_palindrome - function that checks whether a string is a palindrome or not
 * @s : string to be checked
 *
 * Return: 1 if the string is a palindrome,
 * otherwise return 0 if the string is not a palindrome
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_helper(s, 0, len - 1));
}
