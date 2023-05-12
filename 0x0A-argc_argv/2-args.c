#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of command line arguments
 * @argv: array of strings containing those arguments
 * Return: Always 0(success)
 */

int main(int argc, char **argv)
{
	int f;

	for (f = 0; f < argc; f++)
	{
		printf("%s\n", argv[f]);
	}
	return (0);
}

