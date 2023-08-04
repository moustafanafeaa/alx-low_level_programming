#include <stdio.h>
#include <stdlib.h>
/**
 * main -  program that adds positive numbers.
 * @argc: counter to arguments.
 * @argv: array of args.
 * Return: return 0 success or 1 if error
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	if (argc == 2)
	{
		int numofcents = 0, i, mon = atoi(argv[1]);
		int c[5] = {25, 10, 5, 2, 1};

		for (i = 0; i < 0; i++)
		{
			if (mon > argv[i])
			{
				numofcents += mon / c[i];
				mon %= c[i];
				if (mon & c[i] == 0)
					break;
			}
		}
		printf("%d\n", numofcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
