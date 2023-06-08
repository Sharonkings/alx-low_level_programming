#include "main.h"
/**
 * clear_bit - setts the value of the bit to 0 at a given index
 * @index: the index of the bit to set
 * @n: pointer to the number to clear
 *
 * Return: 1 (success) or -1(error)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1UL << index);
	return (1);
}




