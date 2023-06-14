#include "main.h"

/**
 * create_file - creates a file and writes astring to it
 * @filename: the name of the file to create
 * @text_content: the string to write to the fiile
 *
 * Return: on success 1, on failure -1
 */
int create_file(const char *filename, char *text_content)
{
	int length = 0, fd, bytrs_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (text_content != NULL)
	{
		while (text_content[length] != 0)
			length++;
	}

	bytrs_written = write(fd, text_content, length);

	if (fd == -1 || bytrs_written == -1)
		return (-1);

	close(fd);
	return (1);
}


