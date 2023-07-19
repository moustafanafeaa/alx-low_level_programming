#include "main.h"
/**
 * main - an Entry point
 *
 * description: prints the first 50 Fibonacci numbers, starting with
 * 1 and 2, followed by a new line.
 *
 * Return: always 0 success
 *
 */
int main(void)
{
	int i;
	unsigned int f1 = 0, f2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = f1 + f2;
		printf("%d", sum);
		f1 = f2;
		f2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
