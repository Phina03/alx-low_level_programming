#include "main.h"
/**
 * _pow_recursion - Function that returns the value of x
 * @x: Value to be considered
 * @y: value to be raised
 * Return: -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	else
	return (x * _pow_recursion(x, y - 1));
}
