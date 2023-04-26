#include <stdio.h>
/**
 * positive_or_negative - check for postive or negative numbers
 *
 * @i: the number to be checked
 *
 * Return: always 0
 */

void positive_or_negative(int i)
{
	if (1 < 0)
		printf("%d is negative\n", i);
	else
	       printf("%d is postive\n", i);
}
