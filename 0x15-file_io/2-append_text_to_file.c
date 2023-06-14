#include "main.h"
/**
 * append_text_to_file - appens text at the end of a file.
 * @filename: the name of the file
 * @text_content:the NULL terminated string to add at the end of the file
 *
 * Return:1 on success , -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int bytrs_written, fd, text_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length] != 0)
			text_length++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	bytrs_written = write(fd, text_content, text_length);

	close(fd);

	if (bytrs_written == -1 || fd == -1)
		return (-1);

	return (1);
}



