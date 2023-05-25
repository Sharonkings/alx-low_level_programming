#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct datatype - Struct datatype
 *
 * @type: The type of argument
 * @func: The function pointer to the print function
 */
typedef struct datatype
{
	char *type;
	void (*func)(va_list list);
}data_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

#endif
