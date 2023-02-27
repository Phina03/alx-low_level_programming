#include "main.h"
#include <string.h>
/**
 * _strlen - Function that returns the length of a string
 * @s: The string to be printed
 * Return: Length of a string.
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}

