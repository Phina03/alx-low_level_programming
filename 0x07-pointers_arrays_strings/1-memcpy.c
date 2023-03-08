#include "main.h"
#include <string.h>
/**
 * _memcpy: Function that copies memory area
 * @dest: Memory area
 * @src: Source 
 * @n: function to be copies
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r > i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
