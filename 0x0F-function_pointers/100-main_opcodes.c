#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: number of bytes to pass in
 * Return: 0, 1, or 2
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *mainptr;

	mainptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < bytes - 1; i++)
	{
		printf("%02hhx ", (*(mainptr + i)));
	}
	printf("%02hhx\n", (*(mainptr + i)));
	return (0);
}
