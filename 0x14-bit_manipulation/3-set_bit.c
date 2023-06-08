#include "main.h"
/**
 * set_bit - set the value of bit to 1 at a given index
 * @index: the index of the bit i want to set starting from 0
 * @n: the number to search
 *
 * Return: 1 (sucess)or -1 (error)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | 1 << index;
	return (1);
}
