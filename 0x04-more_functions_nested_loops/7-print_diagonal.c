#include "main.h"
/**
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: The number of times the char should appear
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int a, y;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < n; a++)
	{
	for (y = 0; y < a; y++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
