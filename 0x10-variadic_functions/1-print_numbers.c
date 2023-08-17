#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers
 * @n: num of args
 * @separator: str
 * Return: int sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

if (separator != NULL)
{		
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		if (i == 0)
			printf("%d", x);
		else
			printf("%s%d", separator, x);
	}
	printf("\n");
	va_end(args);
}
}
