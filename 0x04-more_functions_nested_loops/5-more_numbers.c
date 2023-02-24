#include "main.h"
/**
 * more_numbers - Prints 10 times the number
 * Return: Always 0
 */
void more_numbers(void)
{

	int c;
	int i;

	for (i = 0; i <= 9; i++)
	{

	for (c = 0; c <= 14; c++)
	{
	if (c > 9)
	_putchar((c / 10) + '0');
	_putchar((c % 10) + '0');

	}
	_putchar('\n');
	}
}
