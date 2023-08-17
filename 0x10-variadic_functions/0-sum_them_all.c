#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sum of args
 * @n: num of args
 * Return: int sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
        int sum = 0;
va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum += x;
	}
	return (sum);
}
