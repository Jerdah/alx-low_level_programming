#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: pointer to the string to be searched.
 * @needle: pointer to the substring to be located.
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *start_haystack;
	char *current_haystack;
	char *current_needle;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		start_haystack = haystack;
		current_haystack = haystack;
		current_needle = needle;

		while (*current_haystack != '\0' && *current_needle != '\0' &&
				*current_haystack == *current_needle)
		{
			current_haystack++;
			current_needle++;
		}

		if (*current_needle == '\0')
			return (start_haystack);

		haystack++;
	}

	return (NULL);
}
