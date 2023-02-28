#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: The string to be reversed
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i = 0;
	int c = 0;
	char tmp;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;

	while (c < i)
	{
		tmp = s[i];
		s[i] = s[c];
		s[c] = tmp;
		c++;
		i--;
	}
}
