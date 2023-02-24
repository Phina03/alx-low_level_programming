#include "main.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of times the char prints
 * Return: Always 0
 */
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < n; a++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
