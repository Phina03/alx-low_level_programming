#include "main.h"

/**
 * _islower - Function to check for lowercase char
 * @c: The char to be checked
 * Return: 1 || 0
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
