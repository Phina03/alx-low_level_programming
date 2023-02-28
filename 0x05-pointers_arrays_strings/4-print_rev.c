#include "main.h"
#include <string.h>
/**
 * print_rev - A function that prints a string in reverse
 * @s: The string to be printed
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
