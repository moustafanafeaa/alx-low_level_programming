#include "function_pointers.h"

/**
 * int_index -that searches for an integer.
 * @array: array of int
 * @size: size of arr
 * @cmp: ptr to func
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
