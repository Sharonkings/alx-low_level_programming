#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @a: first addend
 * @b: second addend
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtracts two integers
 * @a: first number to subtract
 * @b: second number to subtract
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplies two integers
 * @a: first number to multiply
 * @b: second number to multiply
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divide two integers
 * @a: first number to divide
 * @b: second number to divide
 *
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - finds the remainder of the division of two ints
 * @a: first number
 * @b: second second number
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
