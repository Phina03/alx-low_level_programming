#include <stdio.h>
#include "main.h"
/**
 * main - program that prints the number of arguments
 * @argc: count the number of argument
 * @argv: array of argument
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
