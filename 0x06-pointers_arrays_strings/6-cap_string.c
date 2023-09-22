#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: string to be capitalized.
 *
 * Return: A pointer to the coverted string.
 */
char *cap_string(char *str)
{
	int u = 0;

	while (str[u] != '\0')
	{
		if (str[u] >= 'a' && str[u] <= 'z')
		{
			if (u == 0 || (str[u - 1] >= 9 && str[u - 1] <= 10) || str[u - 1] == 32 ||
					str[u - 1] == 33 || str[u - 1] == 34 || str[u - 1] == 40 || str[u - 1] ==
					41 || str[u - 1] == 44 || str[u - 1] == 46 || str[u - 1] == 59 ||
					str[u - 1] == 63 || str[u - 1] == 123 || str[u - 1] == 125)
			{
				str[u] -= 32;
			}
		}

		u++;
	}
	return (str);
}
