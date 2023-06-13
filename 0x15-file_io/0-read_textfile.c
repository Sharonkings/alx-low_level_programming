#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letter it should read and print
 *
 * Return: the actual number of letters read and printed or 0
 * if an error occurs
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytrs_read = 0, bytes_written = 0;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	bytrs_read = read(fd, buffer, letters);
	if (bytrs_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytrs_read);
	if (bytes_written == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (bytes_written);
}

