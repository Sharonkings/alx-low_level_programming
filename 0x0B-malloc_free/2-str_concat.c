#include <stdlib.h>
#include "main.h"

/**
* str_concat - concatenates two strings
* @s1: the first string to concatenate
* @s2: the second string to concatenate
*
* Return: a pointer to a newly allocated space in memory containing the
* contents of s1, followed by the contents of s2, and null terminated,
* or NULL
* if memory allocation fails
*/

char *str_concat(char *s1, char *s2)
{
char *concat;
int len1 = 0, len2 = 0, i = 0, j = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1])
len1++;
while (s2[len2])
len2++;

concat = malloc(sizeof(char) * (len1 + len2 + 1));
if (concat == NULL)
return (NULL);

while (s1[i])
{
concat[i] = s1[i];
i++;
}

while (s2[j])
{
concat[i] = s2[j];
i++;
j++;
}

concat[i] = '\0';
return (concat);
}

