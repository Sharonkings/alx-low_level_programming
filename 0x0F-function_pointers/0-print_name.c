#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: a variable pointing to a character array...the name to print
 * @f: a function pointer that takes a character array
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
	return;
	f(name);
}
