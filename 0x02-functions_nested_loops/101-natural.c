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
	int count, n;

	for (n = 0; n <= 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			count += n;
		}
	}
	printf("%d\n", count);

	return (0);
}
