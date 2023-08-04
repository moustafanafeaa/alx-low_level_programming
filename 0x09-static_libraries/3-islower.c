#include "main.h"
#include <ctype.h>
/**
 * _islower - check if char is lowercase
 *
 * @c: check input function
 *
 * Return: return 1 if c is lowercase
 * otherwise 0 (success)
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
