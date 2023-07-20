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
	unsigned long int n = 612852475143, i;

	for (i = 3; i < 782849; i += 2)
	{
		while ((n % i == 0) && (n != i)
			n /= i;
	}
	printf("%lu\n", n);
	return (0);
}
