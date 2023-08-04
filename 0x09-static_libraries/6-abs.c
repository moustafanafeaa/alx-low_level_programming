#include "main.h"
#include <ctype.h>
/**
 * _abs -  computes the absolute value of an integer
 *
 * @n: check input function
 *
 * Return: return 0 (success)
 */
int _abs(int n)
{
	int res;

	if (n < 0)
	{
		res = -1 * n;
		return (res);
	}
	return (n);
}
