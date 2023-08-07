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

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = calloc(width,sizeof(int));
	for (i = 0; i < width; i++)
		arr[i] = calloc(height,sizeof(int));
	if (arr == 0)
		return (NULL);
	return (arr);
}
