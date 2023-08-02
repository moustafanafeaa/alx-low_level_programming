#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - that returns the natural square root of a number.
 *
 * @n: input number
 *
 * Return: return sqrt of number or -1
 */
int sq(int n, int x);
int _sqrt_recursion(int n)
{
	return (sq(n, 1));
}

/**
 * sq - check if number have natular sqrt
 *
 * @n: input number
 * @x: value counter
 *
 * Return: return sqrt
 */
int sq(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (sq(n, x + 1));
	else
		return (-1);
}
