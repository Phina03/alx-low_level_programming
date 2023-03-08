#include "main.h"
#include <string.h>
/**
 * _strchr - Function that locates a character in a string
 * @s: Value containing the string to be located
 * @c: First occurrence of the character
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
