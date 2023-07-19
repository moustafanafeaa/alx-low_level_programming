#include "main.h"
/**
 * main - an Entry point
 *
 * description: prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: always 0 success
 *
 */
int main(void)
{
	int i, f1 = 0, f2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = f1 + f2;
		f1 = f2;
		f2 = sum;
		printf("%d", sum);

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
}
