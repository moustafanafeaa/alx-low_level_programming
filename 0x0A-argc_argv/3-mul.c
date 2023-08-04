#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * main - program that multiplies two numbers.
 * @argc: counter to arguments.
 * @argv: array of args.
 * Return: return 0 success.
 */
int main(int argc, char *argv[])
{
	int mult;

if (argc == 3)
{
	mult =  atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mult);
	return (0);
}
else
{
	printf("Error\n");
	return (1);
}
return (0);
}
