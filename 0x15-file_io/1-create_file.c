#include "main.h"


/**
 * create_file - function creates a file
 * @filename: name of the file to be created
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success,
 * Else, -1 if file cannot be created
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result, i;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;

		write_result = write(file_descriptor, text_content, i);
		if (write_result == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
