#include "main.h"

/**
 * append_text_to_file - function appends text to the end of a file
 * @filename: filename
 * @text_content: NULL-terminated string to add at the end of the file
 *
 * Return: 1 on success,
 * Else, -1 on failure if file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result, i;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
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
