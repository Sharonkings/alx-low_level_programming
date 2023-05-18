#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes to concatenate from s2
 *
 * Return: a pointer to the newly allocated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int lens1, lens2, j, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (lens1 = 0; s1[lens1] != '\0'; lens1++)
		;

	for (lens2 = 0; s2[lens2] != '\0'; lens2++)
		;

	if (n > lens2)
		n = lens2;

	j = lens1 + n;

	concat = malloc(j + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		if (i < lens1)
			concat[i] = s1[i];
		else
			concat[i] = s2[i - lens1];

	concat[i] = '\0';

	return (concat);
}

