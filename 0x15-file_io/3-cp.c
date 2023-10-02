#include "main.h"
#include <stdio.h>

/**
 * error_file - Checks if files can be opened.
 * @file_from: File descriptor for the source file.
 * @file_to: File descriptor for the destination file.
 * @argv: Arguments vector.
 *
 * Return: No return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Copies the contents of one file to another.
 * @argc: Number of arguments.
 * @argv: Arguments vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nrd, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_file(file_from, file_to, argv);

	do {
		nrd = read(file_from, buf, 1024);
		if (nrd == -1)
			error_file(-1, 0, argv);

		nwr = write(file_to, buf, nrd);
		if (nwr == -1)
			error_file(0, -1, argv);

	} while (nrd > 0);

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	return (0);
}

