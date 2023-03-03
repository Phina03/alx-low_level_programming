#include "main.h"
#include <string.h>
/**
 * _strncat - Function that concatenates two strings.
 * @dest: Destination of the first string
 * @src: Source string
 * @n: integer to be aaddressed
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;
	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
