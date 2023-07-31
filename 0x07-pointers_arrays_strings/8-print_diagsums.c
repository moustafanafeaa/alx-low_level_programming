#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  prints the sum of the two diagonals of a
 * square matrix of integers.
 *
 * @size: string thst scanned
 * @a: char that search from
 *
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - 1 - i];
		a += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
