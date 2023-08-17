#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sum of args
 * @n: num of args
 * @separator: str
 * Return: int sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);
		if (i == 0)
			printf("%d", x);
		else
			printf("%s%d",separator, x);
	}
	printf("\n");
	va_end(args);
}
