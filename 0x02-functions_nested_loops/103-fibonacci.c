#include <stdio.h>
/**
 * main - Prints sum of even- valued Fibonacci sequence
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	long fib1 = 1, fib2 = 2, sum = fib2;

	while (fib2 + fib1 < 4000000)
	{
		fib2 += fib1;
	if (fib2 % == 0)
		sum += fib2;
		fib1 = fib2 - fib1;
		++i;
	}
		printf("%d\n", sum);
		return (0);
}
