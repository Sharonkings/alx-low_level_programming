#include "main.h"
/**
 * get_bit - return the value of the bit at a given index
 * @index: is the index of the bit i want to to get
 * @n: number to extract the bit bit from
 *
 * Return: the value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int get;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	get = n >> index & 1;
	return (get);
}
