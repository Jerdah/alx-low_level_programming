#include "main.h"

/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: filename to read
 * @letters: no of letters to read and print
 *
 * Return: actual no of letters that could be read and printed,
 * Else, return 0 if write fails or the file cannot be read/opened
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, read_result, write_result;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	read_result = read(file_descriptor, buffer, letters);
	if (read_result == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	write_result = write(STDOUT_FILENO, buffer, read_result);
	if (write_result == -1 || write_result != read_result)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (read_result);
}
