#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of a program
* @ac: the number of arguments
* @av: an array of strings containing the arguments
*
* Return: a pointer to a new string containing the concatenated
* arguments,
* or NULL if ac == 0 or av == NULL or if malloc fails to allocate memory
* each argument is followed by a newline character in the new string
*/
char *argstostr(int ac, char **av)
{
int i, j, pos, len;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;
len++;
}

str = malloc(sizeof(char) * (len + 1));
if (str == NULL)
return (NULL);

pos = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
	str[pos] = av[i][j];
	pos++;
}
str[pos] = '\n';
pos++;
}

return (str);
}
