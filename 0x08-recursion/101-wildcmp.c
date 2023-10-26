#include "main.h"

/**
 * _strlen - function calculates the length of a string
 * @s: pointer to the string to find the length of
 *
 * Return: the length of s
 */
unsigned int _strlen(char *s)
{
	return (*s ? _strlen(s + 1) + 1 : 0);
}

/**
 * _strnstr - function locates a substring
 * @s: pointer to the string to search
 * @ss: pointer to subdtring to search for
 * @s_len: maximum number of bytes to match in @s
 * @ss_len: maximum number of bytes to match in @j
 *
 * Return: a pointer to the beginning of the located substring,
 * otherwise return NULL if the substring is not found.
 */
char *_strnstr(char *s, char *ss, unsigned int s_len, unsigned int ss_len)
{
	if (!ss_len || !*ss)
		return (s);

	if (!_strncmp(s, ss, ss_len))
		return (s);

	if (s_len < ss_len || !*s)
		return (NULL);

	return (_strnstr(s + 1, ss, s_len - 1, ss_len));
}

/**
 * _strncmp - function compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * @n: maximum number of bytes to compare
 *
 * Return: 0 if s1 is identical to s2,
 * otherwise an integer < 0 if s1 is < s2,
 * otherwise an integer > 0 if s1 is > s2.
 */
int _strncmp(char *s1, char *s2, unsigned int n)
{
	if (!n)
		return (0);

	if (*s1 == *s2)
		return (*s1 ? _strncmp(s1 + 1, s2 + 1, n - 1) : 0);

	if (*s1)
		return (1);

	if (*s2)
		return (-1);

	return (*s1 - *s2);
}

/**
 * _wildcmp - compares two strings to check whether they are identical.
 * @s1: first string to compare.
 * @s2: second string that can contain '*'
 * @wild_prev: pointer to previous wildcard
 *
 * Return: 1 if the strings can be considered identical,
 * otherwise return 0.
 */
int _wildcmp(char *s1, char *s2, char *wild_prev)
{
	unsigned int s1_len = _strlen(s1);
	unsigned int s2_len = _strlen(s2);
	char *wild = _strnstr(s2, "*", s1_len, 1);

	if (!wild)
	{
		if (!wild_prev)
		{
			if (s1_len != s2_len)
				return (0);

			return (!_strncmp(s1, s2, s1_len));
		}

		if (s1_len < s2_len)
			return (0);

		return (!_strncmp(s1 + (s1_len - s2_len), s2, s2_len));
	}

	if (!wild_prev)
	{
		if (_strncmp(s1, s2, wild - s2))
			return (0);

		return (_wildcmp(s1 + (wild - s2), wild + 1, wild));
	}

	s1 = _strnstr(s1, s2, s1_len, (wild - s2));

	if (!s1 || !*s1)
		return (0);

	if (_wildcmp(s1 + (wild - s2), wild + 1, wild))
		return (1);

	return (_wildcmp(s1 + 1, s2, wild_prev));
}

/**
 * wildcmp - compares two strings to check whether they are identical.
 * @s1: first string to compare.
 * @s2: second string that can contain '*'
 *
 * Return: 1 if the strings can be considered identical,
 * otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	return (_wildcmp(s1, s2, NULL));
}
