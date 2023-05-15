#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory,
*which contains a copy of the string given as a parameter
*
* @str: string to copy
*
* Return: pointer to the duplicated string, or NULL if it fails
*/
char *_strdup(char *str)
{
char *dup_str;
int len, i;

i = 0;
len = 0;

if (str == NULL)
return (NULL);

while (str[len])
len++;
dup_str = malloc(sizeof(char) * (len + 1));

if (dup_str == NULL)
return (NULL);

while ((dup_str[i] = str[i]) != '\0')
i++;

return (dup_str);
}
