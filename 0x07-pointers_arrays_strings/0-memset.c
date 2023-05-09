#include "main.h"
/**
 * _memset -fill a block of meomory with a specfic value
 * @s : starting adresss of meomory to be filled
 * @b: the desired value
 * @n : number of bytes to be changed
 *
 * Return : changed array with new values for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (;n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
