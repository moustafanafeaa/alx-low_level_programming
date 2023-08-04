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
	int sum = 0, i;
if (argc > 1)
{
	for (i = 1; i < argc; i++)
	{
		if (isdigit((char)argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else if (isdigit(atoi(argv[i])) == 0)
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
