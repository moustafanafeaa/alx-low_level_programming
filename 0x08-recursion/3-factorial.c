#include "main.h"
/**
 * factorial - function that returns the factorial of a given number.
 *
 * @n: input number
 *
 * Return: return factorial of n
 */
int factorial(int n)
{
	if (n <= 1)
		return (1);
	else
	{
		return (n * factorial(n - 1));
	}
}
