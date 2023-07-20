#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: return 0 seccess
 *
 */
int main(void)
{
	long int n = 612852475143, i, d;

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (n == i)
			{
				printf("%ld\n", i);
				break;
			}
		}
		d = n / i;
		n = d;
	}
	return (0);
}
