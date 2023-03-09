#include "main.h"
/**
 * _strlen_recursion - Function that returns length of a string
 * @s: Length of the string
 * Return: Length
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
