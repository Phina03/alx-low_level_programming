#include "main.h"
/**
 * _strpbrk - Function that searches for any of a set of bytes
 * @s: String occurence
 * @accept: input
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
	for (i = 0; accept[i]; i++)
	{
	if (*s == accept[i])
		return (s);
	}
	s++;
	}
	return ('\0');
}
