#include "main.h"
#include <ctype.h>
/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n: check input function
 *
 * Return: return 0 (success)
 */
int print_last_digit(int n)
{
	int res;

	if (n < 0)
	{
		res = (-1 *( n % 10) ;
	}
	else
	{
	res = n % 10;
	}
	_putchar(res + '0');
	return (res);
}
