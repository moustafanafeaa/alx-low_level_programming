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
	int sum, i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
			{
				sum += a[j];
			}
		}
	}
	printf("%d", sum);
}
