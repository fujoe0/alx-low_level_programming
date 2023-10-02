#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Filename.
 * @text_content: Added content.
 *
 * Return: 1 if the file exists, -1 if it does not exist or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int rwr = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (; text_content[rwr]; rwr++)
			;

		if (write(fd, text_content, rwr) == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
