#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Filename.
 * @text_content: Content to be written to the file.
 *
 * Return: 1 if it succeeds, -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int rwr = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (; text_content[rwr]; rwr++)
			;
	}

	if (rwr > 0)
	{
		if (write(fd, text_content, rwr) == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
