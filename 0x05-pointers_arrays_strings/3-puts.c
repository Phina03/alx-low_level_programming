#include "main.h"
#include <stdio.h>
/**
 * _puts - A function that prints a string, followed by a newline
 * @str: The string to be printed
 * Return: Always o.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
