#include "main.h"
#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 *  But for multiples of three print Fizz instead of the number and for the
 *   multiples of five print Buzz. For numbers which are
 *   multiples of both three and five print FizzBuzz.
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
		n = d
	}
	return (0);
}
