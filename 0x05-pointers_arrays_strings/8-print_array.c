#include <stdio.h>
/**
 * print_array - A function that prints n elements of an array
 * @n: Number of elements of the array to be printed
 * @a: Pointer to the first int
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
