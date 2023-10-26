#include "main.h"
#include <string.h>

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

	if (len <= 1)
	{
		return (1);
	}

	if (s[0] == s[len - 1])
	{
		s[len - 1] = '\0';
		return (is_palindrome(s + 1));
	}

	return (0);
}
