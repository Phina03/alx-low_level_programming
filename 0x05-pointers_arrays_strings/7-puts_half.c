#include "main.h"
/**
 * puts_half - Function that prints half of a string
 * @str: The string to be printed
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i = 0, len = 0, n;

	while (str[i++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len + 2) / 2;
	for (i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
