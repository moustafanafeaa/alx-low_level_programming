#include "main.h"
#include <ctype.h>
/**
 * _print_sign - check sign of the number
 *
 * @n: check input function
 *
 * Return: 1 if positive 0 if equal 0 -1 if negative
 */
int _print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
