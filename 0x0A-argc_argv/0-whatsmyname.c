#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the prog
 * @argc: counts the arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
