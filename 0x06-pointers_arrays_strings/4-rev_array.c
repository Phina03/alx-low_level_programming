#include "main.h"
/**
 * reverse_array - function that reverses the content of an array
 * @a: The array to be reverse
 * @n: number of element of array
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i;
	int s;

	for (i = 0; i < n--; i++)
	{
		s = a[i];
		a[i] = a[n];
		a[n] = s;
	}
}
