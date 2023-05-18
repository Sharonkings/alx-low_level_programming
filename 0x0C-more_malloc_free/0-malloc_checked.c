#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *tom;

	tom = malloc(b);
	if (tom == NULL)
		exit(98);
	return (tom);
}
