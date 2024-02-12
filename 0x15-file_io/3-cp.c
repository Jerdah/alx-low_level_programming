#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * main - Entry point
 * @ac: no of command-line arguments
 * @av: Array of command-line arguments
 *
 * Return: 0 on success,
 * Else, return 97 on incorrect no of arguments,
 * Else, return 98 if file_from cannot be read,
 * Else, return 99 if file_to cannot be written,
 * Else, 100 if file descriptor cannot be closed
 */
void print_error(int code, const char *file)
{
	switch (code)
	{
		case 97:
			dprintf(2, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(2, "Error: Can't read from file %s\n", file);
			break;
		case 99:
			dprintf(2, "Error: Can't write to %s\n", file);
			break;
		case 100:
			dprintf(2, "Error: Can't close fd %s\n", file);
			break;
	}
	exit(code);
}

int main(int argc, char *argv[])
{
	int fd_from, fd_to, read_result, write_result;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		print_error(97, NULL);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		print_error(99, argv[2]);

	while ((read_result = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		write_result = write(fd_to, buffer, read_result);
		if (write_result == -1 || write_result != read_result)
			print_error(99, argv[2]);
	}

	if (read_result == -1)
		print_error(98, argv[1]);

	if (close(fd_from) == -1 || close(fd_to) == -1)
		print_error(100, NULL);

	return (0);
}
