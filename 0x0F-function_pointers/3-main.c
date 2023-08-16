#include "3-clc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point check
 * @argc: num of args
 * @argv: arr arg
 * Return: 0
 */
int main(int args, int **argv)
{
	int (*op_func)(int, int), a, b;
	
	if (argv != 4)
		printf("Error\n", exit(98));
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op = get_op_func(argv[2]);
	if (!op_func)
		printf("Error\n", exit(99));

	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n", exit(100));
	printf("%d\n", op_func(a, b));
	return (0);
}
