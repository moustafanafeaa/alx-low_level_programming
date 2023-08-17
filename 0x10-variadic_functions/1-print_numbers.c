#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers
 * @n: num of args
 * @separator: str
 * @...: args
 * Return: int sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(args, n);
	while (i--)
		printf("%d%s", va_arg(args, int),
				i ? (separator ? separator : "") : "\n");
va_end(args);
}
