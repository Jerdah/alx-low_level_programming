#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * print_error - funcn prints an error message to stderr and exits with a code
 * @code: the exit code
 * @file: filename associated with the error
 */
void print_error(int code, const char *file)
{
	fprintf(stderr, "Error: Can't ");
	if (code == 97)
		fprintf(stderr, "read from file %s\n", file);
	else if (code == 99)
		fprintf(stderr, "write to %s\n", file);
	else if (code == 100)
		fprintf(stderr, "close fd %s\n", file);

	exit(code);
}

/**
 * main - Entry point
 * @argc: no of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success,
 * Else, return 97 on incorrect no of arguments,
 * Else, return 98 if file_from cannot be read,
 * Else, return 99 if file_to cannot be written,
 * Else, 100 if file descriptor cannot be closed
 */
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
