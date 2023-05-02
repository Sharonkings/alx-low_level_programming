#include "main.h"

/**
 * _strlen - retruns the strings length
 *@s : string whose lenght to be printed
 *Return: length of the strings
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);

}


