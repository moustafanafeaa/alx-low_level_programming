#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid -  frees a 2 dimensional grid
 * @grid:2d array
 * @height: int 2
 * Return: return pointer
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
