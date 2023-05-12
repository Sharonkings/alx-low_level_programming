#include <stdio.h>
#include "main.h"

/**
 * main - prints the numbe of arguments passed to the program
 * @argc: number of command line arguments
 * @argv: array of strings containing those arguments
 * Return: Always 0(success)
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
