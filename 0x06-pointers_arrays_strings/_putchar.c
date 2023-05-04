#include "main.h"
#include <unlistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return : on sucess 1
 * on error, -1 is retured and set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
