#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *ar;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ar = malloc(sizeof(int) * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ar[i] = min++;

	return (ar);
}

