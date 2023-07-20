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
int main ()
{

long long int number, large_factor=0, i=2;

while (number!=1)
{

	if (number%i==0)
	{
		while (number%i==0)
		{
			printf ("%ld\t", i);
			number/=i;
		}

		large_factor=i;
	}

	i++;
}

printf("%ld\n", large_factor);
