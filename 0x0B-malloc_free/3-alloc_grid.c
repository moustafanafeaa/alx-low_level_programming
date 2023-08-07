#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width:int 1
 * @height: int 2
 * Return: return pointer
 */
int **alloc_grid(int width, int height)
{
	int **arr, i;

	arr = calloc(height, sizeof(*arr));
	if (arr == NULL)
		return (NULL);

	if (width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = calloc(width, sizeof(**arr));

		if (arr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}
