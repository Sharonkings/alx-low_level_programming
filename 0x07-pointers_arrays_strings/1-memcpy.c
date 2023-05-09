#include "main.h"

/**
 * _memcpy-a function that copies memory area
 * @dest:meomory where n is stored
 * @src:meomory where n is copied from
 * @n : number of bytes
 *
 * Return:dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int k = n;

	for (; i < k; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}

