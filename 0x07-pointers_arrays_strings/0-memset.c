#include "main.h"
#include <string.h>

/**
 * _memset - Function that fills memory with a constant byte
 * @s: Memory area
 * @b: second character variable
 * @n: integer
 * Return: A pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
