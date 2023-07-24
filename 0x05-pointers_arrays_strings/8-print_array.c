#include "main.h"

/**
 * print_array - prints half of a string
 *
 * @a: input pointer to a
 * @n: input int
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if ( i == n - 1)
			printf("%c", a[i]);
		else 
			printf("%c, ", a[i]);
	}
}
