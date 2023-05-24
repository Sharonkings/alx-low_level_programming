#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: number of elements in array
 * @cmp: function pointer thaat takes an int
 * Return: index of element or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if ((array == NULL ||  cmp == NULL) || size < 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
			return (i);
	}
	return (-1);
}
