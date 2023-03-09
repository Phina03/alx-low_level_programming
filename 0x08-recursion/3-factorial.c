#include "main.h"
/**
 * factorial: Function that returns the factorial of a num
 * @n: number to be printed
 * Return: -1 (error)
 */
int factorial(int n)
{
	if (n < 0)

		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);
	else
		return (n * factorial (n - 1));
}
