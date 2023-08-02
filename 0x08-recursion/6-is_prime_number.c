#include "main.h"
/**
 * is_prime_number -  function that returns 1 if the input integer is 
 *     a prime number, otherwise return 0.
 *
 * @n: input number
 *
 * Return: return 1 if n is prime or 0 is not
 */
int is_prime_number(int n)
{
	static int i = 2;

	if (n == 0 || n == 1)
		return (0);
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	i++;
	return (is_prime_number(n));
}
