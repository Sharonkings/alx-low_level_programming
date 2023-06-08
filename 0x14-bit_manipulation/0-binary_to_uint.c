#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to a string containing the binary number 0 and 1
 *
 * Return: the converted number or 0 if there is one or more chars in the
 * string b that is not 1 or 0, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		total = 2 * total + (b[i] - '0');
	}
	return (total);
}




