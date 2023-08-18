#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all -  prints strings, followed by a new line.
 * @format: num of args
 */

void print_all(const char * const format, ...)
{
	char c, *s;
	va_list args;
	int i;
	float f;

	int index = 0;
	int num_args = 0;
	va_start(args, format);

	while (format[index] != '\0')
	{
		if (num_args >= 4)
		{
			break;
		}

		if (format[index] == 'e')
		{
			index++;
			continue;
		}
		if (num_args > 0)
			printf(", ");


		switch (format[index])
		{
			case 'c':
				c = (char)va_arg(args, int);
			printf("%c", c);
			num_args++;
			break;
		case 'i':
			i = va_arg(args, int);
			printf("%d", i);
			num_args++;
			break;
		case 'f':
			f = (float)va_arg(args, double);
			printf("%f", f);
			num_args++;
			break;
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
			num_args++;
			break;
		}

		index++;
		}
va_end(args);
printf("\n");
}

