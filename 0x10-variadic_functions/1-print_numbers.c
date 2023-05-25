#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separator string
 * @n: number of integers passed to function
 * Return: return 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list no;
	unsigned int i;

	va_start(no, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(no, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(no);
}
