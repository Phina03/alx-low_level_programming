#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - returns sum of two numbers
 * @a: the first number to be added
 * @b: the second number to be added
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two numbers
 * @a: the first number
 * @b: the second number
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two numbers
 * @a: the first value
 * @b: the second value
 * Return: a * b$
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of division
 * @a: the first value
 * @b: the second value
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of a div
 * @a: the first value
 * @b: the second value
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
