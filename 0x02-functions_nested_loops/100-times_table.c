#include "main.h"
/**
 * print_times_table -  that prints the n times table, starting with 0. If
 * n is greater than 15 or less than 0 the function should not print anything
 *
 * @n - takes input to function
 *
 * example: 0, 0, 0
 *          0, 1, 2
 *
 */
void print_times_table(int n)
{
	int mult, i, j;

	if (n <= 15 || n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(0 + '0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				mult = i * j;
				if (mult <= 9)
				{
					_putchar(' ');
				}
				if (mult <= 99)
				{
					_putchar(' ');
				}
				if (mult >= 100)
				{
					_putchar((mult / 100) + '0');
					_putchar((mult / 10) % 10 + '0');
				}
				else if (mult <=99 && mult >= 10)
				{
					_putchar((mult / 10) + '0');
				}
				_putchar((mult % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
