#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params -input value
 *
 * Return: s value
 */

char *rot13(char *s)
{
	int i;
	int j;
	char Y1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char Y2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == Y1[j])
			{
				s[i] = Y2[j];
				break;
			}
		}
	}
	return (s);
}

