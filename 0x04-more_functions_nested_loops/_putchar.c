#include "main.h"
#include <unistd.h>
/**
* _putchar - writes the character n to stdout
* @n: The character to print
*
* Return: voild
*/

int _putchar(char n)
{
	return (write(1, &n, 1));
}

