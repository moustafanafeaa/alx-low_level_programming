#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main -  program that adds positive numbers.
 * @argc: counter to arguments.
 * @argv: array of args.
 * Return: return 0 success or 1 if error
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	int sum = 0;
	char *s;

while (--argc)
{
	for (s = argv[argc]; *s; s++)
	{
		if (*s < '0' || *s > '9')
		{
			printf("Error\n");
			return (1);
		}
	}
	sum += atoi(argv[argc]);
}
	printf("%d\n", sum);
	return (0);
}
