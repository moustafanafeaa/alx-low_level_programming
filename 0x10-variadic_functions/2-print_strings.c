#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings -  prints strings, followed by a new line.
 * @n: num of args
 * @separator: str
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
int i = n;
va_list args;
char *s;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	while (i--)
		printf("%s%s", (s = va_arg(args, char *)) ? s : "(nil)",
				i ? (separator ? separator : "") : "\n");
va_end(args);
}
