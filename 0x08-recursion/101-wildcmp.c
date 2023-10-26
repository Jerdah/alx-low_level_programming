#include "main.h"

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
	if (*s1 == '\0' && (*s2 == '\0' || (*s2 == '*' && wildcmp(s1, s2 + 1))))
		return (1);

	if (*s2 == '*')
	{
		while (*s2 == '*')
			s2++;
		return (wildcmp(s1, s2) || wildcmp(s1 + 1, s2));
	}

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else
		return (0);
}

