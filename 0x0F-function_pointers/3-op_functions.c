#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sume of two numbers
 * @b: the second number
 * @a: the second number
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the diff of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the diffrence of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the product of two numbers.
 * @a: the first number
 * @b: second number
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return:  the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder of the divison of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: the remainder of the division of a and b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
