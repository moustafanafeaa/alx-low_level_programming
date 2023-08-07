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
	int **arr, i, j;

	arr = malloc(height * sizeof(*arr));
	if (arr == 0)
		return (NULL);

	if (width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(**arr));

		if (arr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
