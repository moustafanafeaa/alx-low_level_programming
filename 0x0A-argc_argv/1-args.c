#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it.
 * @argc: counter to arguments.
 * @argv: array of args.
 * Return: return 0 success.
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
