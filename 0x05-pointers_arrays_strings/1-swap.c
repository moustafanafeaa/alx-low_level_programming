#include "main.h"

/**
 * swap_int -  that swaps the values of two integers.
 *
 * @a: input pointer to a
 * @b: input pointer to a
 *
 */

void swap_int(int *a, int *b)
{
	int *temp;


	temp = *a;
	*a = *b;
	*b = *temp;
}
