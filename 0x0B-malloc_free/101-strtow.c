#include <stdlib.h>

/**
 * is_space - function checks whether a character is a whitespace character.
 *
 * @c: character to be checked by is_space
 *
 * Return: 1 if the character is a whitespace.
 * otherwise return 0
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - function checks the number of words in a string.
 *
 * @str: string to count words in.
 *
 * Return: number of words in the string.
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (is_space(*str))
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 *
 * @str: The input string to split into words.
 *
 * Return: If str is NULL or empty, return NULL.
 *         Otherwise, return an array of strings representing the words.
 *         The last element of the array is NULL.
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	int words = count_words(str);
	char **result = (char **)malloc((words + 1) * sizeof(char *));

	if (result == NULL)
		return (NULL);

	int i = 0;
	int in_word = 0;
	char *start = str;

	while (*str)
	{
		if (is_space(*str))
		{
			if (in_word)
			{
				int length = str - start;

				result[i] = (char *)malloc((length + 1) * sizeof(char));

				if (result[i] == NULL)
				{
					for (int j = 0; j < i; j++)
						free(result[j]);
					free(result);
					return (NULL);
				}

				for (int j = 0; j < length; j++)
					result[i][j] = start[j];
				result[i][length] = '\0';
				i++;
				in_word = 0;
			}
		}
		else if (!in_word)
		{
			start = str;
			in_word = 1;
		}
		str++;
	}

	if (in_word)
	{
		int length = str - start;

		result[i] = (char *)malloc((length + 1) * sizeof(char));

		if (result[i] == NULL)
		{
			for (int j = 0; j <= i; j++)
				free(result[j]);
			free(result);
			return (NULL);
		}

		for (int j = 0; j < length; j++)
			result[i][j] = start[j];
		result[i][length] = '\0';
		i++;
	}

	result[i] = NULL;
	return (result);
}
