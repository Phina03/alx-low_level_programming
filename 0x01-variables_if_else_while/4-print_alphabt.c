#include <stdio.h>
/**
 * main -program that prints lowercase except q and e
 *
 * Return: Always (0)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar (ch);
	}
	putchar ('\n');
	return (0);
}
