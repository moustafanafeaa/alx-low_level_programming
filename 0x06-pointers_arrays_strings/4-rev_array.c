#include "main.h"
#include <stdio.h>

/**
 * reverse_array - that reverses the content of an array of integers.
 *
 * @a: destination parameter to func
 * @n: destination parameter to func
 *
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
