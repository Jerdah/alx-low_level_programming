#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: at most n bytes of src are copied.
 *
 * Description:
 *- function copies the string pointed to by src, including the terminating
 *	null byte ('\0'), to the buffer pointed to by dest.
 *- at most n bytes of src are copied.
 *
 * Return: a pointer to the destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dest_str_len = 0;
	int src_str_len = 0;

	while (dest_str_len < n && src[src_str_len])
	{
		dest[dest_str_len] = src[src_str_len];
		dest_str_len++;
		src_str_len++;
	}

	while (dest_str_len < n)
	{
		dest[dest_str_len] = '\0';
		dest_str_len++;
	}

	return (dest);
}
