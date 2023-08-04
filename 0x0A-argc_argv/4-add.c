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
	char *c;

while (--argc)
{
	for (c = argv[argc - 1]; *c; c++)
	{
		if (*c >= '0' || *c <= '9')
		{
			sum += atoi(argv[argc]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
}
else
{
	printf("%d\n", 0);
}
return (0);
}
