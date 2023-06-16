#include "main.h"
/**
 * main - Copies the content of a file to another file
 * @ac: number of arguments passed to the program
 * @av: an array of pointer to the arguments passed to the program
 *
 * Return: 1 on success , exit 97, 98, 99, 100 on error
 */
int main(int ac, char **av)
{
	int closelin, closeslin2, bit_read, bit_writ, fd_from, fd_to;
	char buffer[BUFSIZ];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while ((bit_read = read(fd_from, buffer, BUFSIZ)) > 0)
	{
		bit_writ = (write(fd_to, buffer, bit_read));
		if (bit_writ != bit_read)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	if (bit_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	closelin = close(fd_from);
	if (closelin == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	closeslin2 = close(fd_to);
	if (closeslin2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
