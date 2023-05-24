#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function on each element of array
 * @array: an integer array we are executing function on
 * @size: size of integer array
 * @action: function pointer that takes an integer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
