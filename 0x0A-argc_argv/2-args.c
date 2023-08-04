#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives.
 * @argc: counter to arguments.
 * @argv: array of args.
 * Return: return 0 success.
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
