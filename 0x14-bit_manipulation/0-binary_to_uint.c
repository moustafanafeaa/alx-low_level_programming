#include "main.h"
/**
 * binary_to_uint - change binary to unsigned int
 * @b: input binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b || *b != '0' || *b != '1')
		return (0);
	else
		while(*b)
		{
			num = num * 2 + (*b++ - '0');
		}
	return (num);
}
