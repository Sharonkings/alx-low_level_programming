#include "main.h"
/**
* flip_bits - returns the number of bits to flip
* @n: the firsr number
* @m: the second number
*
* Return: number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int num = 0;
unsigned long int flip;

flip = n ^ m;

while (flip)
{
num += flip & 1;
flip >>= 1;
}
return (num);
}

